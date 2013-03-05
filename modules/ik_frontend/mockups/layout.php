<?php
$skitter_effects = array(
  'cube',
  'cubeRandom',
  'block',
  'cubeStop',
  'cubeHide',
  'cubeSize',
  'horizontal',
  'showBars',
  'showBarsRandom',
  'tube',
  'fade',
  'fadeFour',
  'paralell',
  'blind',
  'blindHeight',
  'blindWidth',
  'directionTop',
  'directionBottom',
  'directionRight',
  'directionLeft',
  'cubeStopRandom',
  'cubeSpread'
);
?>
<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-type" content="text/html; charset=utf-8" />
  <title>Slide layout <?php print (isset($_GET["layout"])) ? $_GET["layout"] : "- select layout"; ?></title>
  <link href="../css/styles.css" rel="stylesheet" type="text/css" media="all">
  <link href="../js/skitterslideshow/css/skitter.styles.css" type="text/css" media="all" rel="stylesheet" />

  <script src="../js/jquery-1.8.3.min.js"></script>
  <script src="../js/skitterslideshow/js/jquery.easing.1.3.js"></script>
  <script src="../js/skitterslideshow/js/jquery.animate-colors-min.js"></script>
  <script src="../js/skitterslideshow/js/jquery.skitter.min.js"></script>

  <script>
  $(document).ready(function() {

    // Skitter image slideshow
    $('.image-container').skitter({
      fullscreen: false,
      numbers: false,
      navigation: false,
      label: false,
      stop_over: false,
      interval: 2500, //MUST BE CALCULATED BASED ON THE AMOUNT OF IMAGES AND TIME (seconds) SLIDE IS SET TO DISPLAY.
      structure: '<div class="container_skitter">'
                  + '<div class="image">'
                    + '<a href=""><img class="image_main" /></a>'
                  + '</div>'
                + '</div>'
    });

    $(window).bind('resize', function() {
      location.reload();
    });

  });
  </script>

</head>
<body>
<?php if (isset($_GET["layout"])) : ?>
  <!-- template -->
  <div id="pure-template" class="slide">
    <div class="image-container box_skitter">
      <ul>
        <li>
          <a href="#cubeSize">
            <img class="cubeSize" src="" />
          </a>
        </li>
      </ul>
    </div>
    <div class="text-wrapper">
      <div class="text-container">
        <div class="heading-container">
          <div class="slide-heading"></div>
          <div class="divider"></div>
          <div class="slide-subheading"></div>
        </div>
        <div class="slide-text">
        </div>
      </div>
    </div>
    <div class="logo-container"></div>
  </div>
  <!-- end template -->

  <div id="slide-container">
    <div id="pure-template" class="slide layout-<?php print (isset($_GET["layout"])) ? $_GET["layout"] : "1"; ?>">
      <div class="image-container box_skitter">
        <ul>
          <?php
          $files = scandir('images/');
          foreach ($files as $file) {
            $effect = array_rand ($skitter_effects);
            $image = stristr ($file, 'jpg') ? 'images/' . $file : '';
            print ($image) ? '<li><a href="#' . $skitter_effects[$effect] . '"><img src="' . $image . '" class="' . $skitter_effects[$effect] . '" /></a></li>' : '';
          }
          ?>
        </ul>
      </div>
      <div class="text-wrapper">
        <div class="text-container">
          <div class="heading-container">
            <div class="slide-heading">This is a Heading</div>
            <div class="divider"></div>
            <div class="slide-subheading">Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh.</div>
          </div>
          <div class="slide-text">
            <p>Etiam porta sem malesuada magna mollis euismod. Integer posuere erat a ante venenatis dapibus posuere velit aliquet. Aenean lacinia bibendum nulla sed consectetur. Etiam porta sem malesuada magna mollis euismod. Aenean lacinia bibendum nulla sed consectetur. Integer posuere erat a ante venenatis dapibus posuere velit aliquet. Vivamus sagittis lacus vel augue laoreet rutrum.</p><p>Cras mattis consectetur purus sit amet fermentum. Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor.</p>
          </div>
        </div>
      </div>
      <div class="logo-container"><img src="images/aak_logo.png" /></div>
    </div>
  </div>
<?php else: ?>
  <div style="color:black;">
    <form action="layout.php" method="get">
      <h1>Please select a layout template</h1>
      <select name="layout" onchange="this.form.submit();">
        <option>Select layout</option>
        <option value="1">Layout 1</option>
        <option value="2">Layout 2</option>
        <option value="3">Layout 3</option>
        <option value="4">Layout 4</option>
        <option value="5">Layout 5</option>
        <option value="6">Layout 6</option>
        <option value="7">Layout 7</option>
        <option value="8">Layout 8</option>
        <option value="9">Layout 9</option>
        <option value="10">Layout 10</option>
        <option value="11">Layout 11</option>
        <option value="12">Layout 12</option>
        <option value="13">Layout 13</option>
      </select>
    </form>
  </div>
<?php endif ?>
</body>
</html>