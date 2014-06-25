#ifndef PUNKT3D_H
#define PUNKT3D_H
using namespace std;


class Punkt3D
{
    public:
        Punkt3D();
        ~Punkt3D();
        float x, y, z;
        Punkt3D operator++ (int);
        Punkt3D operator++ ();
        Punkt3D operator+ (int);
};

#endif // PUNKT3D_H
