/*
 * fibonacci.cpp 
 */


#include <iostream>

using namespace std;

int fib_iter(int n) {
    int a = 0;
    int b = 1;
    if (n==0) {
        cout << 0;
        return 0; 
        }
        cout << a;
        for(int i=2; i < n; i++)
    }
    
int fib_iter2(int n) {
    int a = 0;
    int b = 1;
    
    while(n > 0)
    }
    
int fib_rek(int n)
{
    if (n == 1)
        return 1;
    else
        return fib_rek((n - 2) + (n - 1))
}

int main(int argc, char **argv)
{
	
	return 0;
}

