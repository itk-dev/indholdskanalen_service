<?php

// Drupal cache
$conf['cache'] = 1;
$conf['block_cache'] = 1;
$conf['preprocess_css'] = 1;
$conf['preprocess_js'] = 1;

// Memcache configuration
$conf += array(
  'memcache_extension'           => 'Memcache',
  'show_memcache_statistics'     => 0,
  'memcache_persistent'          => TRUE,
  'memcache_stampede_protection' => TRUE,
  'memcache_stampede_semaphore'  => 15,
  'memcache_stampede_wait_time'  => 5,
  'memcache_stampede_wait_limit' => 3,
  'memcache_key_prefix'          => basename(realpath(conf_path())),
);

include_once('./includes/cache.inc');
include_once('./sites/all/modules/contrib/memcache/memcache.inc');

$conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
$conf['cache_default_class'] = 'MemCacheDrupal';
$conf['memcache_servers'] = array(
  '127.0.0.1:11211' => 'default',
);
$conf['memcache_bins'] = array(
  'cache' => 'default',
);

// Logging
$conf['syslog_identity'] = 'indholdskanalen';
