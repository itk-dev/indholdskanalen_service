(function($){
  // Resize slide image when browser window is re-sized.
  var resizer = function () {
    var width = $(window).width();
    var height = $(window).height();
    var aspectRatio = 1980 / 1080;
    $('.image-container').width(width).height(height);
    var image = $('.image_main');
    if ( (width / height) < aspectRatio ) {
      //Height
      image.css('width', '');
      image.height(height);
    } else {
      //Width
      image.width(width);
      image.css('height', '');
    }

  };
  $(window).on('resize', resizer);

})(jQuery);
