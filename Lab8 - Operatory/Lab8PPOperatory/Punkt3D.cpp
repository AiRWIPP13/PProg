#include "Punkt3D.h"

Punkt3D::Punkt3D()
{
    //ctor
}

Punkt3D::~Punkt3D()
{
    //dtor
}

Punkt3D Punkt3D::operator++ (int)
{
    Punkt3D Przed = *this;
    x++; y++; z++;
    return Przed;
}

Punkt3D Punkt3D::operator++ ()
{
    x++; y++; z++;
    return *this;
}

Punkt3D Punkt3D::operator+ (int arg)
{
    x+=arg;
    y+=arg;
    z+=arg;

}
