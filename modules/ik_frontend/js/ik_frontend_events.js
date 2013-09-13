(function($){
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