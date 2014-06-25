#ifndef WYJATEK_H
#define WYJATEK_H
#include <iostream>
using namespace std;
class wyjatek
{
    public:
        wyjatek();
        wyjatek(int, string);
        ~wyjatek();
    private:
        int ernum;
        string eropis;
};

#endif // WYJATEK_H
