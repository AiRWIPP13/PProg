 #include <iostream>
 using namespace std;

 class zwierze
{
 public:
  virtual void opis() {cout << "Zwierze !! \n";} //DOPISUJEMY SLOWO virtual
};
class ssak : public zwierze
{
 public:
 void opis() {cout << "Ssak !! \n";};
};
class czlowiek : public ssak
{
 public:
 void opis() {cout << "Czlowiek !! \n";};
};
class ptak : public zwierze
{
 public:
 void opis() {cout << "Ptak !! \n";};
};

int main()
{
    zwierze *zwierze1;  // TAM GDZIE BYL virtual TWORZYMY WSKAZNIK
    czlowiek zwierze2;
    ptak zwierze3;
    ssak zwierze4;

    zwierze1 = &zwierze2; //USTAWIAMY WSKAZNIK Z KLASY NADRZEDNEJ NA OBIEKTY KLAS PODRZEDNYCH;
    zwierze1->opis();     //TO ZE MOZEMY TAK ZROBIC, TO JEST WLASNIE POLIMORFIZM
    zwierze1= &zwierze3;
    zwierze1->opis();
    zwierze1= &zwierze4;
    zwierze1->opis();


}
