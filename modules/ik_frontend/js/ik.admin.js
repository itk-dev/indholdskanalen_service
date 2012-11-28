(function($) {
  $(document).ready(function() {
    $('.ik-frontend-buttons .bookmark').click(function(e) {
      if (window.sidebar) {
        // Mozilla Firefox Bookmark
        window.sidebar.addPanel(document.title, location.href, "");
      }
      else if (window.external) {
        // IE Favorite
        window.external.AddFavorite(location.href, document.title);
      }
      else if (window.opera && window.print) {
        // Opera Hotlist
        this.title = document.title;
        return true;
      }
    });
  });

})(jQuery);