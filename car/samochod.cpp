/*
 * samochod.cpp
 */
#include <iostream>
#include <cstdlib>
#include "car.h"

using namespace std;

int main(int argc, char **argv)
{
	Car s1 = Car();
    s1.dodaj();
    s1.dane();

    Osoba o1 = Osoba()
    o1.laduj();
    o1.pasazerowie();
    Osoba o2 = Osoba()
    o2.laduj();
    o2.pasazerowie();
	return 0;
}

