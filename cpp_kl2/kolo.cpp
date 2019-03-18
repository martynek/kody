/*
 * hello.cpp
 */


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
	int r;
    r = 0;
    cout << "Witaj w C++" << endl;
    cout << "Podaj promień: ";
	cin >> r ;
    cout << "Pole koła: " << M_PI * r * r << endl;
    
    
	return 0;
}

