(function($) {
  $('document').ready(function() {

    // Add handler to the remove item button.
    $("a.ik-channel-filter-remove").live("click", function(){
      var item = $(this).parent();
      var str = $('.value', item).text();
      var value = item.parent().parent().find('input[type="hidden"]');
      var current = value.val();

      // Remove the value from the hidden field. This is some what a hack at the
      // moment.
      var regex = new RegExp(str + ",?");
      current = current.replace(regex, '');
      if (current.charAt(current.length-1) == ',') {
        current = current.substr(0, current.length-1);
      }

      // Remove the item and update the hidden field.
      item.remove();
      value.val(current);
    });

    // Handle add button.
    $('.ik-channel-filter-add-button').click(function(e) {
      e.preventDefault();
      var parent = $(this).parent();
      var data = parent.find('input[type="text"]').val();

      // @todo: validate with server that data is okay or hook into behavoiusr
      // and only enable on one hit from autocomplete.

      // Update the hidden field and handle that it may be empty.
      var current = parent.find('input[type="hidden"]').val();
      if (current === '') {
        parent.find('input[type="hidden"]').val(data);
      }
      else {
        parent.find('input[type="hidden"]').val(current + ',' + data);
      }

      // Update the UI by adding the element.
      var element = $('<li><span class="value">' + data + '</span><a class="button ik-channel-filter-remove">'+Drupal.t('Remove')+'</a></li>');
      $(this).parent().find('.ik-channel-filter-results').append(element);

      // Empty the input field.
      parent.find('input[type="text"]').val('');
    });
  });
})(jQuery);