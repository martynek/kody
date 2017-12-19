/*
 * rekurencja2_Cieciura_kl2ag2.cpp
 */


#include <iostream>

using namespace std;

int f4_rek(int tab [], int i)
{
    if (i == 1)
    {
        return tab[0];
    }
    return tab[i -1];
}

int main(int argc, char **argv)
{
    int i = 0;
    int tab[i];
    cout << "Podaj liczbę elementow tabeli: " << endl;
	cin >> i;
    
    
    cout << "Zawartosc tabeli: : " << f4_rek9tab[i], i) << endl;
    
	return 0;
}

