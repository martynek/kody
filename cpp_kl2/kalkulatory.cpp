/*
 * kalkulator.cpp
*/


#include <iostream>

using namespace std;

float dodaj(float a, float b)
{
    return a+b;
}

float odejmij(float a, float b) // int zwraca wynik
{
    return a-b;
}

float iloczyn(float a, float b)
{
    return a*b;
}

float dziel(float a, float b) // int zwraca wynik
{
    if (b == 0)
    cout << "Nie dzieli się przez 0!" << endl;
    return 0;
    
    return a/b;
}
int main(int argc, char **argv)
{

    char znak; // +, -, *, /
    float a, b;
    a=b=0;
    
    while(znak=='-' || '+' || '*' || '/') {
    cout << "Podaj znak: " << endl;
    cin >> znak;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >>b;
    
    
    if (znak=='+')
    {
      cout << "Suma: " << dodaj(a,b)<<  endl; 
    }
    else if (znak=='-')
      cout << "Róznica: " << odejmij(a,b)<< endl;
    else if (znak=='*')
      cout << "Iloczyn: " << iloczyn(a,b) << endl;
    else if (znak=='/')
      cout << "Iloraz: " << dziel(a,b) << endl;
      
}
    return 0;

}

