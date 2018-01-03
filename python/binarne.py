#!/usr/bin/env python
# -*- coding: utf-8 -*-
from math import floor

def wyszukaj_lin(l, el):
    for i in range(0, len(l)):
        if l[i] == el:
            return i
    return -1

# int wyszukaj_lin(int l[], int n, int el ) { - n ilosc elementow tabeli
    #   for (int i = 0; i < n; i++){
    #          if (l[i] == el)
    #               returm i;
    # }
    #   return -1;
    # }


def wyszukaj_binarnie(lista, el):
    lewy, prawy = 0, len(lista - 1)
    while lewy < prawy:
        srodek = floor((lewy + prawy) / 2)



def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9, -4]
    lista.sort()
    el = 3

    print(wyszukaj_lin(lista, el))
    assert(wyszukaj_lin(lista, 8) == -1)

    wyszukaj_binarnie(lista, el)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
