#include "element.h"

cewka::~cewka(){}

cewka::cewka()
{nazwa = "L";}

cewka::cewka(string naz,float ind)
{
    cout<<"Podaj swoje oznaczenie dla cewki: \n";
    cin>>naz;
    nazwa = naz;
    cout<<"Podaj wartosc swojej cewki: \n";
    cin>>ind;
    indukcyjnosc = ind;
}

void cewka::wymuszenieUI(float nap,float prund)
{
    cout<<"Podaj napiecie wymuszenia: \n";
    cin>>nap;
    cout<<"Podaj prad wymuszenia: \n";
    cin>>prund;
    napiecie = nap;
    prad = prund;
}
