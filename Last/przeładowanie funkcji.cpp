#include <iostream>
#include <string>
using namespace std;

void wypisz(char znak1, int liczba1);
void wypisz(int liczba2, string tekst1, char znak2);
void wypisz(float liczba3, char znak3, int liczba4, string tekst2);

int main()
{
    wypisz('m', 12);                            //CHODZI TYLKO I WYLACZNIE O TO
    wypisz(13, "kupa", 'a');                    //ZA UZYWAMY KILKA RAZY TEJ SAMEJ
    wypisz(14.98, 'w' , 14, "gowno");           //NAZWY FUNCKJI ALE Z INNYMI ARGUMENTAMI
}

void wypisz(char znak1, int liczba1)
{
    cout << "Znak 1: " << znak1 << "\nLiczba 1: " << liczba1 << endl << endl;
}
void wypisz(int liczba2, string tekst1, char znak2)
{
    cout <<"\tLiczba 2: " << liczba2 << "\n\tTekst 1: " << tekst1 << "\n\tZnak 2: " << znak2<< endl<< endl;
}
void wypisz(float liczba3, char znak3, int liczba4, string tekst2)
{
    cout <<"Liczba 3: " << liczba3 << "\nZnak 3: " << znak3 << "\nLiczba 4: " << liczba4<< "\nTekst 2: " << tekst2<< endl;
}

