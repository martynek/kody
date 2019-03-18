/*
 * funkcje.cpp
 */

#include <iostream>

using namespace std;

//int liczba = 0; // zmienna globalna, jest dostepna w kazdej funkcji
//int krok =0;

//~void zwieksz1() 
//~{
    //~liczba += krok;
//~}

void zwieksz2(int liczba, int krok) // przekazywanie przez wartosc
{
    cout << &liczba << " " << &krok << endl;
    liczba += krok;
    cout << "Liczba: " << liczba << endl;
}

void zwieksz3(int &liczba, int &krok) // przekazywanie przez wartosc, & - funkja dziala na oryginalach
{
    liczba += krok;
    cout << "Liczba: " << liczba << endl;
}

int main(int argc, char **argv)
{
    int liczba, krok; //zmienne lokalne
    liczba = krok =0;
    
    cout << "Podaj liczbe i krok: " << endl;
    cin >> liczba >> krok;
    
    cout << &liczba << " " << &krok << endl;
    
    zwieksz2(liczba, krok);
    zwieksz2(liczba, krok);
    zwieksz2(liczba, krok);
    
    cout << "Liczba: " << liczba << endl;
    cout << "Krok: " << krok << endl;
    
    return 0;
}

