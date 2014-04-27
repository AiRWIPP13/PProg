#include <iostream>
#define SID 100000
#define WSK 1

using namespace std;

class osoba {
public:
    string imie;
    string nazwisko;
    string dat_ur;
    char plec;
    string miasto;
    static int id;
    static int licznik;

    osoba();
    osoba(string im);
    osoba(string im, string nz);
    /*osoba(string im, string nz, string d_u);
    osoba(string im, string nz, string d_u, char plec);
    osoba(string im, string nz, string d_u, char plec, string mst);*/

    static int lastid() {return id;};
    void show();
//    osoba* os() = new osoba();
    ~osoba();
//private:

};

int osoba::id=SID;
int osoba::licznik=WSK;

osoba::osoba(){
    imie="nd";
    nazwisko="nd";
    licznik++;
    id++;
}

osoba::osoba(string im){
    imie=im;
    nazwisko="nd";
    licznik++;
    id++;
}

osoba::osoba(string im, string nz){
    imie=im;
    nazwisko=nz;
    licznik++;
    id++;
}

osoba::~osoba() {licznik--;cout<<"Deleted"<<endl;}

osoba os1("ichi","pierwszy");
osoba os2("ni");
osoba os3;


/*osoba os[1]("ichi","pierwszy");
osoba os[2]("ni");
osoba os[3];*/

void show() {
        cout<<""<<os1.imie;
        cout<<" "<<os1.nazwisko<<endl;
        cout<<""<<os2.imie;
        cout<<" "<<os2.nazwisko<<endl;
        cout<<""<<os3.imie;
        cout<<" "<<os3.nazwisko<<endl;


    /*for (int i=1;i<=osoba->licznik;i++) {
        cout<<""<<os[i].imie<<endl;
        cout<<""<<os[i].nazwisko<<endl;
        cout<<""<<os[i].dat_ur<<endl;
        cout<<""<<os[i].plec<<endl;
        cout<<""<<os[i].miasto<<endl;
    }*/
}



int main()
{
    cout << "Przedstaw:" << endl;
    show();
    return 0;
}
