<?php

error_reporting(E_ALL);

ini_set('display_errors', '1');

echo $_SERVER['REMOTE_ADDR'] ;
//10.191.78.80

//testing missing

//phpinfo();
//if($_SERVER['REMOTE_ADDR'] != '10.191.78.80') die('access denied');
if (isset($_REQUEST["f"])){
	$file = $_REQUEST["f"];
	if (!empty($file)){
		echo "<pre>";
		echo htmlentities(file_get_contents($file));
		echo "</pre>";
	}
}

?>
