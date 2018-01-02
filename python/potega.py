#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0 = 1
# a1 = a
# an = a * ... * a (n-czynnikow) dla N+ - {1}


def potega_it(podst, wykladnik):
    """Funkcja oblicza iteracyjnie potege 1. naturalnej"""
    wynik = 1
    for i in range(wykladnik):
        wynik = wynik * podst
    return wynik
    
# a0 = 1 - warunek brzegowy
# an = a(n-1) * a dla n > 0

def potega_rek(podst, wykladnik):
    if wykladnik == 0:
        return 1
    return potega_rek(podst, wykladnik - 1) * podst


def main(args):
    # pobierz od uzytkownika podstawe i wykladnik
    # i przypisz do odpowiednich zmiennych
    # wywolaj funkcje potega_it()

    a = int(input("Podaj podstawę: "))
    n = int(input("Podaj wykladnik: "))
    assert type(a) == int
    assert type(n) == int

    assert potega_it(21, 0) == 1
    assert potega_it(100, 1) == 100
    assert potega_it(2, 2) == 4

    # print("Wynik: ", potega_it(a, n))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
