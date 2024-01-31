<?php

class parola
{
    private $id;
    private $parola;

    public static function GetParole($key)
    {
        $pdo = Database::get_Connection();
        $query = "select parola from parole.word where parola like '$key%'";
        $stmt =$pdo->prepare($query);
        $stmt->execute();
        return $stmt->fetchAll(PDO::FETCH_ASSOC);
    }

}