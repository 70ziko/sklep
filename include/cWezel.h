#ifndef CWEZEL_H
#define CWEZEL_H
#include "cProdukt.h"


class cWezel
{
    int mId;

    public:
        cWezel(int);
        virtual ~cWezel();
        cWezel* mNastepny;
        int getId();

};

#endif // CWEZEL_H
