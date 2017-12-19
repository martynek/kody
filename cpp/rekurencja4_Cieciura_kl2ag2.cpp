/*
 * rekurencja4_Cieciura_kl2ag2.cpp
 */


#include <iostream>

using namespace std;

int tablica_rek(int tab [], int i)
{
    if (i == 0)
    {
        return tab[0];
    }
    return tab[i -1];
}

int main(int argc, char **argv)
{
    int i = 5;
    int tab[i];
    
    for (i = 1; i <= 5; i++)
    
    {
    cout << "Zawartosc tabeli: " << tablica_rek(tab, i)<< endl;    
    }
    
	return 0;
}

