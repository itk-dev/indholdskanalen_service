// Define configuration object to get settings data from backend to frontend.
// Before calls are made to the backend.
var IKFrontend = IKFrontend || { 'settings': {} };

// Object chanele {
//
//  Functions
//  -- start
//  -- stop
//
//  -- debug
//  ---- enable/disable console log from console.
//
//
//  -- fetch_channel()
//  ---- also update
//  ---- '/channels/' + IKFrontend.settings.token + '/update'
//
//  -- nextSlide()
//  -- prevSlide()
//  -- changeSlide(from sid, to sid, effect)
//
//
//  Exposed outside object.
//  -- start()
//  -- stop().
//  -- debug(on/off).
//
// }
//
// Object slide {
//  Store render slide, cache, last updated ?
//
//  Functions
//  -- fecth_slide(sid)
//  ---- '/channels/' + IKFrontend.settings.token + '/slide/{sid}'
//
//  -- render().
// }
//
//
//}



(function($){
  $(document).ready(function() {

    // Create channel object

    // Below is tmp debugging.
    console.log(IKFrontend.settings.token);
    $.ajax({
      type: 'GET',
      url: '/channels/' + IKFrontend.settings.token + '/update',
      dataType: 'JSON',
      success: function(data) {
        console.log(data);
      }
    });
  });

})(jQuery)