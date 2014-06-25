#include "punkt.h"

//static punkt::typ=0;

punkt::punkt()
{
    cout<<"Uruchomiono konstruktor PUNKT"<<endl;
}

punkt::punkt(int num)
{
    cout<<"Uruchomiono konstruktor PUNKT z parametrem"<<endl;
    numer = num;
}

punkt::~punkt()
{
    cout<<"Uruchomiono dekonstruktor PUNKT"<<endl;
}

void punkt::przedstaw()
{
    cout<<"Nazwa to: "<<nazwa<<endl;
    cout<<"Typ to: "<<typ<<endl;
}

punkt2d::punkt2d()
{
    cout<<"Uruchomiono konstruktor PUNKT 2D"<<endl;
    x = 0;
    y = 0;
}

punkt2d::punkt2d(int num)
{
    cout<<"Uruchomiono konstruktor PUNKT 2D z parametrem"<<endl;
    numer = num;
}

punkt2d::~punkt2d()
{
    cout<<"Uruchomiono dekonstruktor PUNKT 2D"<<endl;
}

void punkt2d::przedstaw()
{
    cout<<"Nazwa to: "<<nazwa<<endl;
    cout<<"Typ to: "<<typ<<endl;
    cout<<"Wsp iks: "<<x<<endl;
    cout<<"Wsp igrek: "<<y<<endl;
}

punkt3d::punkt3d()
{
    cout<<"Uruchomiono konstruktor PUNKT 3D"<<endl;
    x = 0;
    y = 0;
    z = 0;
}

punkt3d::~punkt3d()
{
    cout<<"Uruchomiono dekonstruktor PUNKT 3D"<<endl;
}

void punkt3d::przedstaw()
{
    cout<<"Nazwa to: "<<nazwa<<endl;
    cout<<"Typ to: "<<typ<<endl;
    cout<<"Wsp iks: "<<x<<endl;
    cout<<"Wsp igrek: "<<y<<endl;
    cout<<"Wsp zet: "<<z<<endl;
}
