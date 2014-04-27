#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


class zwierze
{
public:
    zwierze() {cout << "Jestem w konstruktorze klasy zwierze" << endl; }
    virtual ~zwierze() {cout << "Jestem w destruktorze klasy zwierze" << endl; }
    virtual void opis(void) { cout << "Metoda opis klasy zwierze" << endl;}
};

class ssak : public zwierze
{
public:
    ssak() {cout << "Jestem w konstruktorze klasy ssak" << endl; }
    ~ssak() {cout << "Jestem w destruktorze klasy ssak" << endl; }
    virtual void opis(void) { cout << "Metoda opis klasy ssak" << endl;}
};

class ptak : public zwierze
{
public:
    ptak() {cout << "Jestem w konstruktorze klasy ptak" << endl; }
    ~ptak() {cout << "Jestem w destruktorze klasy ptak" << endl; }
    void opis(void) { cout << "Metoda opis klasy ptak" << endl;}
};

class czlowiek : public ssak
{
public:
    czlowiek() {cout << "Jestem w konstruktorze klasy czlowiek" << endl; }
    ~czlowiek() {cout << "Jestem w destruktorze klasy czlowiek" << endl; }
    void opis(void) { cout << "Metoda opis klasy czlowiek" << endl;}
};

zwierze *wsk_zwierze;

int losuj();
int stworz(int n);
int opis(int n);
void usun() { delete wsk_zwierze;}

void tzwierze() { wsk_zwierze = new zwierze;}
void tssak(){ wsk_zwierze = new ssak;}
void tczlowiek(){ wsk_zwierze = new czlowiek;}
void tptak(){ wsk_zwierze = new ptak;}
void tnull() { wsk_zwierze = NULL;}

int main()
{
    srand(time(NULL));
    int i;
    cout << "Ilosc losowan: ";
    cin >> i;

    for (int x=0;x<=i;x++)
    {
        int n = losuj();
        cout << endl << "__________ --" << ++x << "-- ___________" << endl;
        stworz(n);
        opis(n);
        usun();
        }

    return 0;
}


int losuj()
{
    int i = rand()%5;
    return i;
}

int stworz(int n)
{
    switch (n)
    {
        case 0 : tzwierze(); break;
        case 1 : tssak(); break;
        case 2 : tczlowiek(); break;
        case 3 : tptak(); break;
        case 4 : tnull(); break;
        default : cout << "ERROR!"; break;
    }
}

int opis(int n)
{
    if (wsk_zwierze!=NULL)
        wsk_zwierze->opis();
    else
        cout <<"Nie stworzono obiektu." << endl;
}


/*class a
{
public:
    a() {cout << "Jestem w konstruktorze klasy a" << endl; };
    virtual ~a() {cout << "Jestem w destruktorze klasy a" << endl;}
    virtual void opis(void) { cout << "Metoda opis klasy a" << endl;}
};

class b : public a
{
public:
    b() {cout << "Jestem w konstruktorze klasy b" << endl; }
    ~b() {cout << "Jestem w destruktorze klasy b" << endl; }
    virtual void opis(void) { cout << "Metoda opis klasy b" << endl; }
};


int main()
{
    a *wsk_a;
    wsk_a = new a;
    wsk_a->opis();
    delete wsk_a;

    wsk_a = new b;
    wsk_a->opis();
    delete wsk_a;
    return 0;
}
*/
