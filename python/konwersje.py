#!/usr/bin/env python
# -*- coding: utf-8 -*-


def dec2other(liczba10, podstawa):
    '''Konwersja liczby dziesietnej na system o podanej podstawie'''
    liczba = []  # pusta lista do zapamietywania reszt
    while liczba10 != 0:
        reszta = liczba10 % podstawa  # oblicznie reszt z dzielenia
        if reszta > 9:  # wykorzystanie kodu ASCII
            reszta = chr(reszta + 55)
        liczba.append(str(reszta))
        liczba10 = int(liczba10 / podstawa)
    liczba.reverse()  # odwrocenie kolejnosci elementow
    return "".join(liczba)


def zamiana1():
    """Pobranie danych wejsciowych"""
    liczba = int(input("Podaj liczbe: "))
    podstawa = int(input("Podaj podstawe: "))
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawe: "))
    print("Wynik konwersji: {}(10) = {}({})".format(
        liczba, dec2other(liczba, podstawa), podstawa))


def other2dec(liczba, podstawa):
    """zamiana podanej liczby na system dziesietny"""
    # 123(7) = 1*7^2 + 2*7^1 + 3
    liczba10 = 0
    potega = len(liczba) - 1
    for cyfra in liczba:
        liczba10 += int(cyfra) * (podstawa ** potega)
        potega -= 1

    return liczba10


def zamiana2():
    """Pobranie danych wejsciowych"""
    liczba = (input("Podaj liczbe: "))
    podstawa = 0
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawe: "))
        # pass
    print("Wynik konwersji: {}({}) = {}(10)".format(
        liczba, podstawa, other2dec(liczba, podstawa)))


def main(args):
    print("Zamiana liczby dziesietnej na liczbe o podanej podstawie"
          "<2;16> lub odwrotnie.")
    zamiana1()
    zamiana2()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
