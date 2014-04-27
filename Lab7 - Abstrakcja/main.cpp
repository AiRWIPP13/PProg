#include <iostream>
#define _PNzw_ "Podaj nazwe elementu"


using namespace std;

class element
{
private:
int curr;
int volt;
int pow;
int freq;
string name;
public:
    element(){}
    element(string nazwa) {   name=nazwa;}
    virtual string getName() = 0;
    virtual void setName(string nazwa=0) = 0;
    virtual void wymuszenieU()=0;
    virtual void wymuszenieI()=0;
    friend int Obwod() ;
};

class rezystor : element
{
private:
    float rez;
    string name;
public:
    rezystor(){}
    rezystor(string nazwa, float R) {    name=nazwa;    rez=R;}
    void getName(string) {cout<<"_PNzw_";}
    void setName(string) {cin>>name;}
    void wymuszenieU(int napiecie)
    {

    }
    void wymuszenieI(int natezenie)
    {

    }
};

class cewka : element
{
private:
    float induct;
    string name;
public:
    cewka(){}
    cewka(string nazwa, float L) {   name=nazwa;    induct=L;}
    void getName(string) {cout<<"_PNzw_";}
    void setName(string) {cin>>name;}
};

class kondensator : element
{
private:
    int capa;
    string name;
public:
    kondensator(){}
    kondensator(string nazwa, float C) {    name=nazwa;   capa=C;}
    void getName(string) {cout<<"_PNzw_";}
    void setName(string) {cin>>name;}

};




int Obwod()
{
    return 0;
}

int main()
{
    rezystor tab[] {
    new rez1;
        }
    cout << "Hello world!" << endl;
    return 0;
}
