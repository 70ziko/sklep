#ifndef CWARZYWO_H
#define CWARZYWO_H

#include <cProdukt.h>


class cWarzywo : public cProdukt
{
    private:
        string mKolor;

    public:
        cWarzywo();
        cWarzywo(unsigned int, string, int, float, float, string);
        void Pokaz();
        void Wypelnij();
        virtual ~cWarzywo();

};

#endif // CWARZYWO_H
