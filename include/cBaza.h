#ifndef CBAZA_H
#define CBAZA_H
#include "cWezel.h"

class cBaza
{
    cWezel* mPierwszy;

public:
    cBaza();
    virtual ~cBaza();
    void Dodaj(cWezel& aWezel);
    void Wyswietl() const;

};

#endif // CBAZA_H
