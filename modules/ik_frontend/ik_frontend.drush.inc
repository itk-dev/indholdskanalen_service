<?php

/**
 * @file
 * This file implements support for drush into the module.
 */

/**
 * Adds a cache clear option for the ik frontend cache.
 */
function ik_frontend_drush_cache_clear(&$types) {
  $types['ik-channel'] = 'ik_frontend_channel_cache_flush';
  $types['ik-slides'] = 'ik_frontend_slides_cache_flush';
}

/**
 * Clears out all cache entries about channels.
 */
function ik_frontend_channel_cache_flush() {
  cache_clear_all('channel_', 'cache_ik_frontend', TRUE);
}

/**
 * Clears out all cache entries about channels.
 */
function ik_frontend_slides_cache_flush() {
  cache_clear_all('slide_', 'cache_ik_frontend', TRUE);
}

/**
 * @todo: Clean single channel / slide.
 */