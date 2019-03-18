/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	// char imie; //deklaracja zmiennej znakowej, char przechowuje tylko jeden znak
    char imie [10]; // deklaracja tablicy znakowej, [ ] - tablica, przechowuje wiecej znakow
    cout << "Witaj w C++" << endl;
    cout << "Podaj imię:";
	// cin >> imie;
	cin.getline(imie, 10);
    cout << "Cześć " << imie << endl;
	return 0;
}

