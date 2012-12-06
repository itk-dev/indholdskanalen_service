/*jshint devel:true */
/*jshint laxbreak:true*/

// Define configuration object to get settings data from backend to frontend.
// Before calls are made to the backend.
var IKFrontend = IKFrontend || {'settings': {}};

// Create closed namespace with revealing module pattern.
var IK = (function() {
  "use strict";

  // Vataibles available inside the IK scope.
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
  function Slide(token, sid) {
    this.propreties = {};

    this.__construct(token, sid);
  }

  /**
   * Constructor that is called on object creation and ensure that the slide is
   * fetched from the backend.
   */
  Slide.prototype.__construct = function (token, sid) {
    this.token = token;
    this.sid = sid;

    // Build directive for PURE
    this.directive = {
      '.image-container li' : {
        'medium<-media' : {
          'img@src' : 'medium'
        }
      },
      '.text-container@style' : function (arg) {
        // Set text and background color.
        return 'color:#' + arg.context.text_color + ';background-color:#' + arg.context.color;
      },
      '.slide-heading' : 'title',
      '.slide-subheading' : 'subheading',
      '.slide-text' : 'text',
      '.logo-container img@src' : 'logo'
    };

    // Compile template with the directive.
    this.template = $('#pure-template').compile(this.directive);

    // Fetch all slides for the channel
    this.fetchSlide();
  };

  /**
   * Fetch slide from the backend.
   */
  Slide.prototype.fetchSlide = function () {
    log('Trying to fetch slide: ' + this.sid);
    $.ajax({
      type: 'POST',
      url: '/channels/' + this.token + '/slide/' + this.sid,
      context: this,
      dataType: 'JSON',
      success: function (data) {
        this.processSlide(data);
      }
    });
  };

  /**
   * Process the fetched slide when the AJAX call succeeds.
   */
  Slide.prototype.processSlide = function (data) {
    log('Slide ' + this.sid + ' fetched.');
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
  * Applies skitter to the current slide and should be called after a slide have
  * been shown.
  */
  Slide.prototype.startSkitter = function () {
    var self = this;

    // Skitter image slideshow
    $('#slide-container .image-container').skitter({
      animation: 'cubeSize',
      orgImgAspect: settings.orgImgAspect,
      fullscreen: settings.fullscreen,
      numbers: false,
      navigation: false,
      label: false,
      stop_over: false,
      interval: ((self.get('exposure') / self.get('media').length) - 600),
      structure: '<div class="container_skitter">'
                  + '<div class="image">'
                    + '<a href=""><img class="image_main" /></a>'
                  + '</div>'
                + '</div>'
    });
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
      this.startSkitter();
      return;
    }

    // If fullscreen mode for skitter is true we must make sure that images in UL get same height or width setting as skitter use.
    // This is to make sure the image is correct size when fading between slides.
    if (settings.fullscreen === true) {
      var aspectRatio = settings.orgImgAspect[0] / settings.orgImgAspect[1];
      var windowWidth = $(window).width();
      var windowHeight = $(window).height();
      if ( (windowWidth / windowHeight) < aspectRatio ) {
        // Height.
        $('.box_skitter ul', to).find('img').height(windowHeight);
      } else {
        // Width.
        $('.box_skitter ul', to).find('img').width(windowWidth);
      }
    }

    // Ensure that images is show while skitter loads.
    $('.box_skitter ul', to).show();

    // Insert the new slide behind the current one and fade the current out.
    from.css('z-index', 2);
    to.css('z-index', 1);
    $('#slide-container').append(to);
    from.fadeOut(1500, function () {
      // Remove the old slide.
      from.remove();
      self.startSkitter();
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

    // Either insert the slide or animate from one to the other.
    if (settings.animateChange === true) {
      // Using the slide container to ensure that we don't gets the template.
      this.animateChange($('#slide-container .slide'), slide);
    }
    else {
      // Simple insert the slide.
      $('#slide-container').html(slide);
      this.startSkitter();
    }

    // Send log message.
    log('Slide render: ' + this.get('title'));
  };

  /****************
   * Channel object implementation.
   */
  function Channel(token) {
    // Object properties.
    this.token = undefined;
    this.slides = [];
    this.currentSlide = 0;
    this.timeout = undefined;

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
      log('Trying to fetch channel with token: ' + this.token);
      $.ajax({
        type: 'POST',
        context: this,
        url: '/channels/' + this.token + '/update',
        dataType: 'JSON',
        success: function (data) {
          this.processChannel(data);
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
      $.each(data, function(i, item) {
        var slide = new Slide(self.token, item.nid);
        self.slides.push(slide);
      });

      // Capture event when all ajax request have completed.
      $("body").ajaxStop(function() {
        log('All slides for the channel (' + self.token + ') fechted');
        self.start();
      });
    };

    /**
     * Goto the next slide.
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
          // Should we do someting about update of the channel here or outside
          // all this.
        }

        // Goto the next slide.
        self.nextSlide();
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
     * Stops the slide show be clearing the tiemout the changes the slides.
     */
    this.stop = function () {
      log('Stopping the show');
      clearTimeout(this.timeout);
    };

    /**
     * Free all memory used (Remove channel, slides and timeout).
     */
    this.destory = function() {

    };

    // Call the constructor.
    this.__construct(token);
  }

  /****************
   * Public function implementation (the functions that are returned).
   */

  /**
   * Starts the slide show by loading channel and slides from the backned based
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
    destory: destory,
    debug: debug
  };
})();


(function($){
  $(document).ready(function() {
    IK.debug();
    IK.start(IKFrontend.settings.token);

    // Ensure that the channel is reload on resize.
    /*$(window).bind('resize', function() {
      location.reload();
    });*/
  });
})(jQuery);