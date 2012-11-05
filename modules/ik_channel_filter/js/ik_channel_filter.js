(function($) {
  $('document').ready(function() {

    $("a.ik-channel-filter-remove").live("click", function(){
      var item = $(this).parent();
      var value = item.parent().parent().find('input[type="hidden"]');

      item.remove();

      var str = $('.value', item).text();

      console.log(str);
      value.val(value.val().replace(str, ''));

    });

    $('.ik-channel-filter-add-button').click(function(e) {
      e.preventDefault();
      var parent = $(this).parent();
      var data = parent.find('input[type="text"]').val();

      // @todo: validate with server that data is okay or hook into behavoiusr
      // and only enable on one hit from autocomplete.

      var current = parent.find('input[type="hidden"]').val();
      if (current === '') {
        parent.find('input[type="hidden"]').val(data);
      }
      else {
        parent.find('input[type="hidden"]').val(current + ',' + data);
      }

      // @todo: validate with server that data is okay.
      var element = $('<li><span class="value">' + data + '</span><a class="button ik-channel-filter-remove">'+Drupal.t('Remove')+'</a></li>');
      $(this).parent().find('.ik-channel-filter-results').append(element);

      // Empty field.
      parent.find('input[type="text"]').val('');
    });
  });
})(jQuery);