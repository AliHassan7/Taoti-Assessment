<?php
/**
 * @file
 * task_8_feature.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_destinations().
 */
function task_8_feature_exportables_backup_migrate_destinations() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'task_7_dump';
  $item->name = 'Task 7 dump';
  $item->subtype = 'file';
  $item->location = 'sites/default/files/Task7';
  $item->settings = array(
    'chmod' => '',
    'chgrp' => '',
  );
  $export['task_7_dump'] = $item;

  return $export;
}
