#include <iostream>
#include "MagazinInstrumente.h"
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    char c;
    MagazinInstrumente magazin;
    do
    {
        system("cls");
        system("color 3a");


        cout<<("\n\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"
               "\n\t |            Alegerea unui Instrument Muzical           |"

               "\n\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"
               "\n\t |A. Alege tipul de instrument                           |"
               "\n\t |B. Alege marca instrumentului                          |"
               "\n\t |C. Alege intervalul de pret                            |"
               "\n\t |I. Informatii autor                                    |"
               "\n\t |T. Terminare program                                   |"
               "\n\t |                       ,-.        _.---._              |"
               "\n\t |                       |  `\.__.-''       `.            |"
               "\n\t |                       \  _        _  ,.   \             |"
               "\n\t | ,+++=._________________)_||______|_|_||    |          |"
               "\n\t |(_.ooo.===================||======|=|=||    |          |"
               "\n\t |   ~~'                 |  ~'      `~' o o  /           |"
               "\n\t |                        \   /~`\     o o   /             |"
               "\n\t |                        `~'    `-.____.-'              |"
               "\n\t |                                                       |"
               "\n\t |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"
               "\n\n Introdu optiunea din meniu: ");

        fflush(stdin);
        c=toupper(getchar());

        switch (c)
        {
        case 'A':
            magazin.tipuri();
            getch();
            fflush(stdin);
            break;
        case 'B':
            magazin.marci();
            getch();
            fflush(stdin);
            break;
        case 'C':
            magazin.preturi();
            getch();
            fflush(stdin);
            break;
        case 'I':
            magazin.autor();
            getch();
            fflush(stdin);
            break;
        case 'T':
            exit(0);
            getch();
            break;
        default:
            cout<<("\n Nu exista aceasta optiune!");
            break;
        }
    }
    while(!0);
    return 0;

}
