(function($){
  $(document).ready(function() {
    $('.preview-live-slide').click(function(e) {
      e.preventDefault();
      var src = $(this).attr('href');
      
      // Build iframe.
      var frame = document.createElement('iframe');
      frame.width = '99%';
      frame.height = '99%';

      // Build jQuery UI dialog.
      $('<div id=\"slide-preview\" style=\"overflow:hidden\"></div>').dialog({
        modal: true,
        width: $(window).width() - 100,
        height: $(window).height() - 100,
        resizable: false,
        draggable: false,
      });

      // Append iframe to the dialog.
      $('#slide-preview').append(frame);

      // Add content to the iframe.
      frame.src = src;
     
      // Add class to body.
      setTimeout(
        function(){
          var element = $('body', frames[0].document);
          element.addClass('slide-preview');
        }, 1000
      );

      return false;
    })
  });
})(jQuery);