#include "element.h"

element::element(){}
element::~element(){}

void element::getName()
{
    cout<<"Twoje oznaczenie to: "<<nazwa<<endl;
}

string element::setName()
{
    cout<<"Podaj nowa nazwe: \n";
    cin>>nazwa;
}
