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

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define('DB_NAME', 'ddfccc22a11cvm');

/** MySQL database username */
define('DB_USER', 'xywlvrwqjrfdea');

/** MySQL database password */
define('DB_PASSWORD', 'hwkQwl7xYooJLLpl1OCtzQ-1eA');

/** MySQL hostname */
define('DB_HOST', 'ec2-54-197-249-167.compute-1.amazonaws.com:5432');

/** Database Charset to use in creating database tables. */
define('DB_CHARSET', 'utf8');

/** The Database Collate type. Don't change this if in doubt. */
define('DB_COLLATE', '');

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define('AUTH_KEY',         '|&C8F?rf;m.}Loo6omN@%QiLT~;|0M(f#o0~yVZ5`(r^s-w&lE::?XB#KLDR)?>%');
define('SECURE_AUTH_KEY',  'j6U8`TelU-NI UI5Y-mA`a; twBSw{D aNW@%FwBZ<Ga|M n=c2EbUJlrnS`x+:r');
define('LOGGED_IN_KEY',    '65zS|cNr<J:|OBsG}glh9LG+P!Ia+OB+2|H8,k}M~?Pk=v+H3~zFWN<5o-.{vK2_');
define('NONCE_KEY',        'x.{#?L-uU 0*]_Vl11iwnVI8cn[-NOyVpdQ7;S^r-^$A6d[CZS3]c-}i;S[@lm&D');
define('AUTH_SALT',        '-tJDeud <PUd_+|RU+T+p_1P6bU(OpqrJ. j5svPVeUa39@k9L6!>.QcA@c1W+ly');
define('SECURE_AUTH_SALT', ';rKpd8OQ[a9bD{EX.q_UE?P#NzAC5dnXmsCuGX/+|m+dw:S0z10EMb[X)y089l9^');
define('LOGGED_IN_SALT',   ';m**Gs-.f|BA5b#OzM#8Y|I9UFAlg?;IYKTCVc/Q#Op@qn~!Z?`hE8!rTh>I+p!g');
define('NONCE_SALT',       'uhpC8a~z-P+*kJ,-#z|/GZ$T  |= )-hQk?+mi=8UP)PZhOZQPtSd=.l}p5(0ELM');

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
define('WPLANG', '');

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 */
define('WP_DEBUG', false);

/* That's all, stop editing! Happy blogging. */
