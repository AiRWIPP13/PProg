// klasy2.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.

#include "stdafx.hpp"
#include "klasy.hpp"

using namespace std;

int main()
{
	NazwaKlasy osoba1;
	NazwaKlasy osoba2;
	NazwaKlasy osoba3;

	cout << "Klasa osoba1" << endl;
	osoba1.MetodaDane();
	cout << "Klasa osoba2" << endl;
	osoba2.MetodaDane();

	osoba1.MetodaPrzedstaw();
	osoba2.MetodaPrzedstaw();

	getchar();
	return 0;
}

