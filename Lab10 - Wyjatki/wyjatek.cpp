#include "wyjatek.h"
using namespace std;
wyjatek::wyjatek()
{
    //ctor
}

wyjatek::~wyjatek()
{
    cout<<"Dekonstruktor wyjatek \n";
}

wyjatek::wyjatek(int er, string err)
{
    ernum = er;
    eropis = err;
    cout<< "Konstruktor wyjatek \n";
}
