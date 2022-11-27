#include "Instrument.h"
#include <iostream>
#include <cstring>
using namespace std;

Instrument::Instrument()
{
    //ctor
}

Instrument::~Instrument()
{
    //dtor
}

void Instrument::afiseaza()
{
    cout<<"Nume = "<<nume<<endl<<"Tip = "<<tip<<endl<<"Marca = "<<marca<<endl<<"Pret = "<<pret<<" RON"<<endl<<endl;
}
