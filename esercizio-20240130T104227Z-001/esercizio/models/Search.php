<?php
require_once "database.php";
require_once "parola.php";
$parola = $_GET["q"];
$parole = parola::GetParole($parola);
foreach ($parole as $p) {
    echo "<li>" . $p["parola"] . "</li>";
}
