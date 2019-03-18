/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int euklides(int a, int b) {
    while(a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
    }

int main(int argc, char **argv)
{
    int a, b;
    cout << "Podaj liczbę: ";
    cin >> a;
    cout << "Podaj liczbę: ";
    cin >> b;

    cout << "Największy wspólny dzielnik  =  " << euklides(a,b) << endl;
    
    return 0;
}

