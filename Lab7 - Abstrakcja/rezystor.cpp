#include "element.h"

rezystor::~rezystor(){}

rezystor::rezystor()
{nazwa = "R";}

rezystor::rezystor(string naz,float res)
{
    cout<<"Podaj swoje oznaczenie dla rezystora: \n";
    cin>>naz;
    nazwa = naz;
    cout<<"Podaj wartosc swojego rezystora: \n";
    cin>>res;
    rezystancja = res;
}

void rezystor::wymuszenieUI(float nap,float prund)
{
    cout<<"Podaj napiecie wymuszenia: \n";
    cin>>nap;
    cout<<"Podaj prad wymuszenia: \n";
    cin>>prund;
    napiecie = nap;
    prad = prund;
}
