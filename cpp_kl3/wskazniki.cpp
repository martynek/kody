/*
 * wskazniki.cpp 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i = 13;
    float j = 12.09;
    float *wsk2;
    int *wsk1; // deklaracja wskaznika do liczby calkowitej
    wsk1 = &i;
    wsk2 = &j;
    cout << i << endl;
    cout << wsk1 << endl;
    cout << j << endl;
    cout << wsk2 << endl;
    cout << *wsk2 << endl;
    *wsk1 = (int)*wsk2;
    cout << *wsk1 << endl;
    cout << i << endl;
    
    return 0;
}

