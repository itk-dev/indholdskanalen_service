(function($){
  $(document).ready(function() {
//    console.log(Drupal.settings.ik_channel_preview);
    var fields = $('.ik-channel-filter-values');


    fields.change(function(e) {
      e.preventDefault();

      var values = {};
      fields.each(function(i) {
        var field = $(fields[i]);
        var name = field.attr('name').substr(0, field.attr('name').indexOf('['));
        values[name] = field.val();
      });

      $.ajax({
        type: 'POST',
        url: '/ik/preview/update',
        data: { 'ik_preview_values' : values },
        success: function(data) {console.log(data)},
        dataType: 'json'
      });
    });
  });
})(jQuery)

