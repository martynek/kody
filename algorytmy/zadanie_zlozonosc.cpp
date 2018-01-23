/*
 * zadanie_zlozonosc.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{   int n;
    cout << "Podaj n:" << endl;
    cin >> n;
    
    int i =1;
    while (i < n)
    {   
        cout << i << " , ";
        i += 2;
    }
    // for(int i = 1; i != n; i += 2)
    // for(int i = 1; i <= n; i += 2)
        
    return 0;
}

