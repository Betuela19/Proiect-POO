#ifndef INSTRUMENT_H
#define INSTRUMENT_H


class Instrument
{
    public:
        Instrument();
        ~Instrument();
          void afiseaza();

        char nume[20];
        char tip[20];
        char marca [20];
        int pret;

    protected:

    private:
};
#endif // INSTRUMENT_H
