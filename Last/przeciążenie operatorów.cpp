#include <iostream>
using namespace std;

class licz_zesp // deklaracja klasy liczby zespolone
{
public:
    int rzecz; // czesc rzeczywista
    int uroj;  // czesc urojna
};

licz_zesp operator+(licz_zesp a, licz_zesp b) // dzieki operator+ mozemy dodawac licz zesp a i licz zesp b
{
    licz_zesp suma;
    suma.rzecz = a.rzecz + b.rzecz;   // dodanie liczb rzeczywistych
    suma.uroj = a.uroj + b.uroj;      // dodanie liczb urojonych
    return suma;                      // zwrocenie sumy
}

licz_zesp operator-(licz_zesp a, licz_zesp b)
{
    licz_zesp roznica;                                  // to samo tylko dla roznicy
    roznica.rzecz = a.rzecz - b.rzecz;
    roznica.uroj = a.uroj - b.uroj;
    return roznica;
}

int main()
{
    licz_zesp w1,w2,w3,w4;      //obiekty w1 - pierwsza liczba zespolona
    w1.rzecz = 3;               // w2 - druga zespolona
    w1.uroj = 5;                // w3 - suma w1 i w2
    w2.rzecz = 6;               // w4 - roznica w1 i w2
    w2.uroj = 1;
    w3 = w1 + w2;
    w4 = w1 - w2;

    cout << " Pierwsza rzecz " << w3.rzecz << "\tPierwsza urojona " << w3.uroj << endl;
    cout << "\n Druga rzecz " << w4.rzecz << "\t Druga urojona " << w4.uroj<<endl;
}

