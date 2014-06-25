#include <iostream>
using namespace std;

int dodawanie (int a, int b)
{
   cout << "Dodawanie intow\n" ;
   return a+b;
}

float dodawanie1 (float a, float b)
{
    cout << "Dodawanie floatow\n";
    return a+b;
}

int dodawanie2(int a, float b)
{
    cout << "Dodawanie intow do floatow\n";
    return a+b;
}

int main()
{
    float a = 3.14;
    float b = 2.12;
    cout << "Poczatkwe wartosci a i b \na = " << a << "\nb = " << b << endl;
    cout << "Dodawanie1: " << a << "+" << b << "= "<< dodawanie(a,b) << endl; /* POMIMO, ¯E ZMIENNA a , b
                                                         S¥ TYPU FLOAT TO FUNCKJA dodawanie()
                                                         DODA JE JAKO INT ( CZESCI CALKOWITE )*/
    cout << "Dodawanie2: " << a << "+" << b << "= " << dodawanie1(static_cast<int>(a),b) << endl; /* POPRZEZ RZUTOWANIE, PIERWSZY FLOAT
                                                                            W FUNKCJI ZAMI SIE NA INTA CZYLI CZESC
                                                                            CALKOWITA Z TEJ LICZBY, b DALEJ BEDZIE FLOATEM*/
    cout << "Dodawanie3: " << a << "+" << b << "= " << dodawanie2(a,static_cast<int>(b)) << endl; // DZIEKI RZUTOWANIU DODAJEMY INTA DO INTA
}
