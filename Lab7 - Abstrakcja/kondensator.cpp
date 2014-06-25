#include "element.h"

kondensator::~kondensator(){}

kondensator::kondensator()
{ nazwa="C";}

kondensator::kondensator(string naz,float poj)
{
    cout<<"Podaj swoje oznaczenie dla kondensatora: \n";
    cin>>naz;
    nazwa = naz;
    cout<<"Podaj wartosc swojego kondensatora: \n";
    cin>>poj;
    pojemnosc = poj;
}

void kondensator::wymuszenieUI(float nap,float prund)
{
    cout<<"Podaj napiecie wymuszenia: \n";
    cin>>nap;
    cout<<"Podaj prad wymuszenia: \n";
    cin>>prund;
    napiecie = nap;
    prad = prund;
}
