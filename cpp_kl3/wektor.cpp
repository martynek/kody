/*
 * wektor.cpp
 */


#include <iostream>
using namespace std;

struct punkt {
    int x;
    int y;
};

struct wektor {
    punkt pp;
    punkt pk;
};

wektor getWektor() {
    wektor w1;
    cout << "Podaj x, y poczatowego punktu: \n ";
    cin >> w1.pp.x;
    cin >> w1.pp.y;
    cout << "Podaj x, y koncowego punktu:  \n";
    cin >> w1.pk.x;
    cin >> w1.pk.y;
    
    return w1;
    }

punkt wylicz_srodek(wektor w1) {
    punkt ps;
    ps.x = (w1.pp.x + w1.pk.x)/2;
    ps.y = (w1.pk.y + w1.pp.y)/2;
    
    return ps;
}

int main(int argc, char **argv)
{
    wektor w;
    w = getWektor();
    
    punkt ps;
    ps = wylicz_srodek(w);
    cout << "Srodek wektora: " << ps.x << " " << ps.y << endl;
    
    
    return 0;
}

