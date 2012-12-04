<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" version="XHTML+RDFa 1.0" dir="ltr"
  xmlns:content="http://purl.org/rss/1.0/modules/content/"
  xmlns:dc="http://purl.org/dc/terms/"
  xmlns:foaf="http://xmlns.com/foaf/0.1/"
  xmlns:og="http://ogp.me/ns#"
  xmlns:rdfs="http://www.w3.org/2000/01/rdf-schema#"
  xmlns:sioc="http://rdfs.org/sioc/ns#"
  xmlns:sioct="http://rdfs.org/sioc/types#"
  xmlns:skos="http://www.w3.org/2004/02/skos/core#"
  xmlns:xsd="http://www.w3.org/2001/XMLSchema#">

<head profile="http://www.w3.org/1999/xhtml/vocab">
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  <title>Slide layout <?php print (isset($_GET["layout"])) ? $_GET["layout"] : "- select layout"; ?></title>
  <link href="<?php echo $css; ?>" rel="stylesheet" type="text/css" media="all">
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
    <div class="logo-container"></div>
  </div>
  <!-- end template -->

  <div id="slide-container">
  </div>
</body>
</html>