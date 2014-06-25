#include <iostream>
using namespace std;

void funkcja ( int wartosc, int &referencja)//&-znak referencji
{
    cout << " \tW funckji przed zerowaniem\n";
    cout << "\twart = " << wartosc << ", referencja = " << referencja<< endl;

    wartosc = 0;        // zerowanie kopii wartosci
    referencja = 0;     // zerowanie adresu referencji

    cout << "\tW funkcji po zerowaniu\n";
    cout <<"\twartosc = " << wartosc << ", referencja= " << referencja << endl;
}

int main()
{
    int a=44;
    int b=77;

    cout << "Przed wywolaniem funkcji\n" ;
    cout << "a = " << a << ", b = " << b << endl;
    funkcja( a,b);

    cout << "Po wywolaniu funcji" << endl;
    cout << "a = " << a << ", b = " << b << endl; // zmienna a zostaje bez zmian, bo dzialalismy na kopii
                                                  // zmienna b dalej ma wartosc 0, poniewaz dzialalismy na
                                                  // adresie(miejscu w pamieci) zmiennej b (dzieki znakowi &)
}

