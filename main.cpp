#include <cProdukt.h>
#include <cWarzywo.h>
#include <iostream>
#include "cBaza.h"
#include "cWezel.h"

using namespace std;

int main()
{
//    cProdukt p1(1, "Cola", 2, 3.4, 0.23);
//    p1.Pokaz();
//
//    cWarzywo w1(2, "Pomidor", 12, 5.5, 0.05, "Czerwony");
//    w1.Pokaz();
//    w1.Wypelnij();
//    w1.Pokaz();
//
//    cProdukt* p2 = new cProdukt(3, "Pepsi", 3, 2, 0.23);
//    p2->Pokaz();
//    delete p2;
//
//    cWarzywo* w2 = new cWarzywo(4, "Marchewka", 5, 0.5, 0.05, "Pomaranczowy");
//    w2->Pokaz();
//    delete w2;
//
//    cProdukt* p3 = new cWarzywo(5, "Salata", 10, 3, 0.05, "Zielony");
//    p3->Pokaz();
//    delete p3;

    //cWarzywo* w3 = new cProdukt(6, "Woda", 15, 2.5, 0.2);
    //error: invalid conversion from 'cProdukt*' to 'cWarzywo*' [-fpermissive]|
    //w3->Pokaz();

//    system("pause");

    cBaza baza;
    cWezel nowy(3);
    baza.Dodaj(nowy);
    baza.Dodaj(nowy);
    cWezel kolejny(5);
    baza.Dodaj(kolejny);

    baza.Wyswietl();
    return 0;
}
