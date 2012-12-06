<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-type" content="text/html; charset=utf-8" />
  <title><?php echo t('Channel') . ": " . $token; ?></title>
  <?php echo $css; ?>
  <?php echo $scripts; ?>
  <?php echo $settings; ?>
</head>
<body onResize="window.location=window.location;">

  <!-- template -->
  <div id="pure-template" class="slide">
    <div class="image-container box_skitter">
      <ul>
        <li>
          <a href="">
            <img src="" />
          </a>
        </li>
      </ul>
    </div>
    <div class="text-container">
      <div class="heading-container">
        <div class="slide-heading"></div>
        <div class="divider"></div>
        <div class="slide-subheading"></div>
      </div>
      <div class="slide-text">
      </div>
    </div>
    <div class="logo-container">
      <img src="" />
    </div>
  </div>
  <!-- end template -->

  <div id="slide-container">
  </div>
</body>
</html>