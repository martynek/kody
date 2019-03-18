/*
 * tablica.cpp
 */


#include <iostream>

using namespace std; 

int main(int argc, char **argv)
{
	int  liczby[20];
    srand(time(NULL)); // inicjajcja generatora liczb pseudolosowych 
    
    for ( int i= 0; i < 20; i++)
    {
            liczby[i] = rand() % 100;
    }
    for ( int i= 0; i < 20; i++)
    {
            cout << liczby[i] << " ";
    }
    
    
    
	return 0;
}

