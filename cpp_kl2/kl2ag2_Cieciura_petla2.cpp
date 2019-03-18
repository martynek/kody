/*
 * kl2ag2_Cieciura_petla1.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n = 0;
	cout << "Podaj ilosc liczb: " << endl;
    cin  >> n;
    
    int iloczyn  = 1;
    int i =1;
    int parzyste = 0;
    
    while(i != n + 1) 
    {   int a = 0;
        cout << "Podaj liczbę: " << endl;
        cin  >> a;
        iloczyn = iloczyn * a;
        i += 1;
        
        if(a % 2 == 0)
        {
        parzyste += 1;    
        }
    }
    
    cout << iloczyn << endl;
    cout << "Ilosc licz parzystych: " << parzyste << endl;
    cout << "Ilosc licz nieparzystych: " << n - parzyste << endl;
	return 0;
}

