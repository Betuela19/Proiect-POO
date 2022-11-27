#ifndef MAGAZININSTRUMENTE_H
#define MAGAZININSTRUMENTE_H
#include "Instrument.h"

class MagazinInstrumente
{
    public:
        MagazinInstrumente();
        virtual ~MagazinInstrumente();
        void tipuri();
        void marci();
        void preturi();
        void autor();

        Instrument instrumente[20];
        int nrInstrumente;
    protected:
    private:
};

#endif // MAGAZININSTRUMENTE_H
