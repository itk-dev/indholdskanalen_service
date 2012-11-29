var IKFrontend = IKFrontend || { 'settings': {} };

(function($){
  $(document).ready(function() {
    console.log(IKFrontend.settings.token);
    $.ajax({
      type: 'POST',
      url: '/channels/'+IKFrontend.settings.token+'/update',
      data: 'channelid',
      dataType: 'JSON',
      success: function(data) {
        console.log(data);
      }
    });
  });

})(jQuery)