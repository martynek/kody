/*
 * sort_wstaw.cpp 
 */


#include <iostream>

using namespace std;

void sort_wstaw(int t[] ,int n){

    int el;
    int i;
    int k;
    
    for(i=0; i < n; i++) 
    {
        el = t[i];
        k = i - 1;
        
        while (k >= 0 && t[k] > el) {
            t[k + 1] = t[k];
            k-= 1; 
            t[k + 1] = el;}
    }
}

    


int main(int argc, char **argv)
{
    int t = [4, 3, 7, 0, 2, 3, 1, 9, -6];
    cout << t[] << endl;
    cout<< sort_wstaw(t[], n) << endl;
    return 0;
}

