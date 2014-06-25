#ifndef STOS_H
#define STOS_H
#include <iostream>
#include "wyjatek.cpp"
using namespace std;

class stos
{
    public:
        stos();
        ~stos();
        void push(int);
        int pop();
    private:
       int *tab;
       int numobj;
};

#endif // STOS_H
