#!/usr/bin/env python
# -*- coding: utf-8 -*-


def fib_iter(n):

    """ Funkcja wyswietla kolejne wyrazy ciagu Fibonacciego.
    funkcja zwraca n-ty wyraz ciagu.
    F(0) = 0
    F(1)= 1
    F(n) = F(n-2) + F(n-1) dla n >1
    """
    a, b = (0, 1)
    if n == 0:
        print (a)
        return a
    # elif n == 1:
    #    print (a)
    #    return b

    print (a)
    for i in range(1, n):
        tmp = b
        b = a + b
        a = tmp
        # a, b = b, a + b
        print(a, "Wyraz ", i, ": ", b, "Iloraz: ", b / a)

    return b


def fib_iter2(n):
    a, b = (0, 1)

    print (a)
    while n > 0:
        a, b = b, a + b
        n = n - 1
        print(a, " ", b, "Iloraz: ", b / a)
    return b


def main(args):
    fib_iter(20)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
