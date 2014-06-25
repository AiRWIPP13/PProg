#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void sprawdz (vector<string> wek)
{
    for (int i=0;i<wek.size();i++)
    {
        cout<<wek[i]<<endl;
    }
}

void statystyka(vector<string> wek)
{
    int liczba;
    int licznik = 0;
    fstream stats;
    stats.open("stats.txt", ios::in | ios::out);
    cout << "Podaj pozadana dlugosc wyrazow do wyszukania \n";
    cin >> liczba;

    for (int i=0;i<wek.size();i++)
    {
        if (wek[i].length()==liczba)
        {
            licznik++;
        }
    }
    stats << licznik;
    cout << "Ilosc "<<liczba<<" wyrazowych slow to: "<<licznik<<endl;
}

int main ()
{
    vector<string> wektor;
    string odczyt;
    fstream dane;
    dane.open("dane.txt",ios_base::in|ios_base::out);

    if (!dane.eof())
    {
        dane >> odczyt;
    }
    int licznik = -1;
    for (int i=0;i<=odczyt.length();i++)
    {
        if (odczyt[i]==',' or i==odczyt.length())
        {
            wektor.push_back(odczyt.substr(licznik+1,i-licznik-1));
            licznik = i;
        }
    }
    sprawdz(wektor);
    statystyka(wektor);


return 0;
}
