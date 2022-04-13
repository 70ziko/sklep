#include "cBaza.h"
#include <iostream>

cBaza::cBaza()
{

}

cBaza::~cBaza()
{
    //dtor
}

void cBaza::Dodaj(cWezel& aWezel)
{
    aWezel.mNastepny=mPierwszy;
    mPierwszy=&aWezel;

}

void cBaza::Wyswietl() const
{
//    std::cout<<mPierwszy->mId<<" | "<<mPierwszy->mNastepny->mId;
    std::cout<<mPierwszy->mId
}
