#include <iostream>
#define PI 3,1415

using namespace std;

class figure {
private:
    string name;
public:
    int pole;
    void setName(string);
    void calcArea(void);
    void virtual Area() {    cout << "Area = a*h*sinL" << endl;};
    void virtual CArea();
    figure();
    figure(string);

    };


class rectangle : figure {
public:
    void Area() {   cout << "Area = a*b" << endl;};
    void CArea(int a,int b) {pole=a*b;};
};


class circle : figure {
public:
    void Area() {   cout << "Area = pi*r^2" << endl;};
    void CArea(int r) {pole=PI*r^2;};
};


class square : figure {
public:
    void Area() {   cout << "Area = a^2" << endl;};
    void CArea(int a) {pole=a^2;};
};


class parallelogram : figure {
public:
    void Area() {   cout << "Area = a*h" << endl;};
    void CArea(int a, int h) {pole=a*h;};
};


figure::figure() {string nm="figure";}


figure* Figura;

//Figura* = tablica[5];

void setName(string nm) {
  //  Figura.name=nm;
}

void calcArea(string Pole) {
//    Figura.pole=Pole;}



void setAreas() {
    tablica[0] = new figure;
    tablica[1] = new rectangle;
    tablica[2] = new square;
    tablica[3] = new circle;
    tablica[4] = new parallelogram;

    }

void showAreas() {
    for (int i=0;i<5;i++) {
        wsk = tablica[i];
        wsk -> Area;
    }

    }


int main()
{
    cout << "Metody wirtualne i polimorfizm!" << endl;
    cout << endl;
    setAreas();
    showAreas();





    return 0;
}
