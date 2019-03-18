/*
 * formatowanie.cpp
 */


#include <iostream>
#include <iomanip>
#include <cstdio>
#include <math.h> // stala M_PI
using namespace std;

int main(int argc, char **argv)
{
    int lint = 100;
    float lrze = 12.700;
    
    //ios_base::fmtflags fx;
    //fx |=cout.hex;
    //fx |=cout.showbase;
    
    //cout.flags(fx);
    cout << hex << showbase;
    cout << lint << endl;
    
    cout << M_PI << endl;
    cout.precision(3);
    cout << M_PI << endl;
    cout.width(20); // min. szerokosc pola
    cout.fill('-');
    cout << lint << endl;
    cout << setw (30) << lrze << endl;
    
    printf("%12f\n", 10*M_PI);
    printf("Hex: %#x\n0ct: %#o\n", lint, lint);
    
    
    return 0;
}

