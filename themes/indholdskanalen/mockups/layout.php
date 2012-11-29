<html>
<head>
  <title>Slide layout <?php print (isset($_GET["layout"])) ? $_GET["layout"] : "- select layout"; ?></title>
  <link href="../css/styles.css" rel="stylesheet" type="text/css" media="all">
</head>
<body class="layout-<?php print (isset($_GET["layout"])) ? $_GET["layout"] : "1"; ?>">
<?php if (isset($_GET["layout"])) : ?>
  <div id="slide-container">
    <div id="image-container"></div>
    <div id="text-container-wrap">
      <div id="text-container">
        <div id="heading-container">
          <div class="slide-heading">This is a Heading</div>
          <div class="divider"></div>
          <div class="slide-subheading">Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh.</div>
        </div>
        <div class="slide-text">
          <p>Nullam quis risus eget urna mollis ornare vel eu leo. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. <strong>Praesent commodo cursus magna</strong>, vel scelerisque nisl consectetur et. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Nullam quis risus eget urna mollis ornare vel eu leo.</p>
          <p>Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Morbi leo risus, porta ac consectetur ac, vestibulum at eros. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui.</p>
          <p>Nullam id dolor id nibh ultricies vehicula ut id elit. Vestibulum id ligula porta felis euismod semper. <em>Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit.</em> Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum.</p>
        </div>
      </div>
      <div id="logo-container"></div>
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