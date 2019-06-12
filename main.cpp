#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <conio.h>
#include <windows.h>

using namespace std;
string przedmiot;
int liczba_ocen, i, o, wybor;
int main()
{
    cout << "Witam w aplikacji do obliczanie sredniej wazonej!" << endl;
    for(;;)
    {
    cout<<"HELLO!"<<endl;
    cout<<"Kliknij 1 aby rozpoczac"<<endl;
    cout<<"Kliknij 2 aby wyjsc z programu"<<endl;
    wybor=getch();
    switch(wybor)
    {
        case '1':
        break;
        case '2': exit(69);
        default:
        break;
    }
    cout << "Podaj nazwe przedmiotu:";
    cin >> przedmiot;
    cout << "Podaj liczbe ocen:";
        if(!(cin>>liczba_ocen))
    {cerr<<"to nie jest liczba!"; Sleep(2000); exit(69);}

    double ocena[liczba_ocen-1], waga[liczba_ocen-1], wartosc[liczba_ocen-1], suma=0, sumawag=0;
    string ocenax;

    for(i=0; i<liczba_ocen; i++)
    {
        cout << "Podaj "<<i+1<<" ocene:";
        cin >> ocenax;

        if(ocenax[1]=='+')
        {
            ocenax.erase(1,1);
            istringstream(ocenax)>>ocena[i];
           ocena[i]=ocena[i]+0.4;
        }
        else if(ocenax[1]=='-')
        {
            ocenax.erase(1,1);
            istringstream(ocenax)>>ocena[i];
           ocena[i]=ocena[i]-0.4;
        }
        else
        {ocenax.erase(1,1);
        istringstream(ocenax)>>ocena[i];
        }
        cout << "Podaj wage "<<i+1<<" oceny:";
        if(!(cin>>waga[i]))
    {cerr<<"to nie jest liczba!"; Sleep(2000); exit(69);}


        wartosc[i]=ocena[i]*waga[i];
        suma=suma+wartosc[i];
        sumawag=sumawag+waga[i];
    }


    cout<<"Twoja srednia z "<<przedmiot<<" wynosi:"<<suma/sumawag<<endl;
    cout<<"Czy chcesz powtorzyc?"<<endl;
    cout<<"1. tak"<<endl;
    cout<<"2.nie"<<endl;
    wybor=getch();
    switch(wybor)
    {
        case '1': system("cls");
        break;
        case '2': exit(69);
        default: cout<<"nie ma takeij opcji!";
    }
    }

    return 0;
}
