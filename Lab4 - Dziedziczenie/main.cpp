#include "punkt.h"
#include <iostream>

using namespace std;

int oblicz(punkt someobject)
{
    return 2*(someobject.numer);
}

int main()
{
    punkt point1d;
    punkt2d point2d;
    punkt3d point3d;

    point1d.nazwa = "p1";
    point2d.nazwa = "p2";
    point3d.nazwa = "p3";

    point3d.przedstaw();
    point3d.x = 3;
    point3d.przedstaw();
    point2d.przedstaw();

    int num;
    cout<<endl<<"Podaj numer: "<<endl;
    cin>>num;
    punkt point1dn(num);
    cout<<endl;
    cout<<oblicz (point1dn)<<endl<<endl;

    cout<<endl<<"Podaj numer: "<<endl;
    cin>>num;
    punkt2d point2dn(num);
    cout<<endl;
    cout<<oblicz(point2dn)<<endl;
    //punkt* wsk = new punkt3d;



    getchar();
    return 0;
}
