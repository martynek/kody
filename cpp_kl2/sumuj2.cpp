/*
 * sumuj2.cpp
 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    int suma = 0;  // suma kolejnych liczb
    int liczba = 0;  // liczba wprowadzona
    
    for (;;) // petla nieskonczona
    
    {
        cout << "Podaj liczbę: " << endl;
        cin >> liczba;
            //suma = suma + liczba;
        suma += liczba;
        if (suma > 100) break; // break - przerywa petle 
            
    }
        cout << "Suma: " << suma << endl;
     
    return 0;
}

