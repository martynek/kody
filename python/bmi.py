#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    m = float(input("Podaj masę:"))
    print("Masa", m)

    w = float(input("Podaj wzrost:"))
    print("Wzrost: ", w)

    c = m / (w * w)
    print("BMI: ", c)

    if c < 18.5:
        print("Niedowaga")
    if c >= 25:
        print("Nadwaga")
    if c >= 30:
        print("Otyłość")
    else:
        print("Norma")

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
