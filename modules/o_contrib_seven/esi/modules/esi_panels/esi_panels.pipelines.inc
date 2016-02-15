<?php
/**
 * @file
 * Custom pipeline for the ESI panels module.
 */

/**
 * Implements hook_default_panels_renderer_pipeline().
 */
function esi_panels_default_panels_renderer_pipeline() {
  $pipelines = array();

  $pipeline = new stdClass;
  $pipeline->disabled = FALSE; /* Edit this to true to make a default pipeline disabled initially */
  $pipeline->api_version = 1;
  $pipeline->name = 'esi';
  $pipeline->admin_title = t('ESI');
  $pipeline->admin_description = t('Renders ESI-cached panels through ESI.');
  $pipeline->weight = -99;
  $pipeline->settings = array(
    'renderers' => array(
      // IPE renderer.
      0 => array(
        'access' => array(
          'plugins' => array(
            0 => array(
              'name' => 'esi_panels_pipeline_renderer_access',
              'settings' => array('pipeline' => 'esi_ipe'),
            ),
            // Add the permissions-check from the IPE pipeline.
            1 => array(
              'name' => 'perm',
              'settings' => array(
                'perm' => 'use panels in place editing',
              ),
              'context' => 'logged-in-user',
            ),
          ),
          'logic' => 'and',
        ),
        'renderer' => 'esi_ipe',
        'options' => array(),
      ),
      // Standard renderer.
      1 => array(
        'access' => array(
          'plugins' => array(
            array(
              'name' => 'esi_panels_pipeline_renderer_access',
              'settings' => array('pipeline' => 'esi_standard'),
            ),
          ),
        ),
        'renderer' => 'esi_standard',
        'options' => array(),
      ),
    ),
  );
  $pipelines[$pipeline->name] = $pipeline;

  return $pipelines;
}
