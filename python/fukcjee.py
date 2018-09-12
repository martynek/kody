#!/usr/bin/env python3
# -*- coding: utf-8 -*-


def sumuj(x, y):
    return x + y


def odejmij(x, y):
    return x - y


def iloczyn(x, y):
    return x * y


def iloraz(x, y):
    return x / y


def main(args):

    a = int(input("Podaj liczbę: "))
    b = int(input("Podaj liczbę: "))
    print("Suma: ", sumuj(a, b))
    print("Roznica: ", odejmij(a, b))
    print("Iloczyn: ", iloczyn(a, b))
    print("Iloraz: ", iloraz(a, b))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
