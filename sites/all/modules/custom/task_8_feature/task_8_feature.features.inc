<?php
/**
 * @file
 * task_8_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function task_8_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "backup_migrate" && $api == "backup_migrate_exportables") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function task_8_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
