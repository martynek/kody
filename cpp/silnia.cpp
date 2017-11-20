/*
 * silnia.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int liczba;
    int silnia = 1;
    
    cout << "Podaj liczbe: " << endl;
    cin >> liczba;
    
    for (int i = 1; i <=liczba; i++)
        silnia *= i;
        
    if (liczba == 0)
        cout << "1" << endl;
    else
        cout << silnia << endl;
    
    return 0;
}

