-- bazagus.sql

DROP TABLE IF EXISTS miasta;
DROP TABLE IF EXISTS dane_demograficzne;
DROP TABLE IF EXISTS powierzchnie;


CREATE TABLE miasta (
    id_miasta INTEGER PRIMARY KEY AUTOINCREMENT,
    nazwa_miasta TEXT(30),
    wojewodztwo TEXT(30)
);
 --sqlite3 baza.db < bazagus.sql
 --sqlite3 baza.db
 --sqlite>.table - wyswietla tabele
 --sqlite>.schema - wyswietla klauzule SQL
 --sqlite>.quit - wyjscie z interpretera
 
 CREATE TABLE dane_demograficzne (
    id INTEGER PRIMARY KEY,
    liczba_mieszkancow INTEGER,
    liczba_kobiet INTEGER,
    grupa_wiekowa TEXT(15),
    data_akt DATE,
    id_miasta INTEGER,
    FOREIGN KEY (id_miasta) REFERENCES miasta(id_miasta)
 );

CREATE TABLE powierzchnie (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    powierzchnia DECIMAL,
    powierzchnie_zielone DECIMAL,
    data_akt DATE,
    id_miasta INTEGER,
    FOREIGN KEY (id_miasta) REFERENCES miasta(id_miasta)
);
