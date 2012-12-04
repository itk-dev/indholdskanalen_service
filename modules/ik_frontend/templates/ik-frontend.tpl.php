<!DOCTYPE html>
<html>
<head>
  <meta http-equiv="Content-type" content="text/html; charset=utf-8" />
  <title>Slide layout <?php print (isset($_GET["layout"])) ? $_GET["layout"] : "- select layout"; ?></title>
  <?php echo $css; ?>
  <?php echo $scripts; ?>
  <?php echo $settings; ?>
</head>
<body>

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