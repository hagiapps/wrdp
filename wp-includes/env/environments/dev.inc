<?php


// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define('DB_NAME', 'wordpress-site-1');

/** MySQL database username */
define('DB_USER', 'postgres');

/** MySQL database password */
define('DB_PASSWORD', '123456');

/** MySQL hostname */
define('DB_HOST', 'localhost:5432');

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
define('AUTH_KEY',         'G0:13CU|c$<FfQ}~G<$@CSSdsTp,h%s+a&Agn1|9Z&a3@e1)Uy%;d+);i[WMS[TC');
define('SECURE_AUTH_KEY',  'M(;86j$;dXehyWv}IQ$A3oU21q/t{.X!.^8+(CxaKd2FK->S%t~p,[L63i`@QO^S');
define('LOGGED_IN_KEY',    'cU.^!@mY^tA[MY}l^sbl~ur/|J_h0w=1Id+upG~(vRBt-)(n6*|2#[}yo:H_):oQ');
define('NONCE_KEY',        'uW[]Z_Kti>s=BM{@2GYaQW62x6pg9oe JHjO~bk&]<[p*$X!m?ULrfaY.$OM|593');
define('AUTH_SALT',        '-PqN^lXY!DKV`)63rt2+ce$e>!rv+nF[kmD9r3<K,)gc2e]I^n@ ,vl9[LUm8s$@');
define('SECURE_AUTH_SALT', '[$g6w6C5-yOQc!Q$izw:zUI*B%D1K4R#j vCSmALn_tBIXLrxSBzs#2sIe55t,h6');
define('LOGGED_IN_SALT',   'eh4/J9[=+ZyWS`HB3M^*Gsh[!7<8:L?1l9399QwHwb>g)]43&DTp WVt_$*y9do6');
define('NONCE_SALT',       ' `i6#YJM49Frleos7)v?i7E/{r-/&b-YTD OefGwck?BTlJ($9Z)hx(`:0;y8wdU');

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



//echo DB_NAME;
?>