/*
 * hello.cpp
 * Pobierz trzy liczby calkowite od uzytkownika i wydrukuj najwieksza
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b, c;
    a = b = c = 0;
    cout << "Podaj 3 liczby: ";
    cin >> a >> b >> c;
    
    
    if (a > b) 
         {
         if (a > c)
         cout << "Największe a=" << a;
         else if (a < c)
         cout << "Największe c=" << c;
         else if (a == c)
         cout << "Najwieksze a=c=" << a;
         } 
    
    else if (b > a)
        {
        if (b > c)
        cout << "Największe b=" << b;
        else if ( b < c)
        cout << "Największe c=" << c;
        else if (b == c)
         cout << "Największe b=c=" << b;
        }
    
    else if (c > a )
        {
        if (c > b)
        cout << "Najwieksze c= " << c;
        else if (b > c)
        cout << "Najwieksze b=" << b;
        else if (c == b)
        cout << "Największe c=b=" << c;
        }
    else if (a == b)
        {
        if (c >= b)
        cout << "Najwieksze a=c=b " << a;
        else if (c < a )
        cout << "Najwieksze a=b " << a;
        else if (c > a )
        cout << "Najwieksze c= " << c;
        }
   
	return 0;
}

