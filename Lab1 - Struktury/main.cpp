#include <iostream>
#include <fstream>
#include <stdio.h>
#define LW 5

using namespace std;

void WprowadzDane();
void WprowadzImie(int i);
void WprowadzNazwisko(int i);
void WprowadzWiek(int i);
void WprowadzTelefon(int i);
void WyswietlDane();

struct TypKsTel
 {
  string imie;
  string nazwisko;
  int wiek;
  string telefon;
 }Dane[LW];

//-------------------------------------------------------------------------

int main()
{
   cout << endl;
   cout << "Dane osobowe" << endl;
    WprowadzDane();
   getchar();
   cout << endl;

   cout << "Nacisnij klawisz ENTER, aby wyswietlic dane." << endl;
   getchar();
    WyswietlDane();

    ofstream KsTel("TypKsTel.txt",ios::app);
    for (int i=0; i<LW; i++)
    {
        KsTel<<"\n "<<i+1<<". osoba: \n"<<Dane[i].imie<<" "<<Dane[i].nazwisko<<" "<<Dane[i].wiek<<" "<<Dane[i].telefon <<endl;
    }

   cout << endl << endl << endl << "Nacisnij Enter aby zakonczyc" << endl;
   getchar();

   return 0;
}


void WprowadzDane() {
     for(int i=0;i<LW;i++) {
            cout<<"\n "<<i+1<<". osoba: \n";
        WprowadzImie(i);
        WprowadzNazwisko(i);
        WprowadzWiek(i);
        WprowadzTelefon(i);
     }
}

void WyswietlDane() {
    for (int i=0;i<LW;i++) {
        cout<<"\n"<<i+1<<". osoba: \n";
        cout<<"Imie: "<<Dane[i].imie<<"\n";
        cout<<"Nazwisko: "<<Dane[i].nazwisko<<"\n";
        cout<<"Wiek: "<<Dane[i].wiek<<"\n";
        cout<<"Telefon: "<<Dane[i].telefon<<"\n";
    }
    }

void WprowadzImie(int i) {
    cout << "Imie: ";
    cin >> Dane[i].imie;
}

void WprowadzNazwisko(int i) {
    cout << "Nazwisko: ";
    cin >> Dane[i].nazwisko;
}

void WprowadzWiek(int i) {
    cout << "Wiek: ";
    cin >> Dane[i].wiek;
}

void WprowadzTelefon(int i) {
    cout << "Telefon: ";
    cin >> Dane[i].telefon;
}
