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
    
    while(i != n + 1) 
    {   int a = 0;
        cout << "Podaj liczbę: " << endl;
        cin  >> a;
        iloczyn = iloczyn * a;
        i += 1;
    }
    
    cout << iloczyn << endl;
	return 0;
}

