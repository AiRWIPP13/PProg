#ifndef PUNKT_H
#define PUNKT_H
#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;


class punkt
{
    public:
        punkt();
        punkt(int num);
        ~punkt();
        string nazwa;
        const string typ = "xxx";
        void przedstaw();
        friend int oblicz(punkt arg);
    protected:
    private:
        int numer;
};

class punkt2d : public punkt
{
    public:
        int x;
        int y;
        punkt2d();
        punkt2d(int num);
        ~punkt2d();
        void przedstaw();
    private:
        int numer;
};

class punkt3d : public punkt2d
{
    public:
        int z;
        punkt3d();
        ~punkt3d();
        void przedstaw();

};
#endif // PUNKT_H
