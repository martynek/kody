#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  kwerendy.py

import sqlite3

def kwerenda1(cur):
    
    cur.execute("""
        SELECT * FROM nazwiska 
        INNER JOIN oceny ON nazwiska.nr_ucznia = oceny.nr_ucznia
    """)
    #SELECT * FROM nazwiska WHERE nazwisko LIKE 'G%'
    #SELECT * FROM nazwiska WHERE imie1 LIKE 'A__a'
    #SELECT COUNT (*) FROM nazwiska WHERE imie1 LIKE 'A__a' - zliczanie
    #SELECT * FROM nazwiska INNER JOIN dane_osobowe ON nazwiska.nr_ucznia = dane_osobowe.nr_ucznia - laczenie dwoch tabel
    #WHERE M_urodzenia='Gdańsku'
    #WHERE M_urodzenia <> 'Gdańsku'
    
    for row in cur.fetchall():
        print(tuple(row))

def main(args):
    
    # konfiguracja#
    baza = 'uczniowie'
    tabele = ['nazwiska' , 'dane_osobowe' , 'oceny']
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
