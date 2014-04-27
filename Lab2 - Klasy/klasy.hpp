#include "stdafx.hpp"

using namespace std;

class NazwaKlasy
{
private:
	string imie;
	string nazwisko;
	string nr_telefonu;
	int wiek;
	float wzrost;
	char plec;
public:
	void MetodaDane();
	void MetodaPrzedstaw();
};

void NazwaKlasy::MetodaDane()
{
	cout << endl << "Podaj imie: ";
	cin >> imie;
	getchar();

	cout << endl << "Podaj nazwisko: ";
	cin >> nazwisko;
	getchar();

	cout << endl << "Podaj nr telefonu: ";
	cin >> nr_telefonu;
	getchar();

	cout << endl << "Podaj wiek: ";
	cin >> wiek;
	getchar();

	cout << endl << "Podaj wzrost: ";
	cin >> wzrost;
	getchar();

	cout << endl << "Podaj plec: ";
	cin >> plec;
	getchar();
};

void NazwaKlasy::MetodaPrzedstaw()
{
	cout << endl;
	cout << "Witaj" << endl;
	cout << "Nazywam sie " << imie << " " << nazwisko << endl;
	cout << "Mam " << wiek << " lat." << endl << "Moj nr telefonu to " << nr_telefonu << endl;
	cout << "Pozostale dane: " << endl << "Wzrost: " << wzrost << "\nPlec: " << plec << endl;
};


