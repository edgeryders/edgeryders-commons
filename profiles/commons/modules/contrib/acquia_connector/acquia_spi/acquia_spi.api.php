<?php

/**
 * @file
 * This file contains no working PHP code; it exists to provide additional
 * documentation for doxygen as well as to document hooks in the standard
 * Drupal manner.
 */

/**
 * @defgroup acquia_spi Acquia Connector SPI module integrations.
 *
 * Module integrations with the Acquia Insight service.
 *
 */

/**
 *  Include data to be sent to Acquia Insight as part of the SPI process.
 *
 *  Include custom site information to be sent to the Acquia Insight service
 *  for detailed site analysis. Insight will process this data and alert
 *  appropriately.
 *
 *  @return
 *    An array of custom data keyed by unique identifier.
 *
 *    Required format 'string' => array().
 */
function hook_acquia_spi_get() {
  $data['example'] = array(
    'result' => TRUE,
    'value' => '9000',
  );
  return $data;
}
