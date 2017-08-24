<?php

/**
 * @file
 *
 * Admin configuration for the Islandora Newspapers Calendar page.
 */

function islandora_newspaper_page_admin($form, &$form_state){
  $form['islandora_newspaper_calendar_page']['islandora_newspaper_calendar_page_date_field'] = array(
    '#type' => 'textfield',
    '#title' => t('Solr Date field'),
    '#default_value' => variable_get('islandora_newspaper_calendar_page_date_field', 'mods_originInfo_dateIssued_dt'),
    '#description' => t("Date-type solr field (usually _dt) containing the publication date."),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}