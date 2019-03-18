/*
 * car.cpp
 */
#include <iostream>
#include <cstdlib>
#include "car.h"

using namespace std;

Car::Car() {
    marka=model="";
    rocznik=przebieg=0;
}

Car::Car(string mr, string ml, int r, int p) {
    if (r <= 1990) r = 1990;
    marka = mr;
    model = ml;
    rocznik = r;
    przebieg = p;
}

void Car::dodaj() {
    cout << "Dodaj samochód:"<< endl;
    cout << "Marka: "; cin>>marka;
    cout << "Model: "; cin>>model;
    cout << "Rocznik: "; cin>>rocznik;
    cout << "Przebieg: "; cin>>przebieg;
}

void Car::dane() {
    cout << "\nTwoje piękne auto:"<< endl;
    cout << "Marka: " << marka << endl;
    cout << "Model: " << model << endl;
    cout << "Rocznik: " << rocznik << endl;
    cout << "Przebieg: " << przebieg << endl;
}
void Osoba::laduj(int ile) {
    cout << "Dodaj osobę:"<< endl;
    cout << "Imię: "; cin>> imie;
    cout << "Nazwisko: "; cin>>nazwisko;
    cout << "Wiek: "; cin>>wiek;
    cout << "Płeć: "; cin>>plec;
}

void Osoba::pasazerowie() {
    cout << "\nTwoje piękna osoba:"<< endl;
    cout << "Imię: " << imie<< endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Płeć: " << plec << endl;
}
