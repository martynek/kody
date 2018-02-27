#!/usr/bin/env python
# -*- coding: utf-8 -*-


def szyfruj(tekst, klucz):
    """Szyfrowanie tekstu za pomoca szyfru Cezara"""
    klucz = klucz % 26
    szyfrogram = ""
    # znaki_pl = ["Ą", "Ć", "Ę", "Ł", "Ń", "Ó", "Ś", "Ź", "Ż", "ą", "ć", "ę",
    #         "ł", "ń", "ó", "ś", "ź", "ż"]
    for i in tekst:
        ascii = ord(i) + klucz
        if ord(i) == 32:
            ascii = 32
        if ascii > 90 and ascii < 97 or ascii > 122:
            ascii -= 26
        # elif ascii > 122:
        #     ascii -= 26

        szyfrogram += chr(ascii)

    return szyfrogram


def deszyfruj(szyfrogram, klucz): # troche duzo ifow, ale narazie nwm jak to przyspieszyc i uproscic. wazne ze dziala
    tekst = ""
    for i in szyfrogram:
        ascii = ord(i) - klucz
        # print(i, ascii)
        if ord(i) == 32:
            ascii = 32
        if ascii < 65 and ascii != 32:
            ascii += 26
        if ascii > 90 and ascii < 97 and ascii != 32:
            ascii += 26
        if i.isdigit():
            ascii -= 26
        # print(i, ascii)
        tekst += chr(ascii)

    return tekst

# oblsłuzyć male i duże litery
# obsluzyc spacje


def main(args):
    tekst = input("Podaj tekst: ")
    klucz = int(input("Podaj klucz: "))
    szyfrogram = szyfruj(tekst, klucz)
    # szyfrogram = "VCBIU FHCDUD MHVW SURVWB"
    # klucz = 3
    print(szyfrogram)
    print(deszyfruj(szyfrogram, klucz))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
