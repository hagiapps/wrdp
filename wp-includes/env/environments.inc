<?php

/**
 * Environment-Specific configuration manager
 */
class EnvironmentMapper {

  const ENVDIR = 'environments';
  const ENV_VAR_NAME = 'GENERAL_ENV_NAME';

  private static $currentEnvironment = null;

  /**
   * @static
   *
   * Static initializer.
   */
  public static function init() {

    $envname_server = !empty($_SERVER[self::ENV_VAR_NAME]) ? $_SERVER[self::ENV_VAR_NAME] : "";
    $envname_shell = !empty($_ENV[self::ENV_VAR_NAME]) ? $_ENV[self::ENV_VAR_NAME] : "";
    $envname = !empty($envname_server) ? $envname_server : $envname_shell;

    if(empty($envname)) {
        die("Environment was not properly set up. Please set up ".self::ENV_VAR_NAME." variable either
             in shell or in your web-server configuration. Aborting.\n");
    }

    $configFilePath = __DIR__ . DIRECTORY_SEPARATOR . self::ENVDIR . DIRECTORY_SEPARATOR . $envname . ".inc";
    self::$currentEnvironment = $envname;

    return $configFilePath;
  }

  public static function getCurrent() {
    return self::$currentEnvironment;
  }

}

$envConfigFilePath = EnvironmentMapper::init();

// Not checking file_exists here because we need every bit of performance and file_exists() is not that fast.
require($envConfigFilePath);
