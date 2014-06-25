#include <iostream>
#include "Punkt3D.h"
#include "Wektor.h"

using namespace std;

/*Punkt3D operator+ (Punkt3D pkt, int arg)
{
    pkt.x+=arg;
    pkt.y+=arg;
    pkt.z+=arg;

}*/

Punkt3D operator+ (Punkt3D pkt, Wektor wek)
    {
        pkt.x+=wek.dx;
        pkt.y+=wek.dy;
        pkt.z+=wek.dz;
        return pkt;
    }
Wektor operator* (Wektor wek1, Wektor wek2)
{
    Wektor tmp;
    tmp.dx = (wek1.dy*wek2.dz) - (wek1.dz*wek2.dy);
    tmp.dy = (wek1.dz*wek2.dx) - (wek1.dx*wek2.dz);
    tmp.dz = (wek1.dx*wek2.dy) - (wek1.dy*wek2.dx);
    return tmp;
}

ostream & operator<< (ostream &wyjscie, Wektor &s)
{
    wyjscie<<"["<<s.dx<<", "<<s.dy<<", "<<s.dz<<"]"<<endl;

    return wyjscie;
}

ostream & operator<< (ostream &wyjscie, Punkt3D &s)
{
    wyjscie<<"("<<s.x<<", "<<s.y<<", "<<s.z<<")"<<endl;

    return wyjscie;
}

int main()
{
    Punkt3D p1, p2;
    Wektor w1, w2, w3;
    p1.x=1;p1.y=1;p1.z=1;
    p2.x=2;p2.y=2;p2.z=2;

    w1.dx=11;w1.dy=11;w1.dz=11;
    w2.dx=22;w2.dy=22;w2.dz=22;

    cout<<"Wspolrzedne przed modyfikacjami: \n"<<"p1 = "<<p1<<"p2 = "<<p2<<"w1 = "<<w1<<"w2 = "<<w2;

    p1 = p1 + w1;
    cout<<"p1 + w1 = "<<p1;
    w3 = w1*w2;
    cout<<"w1 * w2 = "<<w3;
    p2 = p2 + w3;
    cout<<"p2 + w3 = "<<p2;
    p2 = p2 + 3;
    cout<<"p2 + 3 = "<<p2;

    return 0;
}
