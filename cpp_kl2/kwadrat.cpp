/*
 * hello.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int bok;
    bok = 0;
    cout << "Witaj w C++" << endl;
    cout << "Podaj bok kwadratu: ";
	cin >> bok;
    cout << "Pole kwadratu: " << bok * bok << endl;
    cout << "Obwód kwadratu: " << 4 * bok << endl;
    
	return 0;
}

