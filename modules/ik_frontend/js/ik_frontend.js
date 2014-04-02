/*jshint devel:true */
/*jshint laxbreak:true*/

// Define configuration object to get settings data from backend to frontend.
// Before calls are made to the backend.
var IKFrontend = IKFrontend || {'settings': {}};

// Create closed namespace with revealing module pattern.
var IK = (function() {
  "use strict";

  // Variables available inside the IK scope.
  var settings = {
    debug : false,
    animateChange : true,
    fullscreen : true,
    orgImgAspect : [1920, 1080]
  };
  var channel;

  /****************
   * Slide object implementation.
   *
   * Using prototype to ensure that the objects uses the same implementation and
   * not creates a copy for each slide object.
   */
  function Slide(token, sid, fetch) {
    this.propreties = {};

    this.__construct(token, sid, fetch);
  }

  /**
   * Constructor that is called on object creation and ensure that the slide is
   * fetched from the backend.
   */
  Slide.prototype.__construct = function (token, sid, fetch) {
    this.token = token;
    this.sid = sid;

    // Fetch all slides for the channel
    if (fetch) {
      this.fetchSlide();
    }
  };

  /**
   * Fetch slide from the backend.
   */
  Slide.prototype.fetchSlide = function () {
    var self = this;
    log('Trying to fetch slide: ' + self.sid);
    $.ajax({
      type: 'POST',
      url: '/channels/' + self.token + '/slide/' + self.sid,
      context: this,
      dataType: 'JSON',
      success: function (data) {
        // Mark the slide as fetched.
        data.fetched = true;
        this.processSlide(data);
      },
      error: function () {
        log('Slide ' + self.sid + ' fetch failed.');

        // Mark the slide as not fetched, which is used in the update function.
        this.propreties.fetched = false;
      }
    });
  };

  /**
   * Process the fetched slide when the AJAX call succeeds.
   */
  Slide.prototype.processSlide = function (data) {
    log('Slide ' + this.sid + ' fetched.');

    // Build directive for PURE based on type.
    if (data.media.video.length) {
      this.directive = {
        '.video-container source' : {
          'medium<-media.video' : {
            '@src' : 'medium.url',
            '@type' : 'medium.type'
          }
        },
        '.slide-heading' : 'title',
        '.slide-subheading' : 'subheading',
        '.slide-text' : 'text',
        '.logo-container img@src' : 'logo',
        '.logo-container@style' : function (arg) {
          if (arg.context.logo) {
            return 'display:block;';
          } else {
            return 'display:none;';
          }
        }
      };

      // Compile template with the directive.
      this.template = $('#pure-template-video').compile(this.directive);
    }
    else {
      this.directive = {
        '.image-container img' : {
          'medium<-media.image' : {
            '@src' : 'medium'
          }
        },
        '.slide-heading' : 'title',
        '.slide-subheading' : 'subheading',
        '.slide-text' : 'text',
        '.logo-container img@src' : 'logo',
        '.logo-container@style' : function (arg) {
          if (arg.context.logo) {
            return 'display:block;';
          } else {
            return 'display:none;';
          }
        }
      };

      // Compile template with the directive.
      this.template = $('#pure-template-image').compile(this.directive);
    }

    this.propreties = data;
  };

  /**
   * Helper function to get slide property.
   */
  Slide.prototype.get = function (property) {
    if (this.propreties[property] !== undefined) {
      return this.propreties[property];
    }
    else {
      log('Slide failed to get property: ' + property);
    }
    return undefined;
  };

  /**
  * Applies image cycle to the current slide and should be called after a slide
  * have been shown.
  */
  Slide.prototype.startCycle = function () {
    var self = this;

    // Only start the image cycle if there are more than one image.
    if (self.get('mediacount') > 1) {
      var fade = 1500;
      var fadetime = fade * (self.get('mediacount') - 1);
      var interval = (self.get('exposure') - fadetime) / self.get('mediacount');

      $('.image-container').cycle({
        fx : 'fade',
        speed : fade,
        timeout : interval,
        log : false,
        loop : 1
      });
    }
    else {
      // Only one image, so just display it.
      $('.image-container img').show();
    }
  };

  /**
   * Animate the change between to slides (currently simple fade).
   */
  Slide.prototype.animateChange = function (from, to) {
    var self = this;
    // If this is the first slide, there may not be any to fe
    if (from.length === 0) {
      // Simply insert the slide and return.
      $('#slide-container').html(to);
      this.startCycle();
      return;
    }

    // If full screen mode for cycle is true we must make sure that images in
    // UL get same height or width setting as cycle use. This is to make sure
    // the image is correct size when fading between slides.
    if (settings.fullscreen === true) {
      var aspectRatio = settings.orgImgAspect[0] / settings.orgImgAspect[1];
      var windowWidth = $(window).width();
      var windowHeight = $(window).height();
      if ( (windowWidth / windowHeight) < aspectRatio ) {
        // Height.
        $('.image-container', to).find('img').height(windowHeight);
      } else {
        // Width.
        $('.image-container', to).find('img').width(windowWidth);
      }
    }

    // Insert the new slide behind the current one and fade the current out.
    from.css('z-index', 2);
    to.css('z-index', 1);
    $('#slide-container').append(to);
    from.fadeOut(1500, function () {
      // Remove the old slide.
      from.remove();
      self.startCycle();
    });
  };

  /**
   * Render the slide using the PURE template. See the constructor for
   * information about the directive and template.
   */
  Slide.prototype.render = function() {
    // Apply the template to the current slide data.
    var slide = $(this.template(this.propreties));

    // Apply layout class and set id. It is not done in pure as this is on the
    // outer element, which can't be accessed in pure.
    slide.attr('id', 'slide-' + this.get('sid'));
    slide.addClass(this.get('layout'));
    slide.addClass(this.get('color'));

    // Either insert the slide or animate from one to the other.
    if (settings.animateChange === true) {
      // Using the slide container to ensure that we don't gets the template.
      this.animateChange($('#slide-container .slide'), slide);
    }
    else {
      // Simple insert the slide.
      $('#slide-container').html(slide);
      this.startCycle();
    }

    // Set font-size.
    $('#slide-' + this.get('sid') + ' .slide-text').removeClass('normal bigger');
    $('#slide-' + this.get('sid') + ' .slide-subheading').removeClass('normal bigger');
    $('#slide-' + this.get('sid') + ' .slide-text').addClass(this.get('fontsize'));
    $('#slide-' + this.get('sid') + ' .slide-subheading').addClass(this.get('fontsize'));

    // Animate the progress bar.
    var progress = $('#progress');
    progress.stop(true, true);
    progress.css('width','0px');
    progress.animate({width: '100%'}, this.get('exposure'));

    // Update slide count.
    if (channel) {
      var currentSlideCount = channel.currentSlide + 1;
      var channelSlideAmount = channel.slides.length;
      $('#slide-count').text( currentSlideCount + ' af ' + channelSlideAmount);

      // Send log message.
      log('Slide amount: ' + channelSlideAmount + ' Current slide: ' + currentSlideCount);
    }

    // Send log message.
    log('Slide render: ' + this.get('title') + ' (exposure: ' + this.get('exposure') + ')');
  };

  /****************
   * Channel object implementation.
   */
  function Channel(token) {
    // Object properties.
    this.token = undefined;
    this.slides = [];
    this.updatedSlides = [];
    this.currentSlide = 0;
    this.timeout = undefined;
    this.fetched = false;

    /**
     * Constructor that is called on object creation and ensure that the channel
     * is fetched from the backend. Side effect is that all slide is fected for
     * the channel as well.
     */
    this.__construct = function (token) {
      this.token = token;
      this.fetchChannel();
    };

    /**
     * Gets information about the channel from the backend.
     */
    this.fetchChannel = function () {
      var self = this;
      log('Trying to fetch channel with token: ' + this.token);
      $.ajax({
        type: 'POST',
        context: this,
        url: '/channels/' + this.token + '/update',
        dataType: 'JSON',
        success: function (data) {
          this.processChannel(data);
        },
        error: function () {
          // The server did not return a new channel.
          log('Could not fetch channel from the server with token: ' + this.token);

          // Check if we have any old slides and if we do run the slide show.
          if (self.slides.length !== 0) {
            // Go to the next slide.
            self.nextSlide();
          }
          else {
            // This would only happen on the first channel load and not on
            // updates.
            alert('There was an error in fetching the channel. Please try agian.');
          }
        }
      });
    };

    /**
     * Callback when data is returned form the backend.
     */
    this.processChannel = function (data) {
      log('Channel with token ' + this.token + ' fetched.');

      // Load all slides in the channel.
      var self = this;
      self.updatedSlides = [];
      $.each(data, function(i, item) {
        var slide = new Slide(self.token, item.nid, true);
        self.updatedSlides.push(slide);
      });

      // Capture event when all ajax request have completed.
      $('body').ajaxStop(function() {
        if (!this.fetched) {
          // Channel and slide have been fetched for a new channel. We set the
          // fetched variable, so the slide show will not be restarted on
          // channel updates.
          this.fetched = true;
          log('All slides for the channel (' + self.token + ') fechted');

          // Copy the updated slides into slides.
          if (self.updatedSlides !== 0) {
            self.slides = self.updatedSlides.slice(0);

            // Start the slide show.
            self.start();
          }
          else {
            alert('Could not fetch all slides. Please try agian.');
          }
        }
        else {
          // This most be a channel update.
          log('All slides updated for the channel: ' + self.token);

          // Now that the channel should be update and slides fetched. We check
          // if the slides where in fact fetched and only throw the current slide
          // out if any new ones where fetched. The Ajax calls may have failed
          // if the server was off-line.
          if (self.updatedSlides !== 0) {
            var slides = [];
            $(self.updatedSlides).each(function() {
              if (this.get('fetched')) {
                slides.push(this);
              }
            });

            // Only update slides if any was fetched.
            if (slides.length !== 0) {
              self.slides = slides.slice(0);
            }
          }

          // Go to the next slide.
          self.nextSlide();
        }

        // Ensures that process channel can be called more than once. If we do
        // not unbind the ajaxStop event will be call more than once.
        $('body').unbind();
      });
    };

    /**
     * Go to the next slide.
     */
    this.nextSlide = function () {
      var self = this;
      var slide = self.slides[self.currentSlide];

      // Render current slide.
      slide.render();

      // Set timeout to change to next slide.
      this.timeout = setTimeout(function() {
        // Update the current slide pointer.
        self.currentSlide++;
        if (self.currentSlide === self.slides.length) {
          self.currentSlide = 0;
          log('Restarting the channel to first slide');
          // Try to update the channel by pulling the server (this could be
          // implemented using a web-socket and send push messages).
          self.fetchChannel();
        }
        else {
          // Go to the next slide. The channel update above will call the next
          // slide when they have been loaded.
          self.nextSlide();
        }
      }, parseInt(slide.get('exposure'), 10));
    };

    /**
     * Starts the slide show for the current channel.
     */
    this.start = function () {
      log('Starting the show');
      this.nextSlide();
    };

    /**
     * Stops the slide show be clearing the time-out the changes the slides.
     */
    this.stop = function () {
      log('Stopping the show');
      clearTimeout(this.timeout);
    };

    /**
     * Free all memory used (Remove channel, slides and timeout).
     *
     * @todo Loop over the slides an call destroy on each slide.
     */
    this.destory = function() {
      this.stop();
      this.slides = [];
      this.fetched = false;
      log('Channel have been destroyed.');
    };

    // Call the constructor.
    this.__construct(token);
  }

  /****************
   * Public function implementation (the functions that are returned).
   */

  /**
   * Starts the slide show by loading channel and slides from the backend based
   * on the token given as argument.
   */
  function start(token) {
    if (channel === undefined) {
      channel = new Channel(token);
    }
    else {
      channel.start();
    }
  }

  /**
   * Stops the show.
   */
  function stop() {
    channel.stop();
  }

  /**
   * Helper function used to display a single slide. Mostly used to preview a
   * slide in the administration interface.
   */
  function showSlide(content) {
    // Get an empty slide object.
    var slide = new Slide('', '', false);

    // Set slide content.
    slide.processSlide(content);

    settings.animateChange = true;

    // Render current slide and display it.
    slide.render();

    // Re-render the slide to reset the display.
    this.timeout = setTimeout(function() {
      slide.render();
    }, parseInt(slide.get('exposure'), 10));
  }

  /**
   * Destroy the channel object and its objects.
   */
  function destory() {
    channel.destory();
  }

  /**
   * Toggle debug on/off (off as default).
   */
  function debug() {
    settings.debug = !settings.debug;
    log('Debug: ' + settings.debug);
  }

  /**
   * Log message to console, if debug is on (default debug is off).
   */
  function log(msg) {
    if (settings.debug === true) {
      console.log(msg);
    }
  }

  // Public functions
  return {
    start: start,
    stop: stop,
    showSlide: showSlide,
    destory: destory,
    debug: debug
  };
})();

