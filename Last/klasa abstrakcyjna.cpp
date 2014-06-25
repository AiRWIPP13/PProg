#include <iostream>
using namespace std;

class zwierze
{
public:
     virtual void oddychaj()=0;

};

class ssak : public zwierze
{
public:
    void oddychaj ()
    {
        cout << "Oddycham plucami" << endl;
    }
};

class ryba : public zwierze
{
public:
    void oddychaj()
    {
        cout << "Oddycham skrzelami" << endl;
    }
};

int main()
{
    // zwierze *wsk = new zwierze;         NIE MO¯NA UTWORZYC
    // zwierze obiekt;                      OBIEKTU KLASY ABSTRAKCYJNEJ!!!!!!!
    zwierze * wsk = new ssak;  // DLATEGO ZE VIRTUAL VOID TO MOGE Z KLASY NADRZEDNEJ WEJSC POPRZEZ WSKAZNIK DO PODRZEDNEJ;
    wsk ->oddychaj();

    zwierze *wsk1 = new ryba;
    wsk1 -> oddychaj();
}
