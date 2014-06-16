#include <iostream>
#define Tab 2
using namespace std;
float pi = 3.14;

class Figure {
private:
    string name;
public:

    void virtual setName() { name = "figure";}
    void virtual showName() { cout << name << endl;}
    virtual float Area() {
       return -1;              // Error
    }

 };



class Kwadrat : Figure {
public:
    Kwadrat(float bok ) : a( bok ) {}   // przypisania 'a' wartosci z init
    void setName() { name = "Kwadrat";}
    float Area() {
       return a * a;  // a^2
     }

private:
    string name;
    float a; // bok kwadratu
 };

class Kolo : public Figure {
public:
    Kolo(float promien ) : r( promien ) {}
    void setName() { name = "Kolo";}
    float Area() {
       return pi * r * r;   //pi*r^2
     }

private:
    string name;
    float r; // promieñ kola
 };




Figure *tablica[Tab];

void setter() {
    for(int i=0;i<=Tab;i++) {
        tablica[i]->setName();
    }
}

void init() {
    tablica[0] = new Figure;
    //tablica[1] = new Prostokat;
   // tablica[2] = new Kwadrat;
    tablica[1] = new Kolo(4);
    //tablica[4] = new Rownoleglobok;
    //tablica[5]
    //tablica[6]
    //tablica[7]
    //tablica[8]
    //tablica[9]
    setter();
}

 void countArea() {
   for (int i=0;i<=Tab;i++) {
   cout << tablica[i]->Area() << endl;
   }
   return;
 }

 void showArea() {
    for (int i=0;i<=Tab;i++) {
        tablica[i]->showName();
        cout << tablica[i]->Area() << endl;
    }
 }



 int main() {
    init();
    countArea();
    showArea();

   return 0;
 }
