#ifndef CPRODUKT_H
#define CPRODUKT_H
#include <string>
#include <iostream>

using namespace std;


class cProdukt
{
    protected:
        unsigned int mLp;
        string mNazwa_produktu;
        int mIlosc;
        float mCena;
        float mVat;

    public:
        cProdukt();
        cProdukt(unsigned int, string, int, float, float);
        virtual void Wypelnij();
        virtual void Pokaz();
        void setLp();
        void getLp();

        virtual ~cProdukt();


};

#endif // CPRODUKT_H
