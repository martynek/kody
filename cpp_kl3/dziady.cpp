/*
 * dziady.cxx
 * 
 */
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

int liczZnaki(char plik[]) {
    ifstream wejscie(plik);
    if (!wejscie) { cout << "Błąd otwarcia pliku!"; return 0; }
    char plik2[15];
    strcpy(plik2, plik);
    char *wsk;
    wsk = strstr(plik2, ".txt");
    strncpy(wsk, ".bak", 4);
    ofstream wyjscie(plik2);
    if (!wyjscie) { cout << "Błąd otwarcia pliku!"; return 0; }
    
    char z; // pojedynczy odczytany znak
    int ile, ilea, ileo, ileu, ilee, iley, ilei;
    ile = ilea = ileo = ileu = ilee = iley = ilei = 0;
    
    while(!wejscie.eof()) {
        wejscie.get(z);  // odczytanie pojedynczego znaku
        if (wejscie) {
            ile++;
            if ((int)z == 97 or (int)z == 65)  ilea++;
            if ((int)z == 79 or (int)z == 111)  ileo++;
            if ((int)z == 117 or (int)z == 85)  ileu++;
            if ((int)z == 69 or (int)z == 101)  ilee++;
            if ((int)z == 89 or (int)z == 121)  iley++;
            if ((int)z == 73 or (int)z == 105)  ilei++;
        }
    }
    
    wejscie.close(); wyjscie.close();
    cout << setw(10) << "Liter a jest: " << ilea << endl;
    cout << setw(10) << "Liter o jest: " << ileo << endl;
    cout << setw(10) << "Liter u jest: " << ileu << endl;
    cout << setw(10) << "Liter e jest: " << ilee << endl;
    cout << setw(10) << "Liter y jest: " << iley << endl;
    cout << setw(10) << "Liter i jest: " << ilei << endl;
    return ile;
}

int main(int argc, char **argv)
{
    char nazwa[15];
    cout << "Podaj nazwę pliku: ";
    cin >> nazwa;
    liczZnaki(nazwa);
    return 0;
}
