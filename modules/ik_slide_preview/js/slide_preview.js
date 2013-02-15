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
        width: 507,
        height: '322',
        resize: function(event, ui) {
          // Reload iframe content.
          frame.src = src;
        }
      });

      // Append iframe to the dialog.
      $('#slide-preview').append(frame);

      // Add content to the iframe.
      frame.src = src;
      
      return false;
    })    
  });
})(jQuery);