/*
 * trojkat.cpp
 * Program pobiera trzy boki trojkata
 * sprawdza czy da sie z nich zbudowac trojkat 
 * oblicza obwod i pole ze wzory Herona) 
 * i drukuje na ekranie odpowiedni komunikat
 */


#include <iostream>
#include <cmath>

using namespace std;


int main(int argc, char **argv)
{
 
    int a, b, c;
    int obwod = 0;
    float p = 0;
    a = b = c = 0;
    cout << "Podaj 3 boki: ";
    cin >> a >> b >> c;
 
    if (a+b>c && a+c>b && c+b>a)
 {
    cout << "Da się zbudować trojkat " <<endl;
    obwod= a+b+c;
    cout << "Obwod trojkata = " << obwod << endl;
    p = 0.5 * obwod;
    cout << "p= " << p << endl;
    cout << "Pole= " << sqrt (p * (p-a)*(p-b)*(p-c)) << endl;
}
     else
{
    cout <<"Nie da sie zbudowa trojkata" << endl;
 }
     

	
	return 0;
}

