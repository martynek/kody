#!/usr/bin/env python
# -*- coding: utf-8 -*-
<<<<<<< HEAD

=======
#
#  sort_wyb1.py  
#  
>>>>>>> 578da1d59f0ee5dabf283af8ce04b89cbfb9ec75

def sort_wstaw(lista):
    """wersja liniowa"""
    for i in range(1, len(lista)):
<<<<<<< HEAD
        # cpp - for (int i=0; i < n; i++)
        el = lista[i]
        k = i - 1
        while k >= 0 and lista[k] > el:
            # wyszukiwanie pozycji do wstawienia, lista[k] < el - malejaco
            lista[k + 1] = lista[k]  # przesuwanie elementow
=======
        # for(int i=0; i < n; i++)
        el = lista[i]
        k = i - 1
        while k >= 0 and lista[k] > el:  # wyszukiwanie pozycji
            lista[k + 1] = lista[k]  # przesuwanie elementów
>>>>>>> 578da1d59f0ee5dabf283af8ce04b89cbfb9ec75
            k -= 1
        lista[k + 1] = el  # wstawianie elementu
    return lista


def main(args):
<<<<<<< HEAD
    lista = [4, 3, 7, 0, 2, 3, 1, 9, -4]
=======
    lista = [4, 3, 7, 0, 2, 3, 1, 9, -6]
>>>>>>> 578da1d59f0ee5dabf283af8ce04b89cbfb9ec75
    print(lista)
    # [3, 4, 7, 0, 2, 3, 1, 9]
    # [3, 4, 7, 0, 2, 3, 1, 9]
    # [0, 3, 4, 7, 2, 3, 1, 9]
    print(sort_wstaw(lista))
<<<<<<< HEAD

=======
>>>>>>> 578da1d59f0ee5dabf283af8ce04b89cbfb9ec75
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
