
/**
 * Override media modules default dialog options.
 *
 * Mostly the height.
 *
 * Returns the commonly used options for the dialog.
 */
if (Drupal.media !== undefined && Drupal.media.popups !== undefined) {
  Drupal.media.popups.getDialogOptions = function () {
    return {
      buttons: {},
      dialogClass: 'media-wrapper',
      modal: true,
      draggable: false,
      resizable: false,
      minWidth: 500,
      width: 670,
      height: 480,
      position: 'center',
      overlay: {
        backgroundColor: '#000000',
        opacity: 0.4
      },
      zIndex: 10000,
      close: function (event, ui) {
        $(event.target).remove();
      }
    };
  };
}
