#include <cProdukt.h>

using namespace std;

cProdukt::cProdukt()
{
    cout << "Konstruktor Produktu bez argumentow zostal wywolany\n";
}

cProdukt::cProdukt(unsigned int aLp, string aNazwa_produktu, int aIlosc, float aCena, float aVat)
{
    mLp = aLp;
    mNazwa_produktu = aNazwa_produktu;
    mIlosc = aIlosc;
    mCena = aCena;
    mVat = aVat;
    cout << "Konstruktor Produktu z argumentami zostal wywolany\n";
}

cProdukt::~cProdukt()
{
    cout << "Destruktor produktu zostal wywolany\n";
}

void cProdukt::Wypelnij()
{
    cout << "Podaj Lp: ";
    cin >> mLp;
    cout << "Podaj nazwe produktu: ";
    getline (cin.ignore(), mNazwa_produktu);
    cout << "Podaj ilosc produktu: ";
    cin >> mIlosc;
    cout << "Podaj cene produktu: ";
    cin >> mCena;
    cout << "Podaj vat produktu: ";
    cin >> mVat;
}

void cProdukt::Pokaz()
{
    cout << "Lp: " << mLp << endl;
    cout << "Nazwa: " << mNazwa_produktu << endl;
    cout << "Ilosc: " << mIlosc << endl;
    cout << "Cena: " << mCena << endl;
    cout << "Vat: " << mVat << endl;
}

void cProdukt::setLp()
{
    cout << "Podaj nowe Lp: ";
    cin >> mLp;
}

void cProdukt::getLp()
{
    cout << "Lp tego produktu wynosi: " << mLp << endl;
}
