/*
 * petle_switch.cpp
 * Program pobiera od uzytkownika znak zn typu char do momentu, gdy jest on litera 't','T','n' lub 'N'.
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    char zn='t'; //deklaracja
    
    
    while (zn=='t' || zn=='T' || zn=='n' || zn=='N') 
    {
        cout << "Podaj znak: " << endl;
        cin >>  zn;
       
    };
    
            
    return 0;
    
}

