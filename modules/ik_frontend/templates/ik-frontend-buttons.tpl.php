<?php
 /**
  * @file
  *
  */
?>
<div class="<?php echo $classes; ?>">
  <?php
  foreach ($buttons as $class => $button) {
    echo l($button['title'], $button['link'], array('attributes' => array('class' => array(str_replace('_', '-', $class), 'button'))));
  }
  ?>
</div>