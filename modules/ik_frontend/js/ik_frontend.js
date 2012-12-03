/*jshint devel:true */

// Define configuration object to get settings data from backend to frontend.
// Before calls are made to the backend.
var IKFrontend = IKFrontend || { 'settings': {} };

// Create closed namespace with revealing module pattern.
var IK = (function() {
  "use strict";

  // Vataibles available inside the IK scope.
  var settings = {
    debug : false
  };

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
   * Render the slide using the PURE template.
   */
  Slide.prototype.render = function() {

  };

  /****************
   * Channel object implementation.
   */
  function Channel(token) {
    this.token = undefined;

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
      var slides = new Slide(this.token, '11');
    };

    /**
     * Goto the next slide.
     */
    this.nextSlide = function () {

    };

    /**
     * Goto previous slide.
     */
    this.prevSlide = function () {

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
    var channel = new Channel(token);
  }

  /**
   * Stops the slide show ?
   */
  function stop() {

  }

  /**
   * Destroy the channel object and its slide objects.
   */
  function destory() {

  }

  /**
   * Toggle debug on/off (off as default).
   */
  function debug() {
    settings.debug = !settings.debug;
    console.log('Debug: ' + settings.debug);
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
    debug: debug,
    destory: destory
  };
})();


(function($){
  $(document).ready(function() {
    IK.debug();
    IK.start(IKFrontend.settings.token);
  });
})(jQuery);