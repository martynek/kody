/*
 * tablice.cpp 
 */


#include <iostream>

using namespace std;

void pobierzDane(int tab[], int ile) {
    int i;

    cout << "Podaj " << ile << " liczb:"<< endl;
    for(i = 0; i<ile; i++) {
        cin >> tab[i];
    }
    
}

int sumuj(int tab[], int ile) {
    int i;
    int suma = 0;
    for(i = 0; i<ile; i++)
    {
        cout << "Podane oceny: " << endl;
        suma += tab[i];
        cout << tab[i] << " " << endl;
    }
    return suma;
}
float liczSrednia(int tab[], int ile) {
    return sumuj(tab,ile)/float(ile);
    }

int main(int argc, char **argv)
{
    int rozmiar = 0;
    cout << "Ile ocen: " << endl;
    cin >> rozmiar;
    
    int liczby[rozmiar];

   
    
    pobierzDane(liczby, rozmiar);
    
    
    cout << "Suma ocen: " << sumuj(liczby,rozmiar) << endl;
    cout << "Srednia ocen: " << liczSrednia(liczby, rozmiar) << endl;
    
    return 0;
}

