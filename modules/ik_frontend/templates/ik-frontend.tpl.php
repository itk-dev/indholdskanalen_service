<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-type" content="text/html; charset=utf-8" />
  <title><?php echo t('Channel') . ": " . $settings['token']; ?></title>
  <?php echo $css; ?>
  <?php echo $scripts; ?>
  <?php echo $js_settings; ?>
</head>
<body>

  <!-- template -->
  <div id="pure-template-image" class="slide">
    <div class="image-container">
      <img src="" />
    </div>
    <div class="text-wrapper">
      <div class="text-container">
        <div class="heading-container">
          <div class="slide-heading" id="fitHeading"></div>
          <div class="slide-subheading"></div>
        </div>
        <div class="slide-text">
        </div>
      </div>
    </div>
    <div class="logo-container">
      <img src="" />
    </div>
    <div class="rss-icon"></div>
  </div>

  <div id="pure-template-video" class="slide">
    <div class="video-container">
      <video class="video-player" autoplay="1" width="1920" height="1080">
        <source src="" type="" />
      </video>
    </div>
    <div class="text-wrapper">
      <div class="text-container">
        <div class="heading-container">
          <div class="slide-heading" id="fitHeading"></div>
          <div class="slide-subheading"></div>
        </div>
        <div class="slide-text">
        </div>
      </div>
    </div>
    <div class="logo-container">
      <img src="" />
    </div>
    <div class="rss-icon"></div>
  </div>

  <!-- end template -->

  <figure id="progress"></figure>
  <figure id="slide-count"></figure>
  <div id="slide-container">
  </div>
  <script type="text/javascript">
    <?php echo $run_script; ?>
  </script>
</body>
</html>
