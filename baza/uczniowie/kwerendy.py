#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  kwerendy.py

import sqlite3

def kwerenda1(cur):
    cur.execute("""
        SELECT klasa, przedmiot, AVG(ocena) AS srednia FROM oceny
        INNER JOIN przedmioty ON oceny.id_przedmiot=przedmioty.id
        INNER JOIN uczniowie ON oceny.id_uczen=uczniowie.id
        INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
        WHERE przedmiot = 'matematyka'
        GROUP BY klasa
        ORDER BY srednia ASC
    """)
    
    #SELECT * FROM nazwiska WHERE nazwisko LIKE 'G%'
    #SELECT * FROM nazwiska WHERE imie1 LIKE 'A__a'
    #SELECT COUNT (*) FROM nazwiska WHERE imie1 LIKE 'A__a' - zliczanie
    #SELECT * FROM nazwiska INNER JOIN dane_osobowe ON nazwiska.nr_ucznia = dane_osobowe.nr_ucznia - laczenie dwoch tabel
    #WHERE M_urodzenia='Gdańsku'
    #WHERE M_urodzenia <> 'Gdańsku'
    #SELECT nazwisko, egz_mat, egz_hum FROM uczniowie
        #WHERE egz_mat > 40 OR egz_hum > 40
    
    # asc - rosnaco desc - malejaco
    
    #SELECT nazwisko, egz_mat, egz_hum FROM uczniowie
        #WHERE egz_hum > 40
        #ORDER BY egz_mat DESC
        #LIMIT 5
        
    #SELECT plec, AVG(egz_mat), AVG(egz_hum), AVG(egz_jez) FROM uczniowie
      #  GROUP BY plec
      
       #SELECT nazwisko, imie, klasa FROM uczniowie
    #INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
        
    #WITH srednie AS (
       # SELECT nazwisko, imie, AVG(ocena) AS srednia FROM uczniowie
        #INNER JOIN oceny ON uczniowie.id=oceny.id_uczen
       # GROUP BY uczniowie.id)
       # SELECT nazwisko, imie, srednia FROM srednie
       # WHERE srednia > 3.8
        
    #WITH srednie AS (
       # SELECT nazwisko, imie, AVG(ocena) AS srednia FROM uczniowie
       # INNER JOIN oceny ON uczniowie.id=oceny.id_uczen
       # GROUP BY uczniowie.id)
       # SELECT COUNT(srednia) FROM srednie
       # WHERE srednia > 3.8    
       
    #SELECT klasa, AVG(ocena) AS srednia FROM oceny
        #INNER JOIN uczniowie ON uczniowie.id=oceny.id_uczen
       # INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
       # GROUP BY klasy.id
       # ORDER BY srednia DESC
       
    #SELECT przedmiot, AVG(ocena) FROM oceny
       # INNER JOIN przedmioty ON oceny.id_przedmiot=przedmioty.id
       # GROUP BY przedmiot
    
    for row in cur.fetchall():
        print(tuple(row))

def main(args):
    
    # konfiguracja#
    baza = 'uczniowie' #tu
    roz = '.txt'
    naglowki = True  # cczy pliki zrodlowe zawieraja naglowki
    
    con = sqlite3.connect(baza + '.db') # polaczenie
    cur = con.cursor() #obiekt kursora
    
    kwerenda1(cur)
    
    con.commit()
    con.close()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
