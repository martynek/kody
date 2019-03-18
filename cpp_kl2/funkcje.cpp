/*
 * funkcje.cpp
 */

#include <iostream>

using namespace std;

void dodaj(int a, int b)  // deklaracja funkcji, void - funkcja nie zwraca wyniku
{
    cout << "Suma: " << a + b << endl;
}

int odejmij(int l1, int l2) // int zwraca wynik
{
    return l1-l2;
}

void iloczyn(int a, int b)
{
    cout << "Iloczyn: " << a * b << endl;
}

int dziel(int a, int b) // int zwraca wynik
{
    if (b == 0)
    cout << "Nie dzieli się przez 0!" << endl;
    return 0;
    
    return a/b;
}

int main(int argc, char **argv)
{
    int a, b;
    a = b =0;
    
    cout << "Podaj 2 liczby: " << endl;
    cin >> a >> b;
    
    dodaj(a,b); //wywolanie funkcji 
    cout << "Różnica: " << odejmij(a, b) << endl;
    iloczyn(a, b);
    cout << "Iloraz: " << dziel(a, b) << endl;
    
    return 0;
}

