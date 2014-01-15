<?php
/**
 * The base configurations of the WordPress.
 *
 * This file has the following configurations: MySQL settings, Table Prefix,
 * Secret Keys, WordPress Language, and ABSPATH. You can find more information
 * by visiting {@link http://codex.wordpress.org/Editing_wp-config.php Editing
 * wp-config.php} Codex page. You can get the MySQL settings from your web host.
 *
 * This file is used by the wp-config.php creation script during the
 * installation. You don't have to use the web site, you can just copy this file
 * to "wp-config.php" and fill in the values.
 *
 * @package WordPress
 */
 
 /*
 $pg_connstr = " host=ec2-54-197-241-64.compute-1.amazonaws.com port=5432 user=ucbkoaupyccmeq password=aZqn_sm5Iei-F6knZMQCdMS2ZM";
 $pg_connstr = ' host=localhost port=5432 user=postgres password=123456';
 
var_dump( pg_connect($pg_connstr)); die;
error_reporting(E_ALL);

ini_set('display_errors', '1');
*/
require(ABSPATH.'wp-includes/env/environments.inc'); 
 
// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
defined('DB_NAME') or define('DB_NAME', 'wordpress-site-1');

/** MySQL database username */
defined('DB_USER') or define('DB_USER', 'postgres');

/** MySQL database password */
defined('DB_PASSWORD') or define('DB_PASSWORD', '123456');

/** MySQL hostname */
defined('DB_HOST') or define('DB_HOST', 'localhost:5432');

/** Database Charset to use in creating database tables. */
defined('DB_CHARSET') or define('DB_CHARSET', 'utf8');

/** The Database Collate type. Don't change this if in doubt. */
defined('DB_COLLATE') or define('DB_COLLATE', '');

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
defined('AUTH_KEY') or define('AUTH_KEY',         'G0:13CU|c$<FfQ}~G<$@CSSdsTp,h%s+a&Agn1|9Z&a3@e1)Uy%;d+);i[WMS[TC');
defined('SECURE_AUTH_KEY') or define('SECURE_AUTH_KEY',  'M(;86j$;dXehyWv}IQ$A3oU21q/t{.X!.^8+(CxaKd2FK->S%t~p,[L63i`@QO^S');
defined('LOGGED_IN_KEY') or define('LOGGED_IN_KEY',    'cU.^!@mY^tA[MY}l^sbl~ur/|J_h0w=1Id+upG~(vRBt-)(n6*|2#[}yo:H_):oQ');
defined('NONCE_KEY') or define('NONCE_KEY',        'uW[]Z_Kti>s=BM{@2GYaQW62x6pg9oe JHjO~bk&]<[p*$X!m?ULrfaY.$OM|593');
defined('AUTH_SALT') or define('AUTH_SALT',        '-PqN^lXY!DKV`)63rt2+ce$e>!rv+nF[kmD9r3<K,)gc2e]I^n@ ,vl9[LUm8s$@');
defined('SECURE_AUTH_SALT') or define('SECURE_AUTH_SALT', '[$g6w6C5-yOQc!Q$izw:zUI*B%D1K4R#j vCSmALn_tBIXLrxSBzs#2sIe55t,h6');
defined('LOGGED_IN_SALT') or define('LOGGED_IN_SALT',   'eh4/J9[=+ZyWS`HB3M^*Gsh[!7<8:L?1l9399QwHwb>g)]43&DTp WVt_$*y9do6');
defined('NONCE_SALT') or define('NONCE_SALT',       ' `i6#YJM49Frleos7)v?i7E/{r-/&b-YTD OefGwck?BTlJ($9Z)hx(`:0;y8wdU');

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each a unique
 * prefix. Only numbers, letters, and underscores please!
 */
$table_prefix  = 'wp_';

/**
 * WordPress Localized Language, defaults to English.
 *
 * Change this to localize WordPress. A corresponding MO file for the chosen
 * language must be installed to wp-content/languages. For example, install
 * de_DE.mo to wp-content/languages and set WPLANG to 'de_DE' to enable German
 * language support.
 */
defined('WPLANG') or define('WPLANG', '');

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 */
defined('WP_DEBUG') or define('WP_DEBUG', false);

/* That's all, stop editing! Happy blogging. */

/** Absolute path to the WordPress directory. */
if ( !defined('ABSPATH') )
	define('ABSPATH', dirname(__FILE__) . '/');

/** Sets up WordPress vars and included files. */
require_once(ABSPATH . 'wp-settings.php');
