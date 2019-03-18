/*
 * Cieciura_lokata.cpp
 */


#include <iostream>

using namespace std;

int zliczaj (int n)
{
  int i = 0;
  int w = 100;
  
  while(i != n)
  {
      w += 10;
      i += 1;
  } 
   return w;
}

int main(int argc, char **argv)
{
    int n = 0;
    cout << "Podaj liczbe miesiecy: " << endl;
    cin >> n;
    
    cout << "Stan konta po " << n << " miesiacach: " << zliczaj(n) << endl;
	
	return 0;
}

