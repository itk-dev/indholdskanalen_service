// Disable/Enable cursor if user is inactive/active.
(function($){
  /*var timeout = 5000;
  $( document ).idleTimer( timeout, {
    startImmediately: false, // starts a timeout as soon as the timer is set up; otherwise it waits for the first event.
    idle:    false,         // indicates if the user is idle
    enabled: true,          // indicates if the idle timer is enabled
    events:  'mousemove keydown DOMMouseScroll mousewheel mousedown touchstart touchmove' // activity is one of these events
  });
  
  $( document ).on( "idle.idleTimer", function(){
    $("body").css("cursor","none");
  });
  
  $( document ).on( "active.idleTimer", function(){
    $("body").css("cursor","default");
  });*/

  // Resize slide image when browser window is resized.
  var resizer = function () {
    var width = $(window).width();
    var height = $(window).height();
    var aspectRatio = 1980 / 1080;
    $('.box_skitter').width(width).height(height);
    $('.container_skitter').width(width).height(height);
    if ( (width / height) < aspectRatio ) {
      //Height
      $('.image_main').css('width', '');
      $('.image_main').height(height);
    } else {
      //Width
      $('.image_main').width(width);
      $('.image_main').css('height', '');
    }

  };
  $(window).on('resize', resizer);

})(jQuery);