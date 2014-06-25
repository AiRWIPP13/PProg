#include <iostream>
using namespace std;

double dzielenie ( double a, double b ) // wykonuje dzialanie a/b
{
    if (b == 0) // jezeli b = 0 (nie mozna dzielic przez zero)
    {
        string wyjatek = " Nie mozna dzielic przez zero!"; //deklaruje wyjatek - cos nie pasuje w dzieleniu
        throw wyjatek;                                     // rzuca wyjatek, zeby w razie czego catch go zlapal                                   // funkcja zwraca dzielenie a/b
    }
    return a / b;
}

int main()
{
    try                                                    //try zaznacza sie podejrzane dzialanie programu
    {
        cout << dzielenie(10,0);                                  //wykonanie funkcji
    }
    catch(string wyjatek)//mo¿e byc np catch(string w);          //zlapanie wyjatku(string - bo nasz wyjatek to string)
    {                                                            // nie jest wa¿ne jak nazwiemy argument catch, wazne zeby byl string;
        cout << "wyjatek: " << wyjatek;//wtedy tutaj zamiast wyjatek -> w;
    }
}
