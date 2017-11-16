#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0 = 1
# a1 = a
# an = a * ... * a (n-czynnikow) dla N+ - {1}


def potega_it(podst, wykladnik):
    """Funkcja oblicza iteracyjnie potege 1. naturalnej"""
    wynik = 1
    for i in range(wykladnik):
        wynik = wykladnik*i
    return wynik


def main(args):
    # pobierz od uzytkownika podstawe i wykladnik
    # i przypisz do odpowiednich zmiennych
    # wywolaj funkcje potega_it() 
    int(input("Podaj podstawę: "))
    int(input("Podaj wykladnik: "))
    potega_it() 
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
