#include "MagazinInstrumente.h"
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

MagazinInstrumente::MagazinInstrumente()
{
    //Populate 'database'

    strcpy(instrumente[0].nume,"Saxofon");
    strcpy(instrumente[0].marca,"Eastman");
    strcpy(instrumente[0].tip,"Suflat");
    instrumente[0].pret = 500;

    strcpy(instrumente[1].nume,"Chitara");
    strcpy(instrumente[1].marca,"Yamaha");
    strcpy(instrumente[1].tip,"Coarde");
    instrumente[1].pret = 1000;

    strcpy(instrumente[2].nume,"Baterie");
    strcpy(instrumente[2].marca,"Yamaha");
    strcpy(instrumente[2].tip,"Percutie");
    instrumente[2].pret = 1500;

    strcpy(instrumente[3].nume,"Trompeta");
    strcpy(instrumente[3].marca,"Eastman");
    strcpy(instrumente[3].tip,"Suflat");
    instrumente[3].pret = 700;

    strcpy(instrumente[4].nume,"Vioara");
    strcpy(instrumente[4].marca,"Gewa");
    strcpy(instrumente[4].tip,"Coarde");
    instrumente[4].pret = 1200;

    strcpy(instrumente[5].nume,"Tamburina");
    strcpy(instrumente[5].marca,"Gewa");
    strcpy(instrumente[5].tip,"Percutie");
    instrumente[5].pret = 1800;
    //Total
    nrInstrumente = 6;
}

void MagazinInstrumente::tipuri()
{
    char tipuriUnice[nrInstrumente][20];
    int nrTipuriUnice = 0;

    //Caut in 'database' tipurile unice, pentru afisare
    for (int i=0;i<nrInstrumente;i++)
    {
        bool found = false;
        for(int j=0;j<nrTipuriUnice;j++){
            if(strcmp(instrumente[i].tip,tipuriUnice[j])==0)//Equal
            {
                found = true;
            }
        }
        if(!found)//Nu a fost gasit in array-ul cu tipuri unice, deci il adaug
        {
            strcpy(tipuriUnice[nrTipuriUnice],instrumente[i].tip);
            nrTipuriUnice++;
        }
    }

    cout<<"\tTipuri gasite:"<<endl;
    for(int i=0;i<nrTipuriUnice;i++){
        cout<<i<<". "<<tipuriUnice[i]<<endl;
    }

    cout<<"\tIntroduceti tipul:"<<endl;
    int c;
    cin>>c;
    if(c>nrTipuriUnice){
        cout<<"\tOptiune inexistenta."<<endl;
    }else {
        cout<<"\tInstrumente gasite:"<<endl;
        for (int i=0;i<nrInstrumente;i++) //Caut instrumente cu tipul selectat
        {
            if(strcmp(tipuriUnice[c],instrumente[i].tip)==0){
                instrumente[i].afiseaza();
            }
        }
    }
    getchar();
}

void MagazinInstrumente::marci()
{
    char marciUnice[nrInstrumente][20];
    int nrMarciUnice = 0;

    for (int i=0;i<nrInstrumente;i++)
    {
        bool found = false;
        for(int j=0;j<nrMarciUnice;j++){
            if(strcmp(instrumente[i].marca,marciUnice[j])==0)
            {
                found = true;
            }
        }
        if(!found)
        {
            strcpy(marciUnice[nrMarciUnice],instrumente[i].marca);
            nrMarciUnice++;
        }
    }

    cout<<"\tMarci gasite:"<<endl;
    for(int i=0;i<nrMarciUnice;i++){
        cout<<i<<". "<<marciUnice[i]<<endl;
    }
    cout<<"\tIntroduceti marca:"<<endl;

    int c;
    cin>>c;
    if(c>nrMarciUnice){
        cout<<"\tOptiune inexistenta."<<endl;
    }else {
        cout<<"\tInstrumente gasite:"<<endl;
        for (int i=0;i<nrInstrumente;i++)
        {
            if(strcmp(marciUnice[c],instrumente[i].marca)==0){
                instrumente[i].afiseaza();
            }
        }
    }
    getchar();
}

void MagazinInstrumente::preturi()
{
    int intervale[] = {0,500,1000,2000}; //Array de intervale
    int nrIntervale = 4;

    cout<<"\tIntervale de pret:"<<endl;
    for(int i=0;i<nrIntervale-1;i++){
        cout<<i<<". "<<intervale[i]<<" RON"<<" - "<<intervale[i+1]<<" RON"<<endl;
    }

    cout<<"\tIntroduceti intervalul:"<<endl;
    int interval;
    cin>>interval;

    if(interval>nrIntervale-2){
        cout<<"\tInterval inexistent."<<endl;
    }
    else{
        cout<<"\tInstrumente gasite:"<<endl;
        for(int i=0;i<nrInstrumente;i++)
        {
            if(instrumente[i].pret>=intervale[interval] && instrumente[i].pret<=intervale[interval+1]){
                instrumente[i].afiseaza();
            }
        }
    }
    getchar();
}

void MagazinInstrumente::autor()
{
    system("color 0a");
    cout<<("\n\t ______________________________________________________");
    cout<<("\n\t |nume |Coroama Betuela                                 |");
    cout<<("\n\t |grupa| 3123 A Calculoare                             |");
    cout<<("\n\t |           ( )                    |____|             |");
    cout<<("\n\t |        ___|/________|\____________|____|_______      |");
    cout<<("\n\t |       |__/|/_)_|____|_______|\__(_)__(_)________|    |");
    cout<<("\n\t |       |_(_|_/__|__(_)_______|\__________________|    |");
    cout<<("\n\t |       |___|____|__________(_)__________________|    |");
    cout<<("\n\t |       |________|_________________________(_)___|    |");
    cout<<("\n\t |                                          |          |");
     cout<<("\n\t |                                          |          |");
    cout<<("\n\t |_____________________________________________________|\n");

}

MagazinInstrumente::~MagazinInstrumente()
{
}
