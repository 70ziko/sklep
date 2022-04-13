#include "cWarzywo.h"

cWarzywo::cWarzywo()
{
    //ctor
}

cWarzywo::cWarzywo(unsigned int aLp, string aNazwa_produktu, int aIlosc, float aCena, float aVat, string aKolor)
:cProdukt(aLp, aNazwa_produktu, aIlosc, aCena, aVat)
{
    /*mLp = aLp;
    mNazwa_produktu = aNazwa_produktu;
    mIlosc = aIlosc;
    mCena = aCena;
    mVat = aVat;
    */
    mKolor = aKolor;

    cout << "Konstruktor Warzywa z argumentami zostal wywolany\n";
}

void cWarzywo::Pokaz()
{
    /*cout << "Lp: " << mLp << endl;
    cout << "Nazwa: " << mNazwa_produktu << endl;
    cout << "Ilosc: " << mIlosc << endl;
    cout << "Cena: " << mCena << endl;
    cout << "Vat: " << mVat << endl;
    */
    cProdukt::Pokaz();
    cout << "Kolor: " << mKolor << endl;
    cout << endl;
}

void cWarzywo::Wypelnij()
{
    cProdukt::Wypelnij();
    cout << "Podaj kolor produktu: ";
    cin >> mKolor;
}


cWarzywo::~cWarzywo()
{
    cout << "Destruktor Warzywa zostal wywolany\n";
}
