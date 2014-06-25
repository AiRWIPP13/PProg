#include "stos.h"
using namespace std;
stos::stos()
{
    cout<<"Konstruktor stos \n";
    tab = new int[10];
}

stos::~stos()
{
    delete tab;
}

void stos::push(int x)
{
    if(numobj>=10)
    {
        wyjatek* wsk = new wyjatek(1, "Stos przepelniony");
        throw wsk;
    }
    for (int i=0; i<10;i++)
    {
        tab[i+1]=tab[i];
    }
    tab[0]=x;
    numobj++;
}

int stos::pop()
{
    if (numobj==0)
    {
        wyjatek* wsk = new wyjatek(0, "Brak elementow w stosie");
        throw wsk;
    }
    int head = tab[0];
    for (int i=0; i<numobj; i++)
    {
        tab[i] = tab[i+1];
    }
    numobj--;
    return head;
}
