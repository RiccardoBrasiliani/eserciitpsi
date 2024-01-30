<?php

class connect
{
    private static $host;
    private static $database;
    private static $username;
    private static $password;
    private static $pdo;

    public static function get_pdo()
    {
        return self::$pdo;
    }

    public static function inizialize($host,$database,$username,$password)
    {
        self::$host=$host;
        self::$database=$database;
        self::$username=$username;
        self::$password=$password;
        self::connect();
    }
    public static function connect()
    {
        try {
            //Data Source Name, contiene info necessarie per conettersi al database
            $dsn = "mysql:host=" . self::$host . ";dbname=" . self::$database;
            self::$pdo = new PDO($dsn, self::$username, self::$password);
            //imposto attributi gestione errori ed eccezioni
            self::$pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
            //echo "Connessione avvenuta con successo";
        } catch (PDOException $e) {
            die("Errore di connessione al database: " . $e->getMessage());
        }
    }
}