(function($){
  Drupal.behaviors.media_video = {
    attach: function (d) {

      // Attach some behaviors to our new sub-fields
      $('.video-widget .media-widget input.fid').change(function(e){

        // Get the FID field for video from the media FID field
        var input = $(this).attr('name').replace('[media]', '');

        // Change the video field FID value to match the one we just got from the Media Browser
        $('[name="' + input + '"]').val($(this).val());

        // Get the ID of this field's upload button
        var button = $(this).parent().attr('id').replace('media', 'upload-button');

        // Avoid thumbnail validation errors
        var thumbnail = $(this).attr('name').replace('[media][fid]', '[thumbnail]');
        $('[name="' + thumbnail + '"]').val('0');

        // Fire the change event to make the field reload AJAX
        $('#' + button).mousedown();

      });
    }, // EO attach
  }; // EO behaviors.media_video
})(jQuery);
