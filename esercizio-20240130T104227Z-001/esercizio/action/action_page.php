<?php
require_once "../models/database.php";

$word=$_POST["word"];
connect::inizialize("localhost","vocaboli","root","");
$query="select * from vocaboli.parole where parola=:word";
try {
    $stmt = connect::getPdo()->prepare($query);
    //associo i valori
    $stmt->bindParam(':word', $word, PDO::PARAM_STR);
    //eseguo la query preparata precedentemente
    $stmt->execute();
    echo "parola trovata con successo.";
} catch (PDOException $e) {
    die("Errore nel trovare la parola: " . $e->getMessage());
}


header('Location: http://localhost:63342/viste/pagina.html');