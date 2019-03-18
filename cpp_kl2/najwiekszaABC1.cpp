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
    
    
    if (a > b && a >c )
         {
           cout << "Największe a=" << a;
         } 
    
     if (b > a && b > c)
        {
          cout << "Największe b=" << b;
        }
        
    if (c > a && c > b)
        {
          cout << "Największe c=" << c;
        }
        
    if (a > c && a == b)
        {
          cout << "Największe a=b=" << b;
        }
        
    if (a == c && a > b)
        {
          cout << "Największe a=c=" << a;
        }
        
    if (b > a && c == b)
        {
          cout << "Największe b=c=" << b;
        }
   
    if (a == c && a == b)
        {
          cout << "Największe a=b=c= " << b;
        }
	return 0;
}

