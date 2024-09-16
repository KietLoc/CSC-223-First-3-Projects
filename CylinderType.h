#pragma once
#include "CircleType.h"
template<class T>
class CylinderType : public CircleType<T>
{
public:
    //Default constructor
    CylinderType();
    //Constructor with coordinates sent in
    CylinderType(T, T, T, T, T);
    //Constructore with points sent in
    CylinderType(PointType<T>, PointType<T>, T);

    // Sets the height value
    void setHeight(T);
    // returns the height value
    T getHeight();

    // Returns the surface area of the cylinder
    double calcSurfaceArea();

    // Returns the volume of the cylinder
    double calcVolume();

    // prints the cylinder's properties including the radius, area, and circumference of the base
    // and the surface area and volume of the cylinder
    void print();

private:
    T height;
};

template <class T>
CylinderType<T>::CylinderType() : CircleType<T>(), height(0) { }

template <class T>
CylinderType<T>::CylinderType(T xCenter, T yCenter, T xBase, T yBase, T h) : CircleType<T>(xCenter, yCenter, xBase, yBase), height(h) { }

template <class T>
CylinderType<T>::CylinderType(PointType<T> center, PointType<T> base, T h) : CircleType<T>(center, base), height(h) { }

template <class T>
void CylinderType<T>::setHeight(T h)
{
    height = h;
}

template <class T>
T CylinderType<T>::getHeight()
{
    return height;
}

template <class T>
double CylinderType<T>::calcSurfaceArea()
{
    double s = this->calcCircumference() * height + 2 * this->calcArea();
    return s;
}

template <class T>
double CylinderType<T>::calcVolume()
{
    double v = height * this->calcArea();
    return v;
}

template <class T>
void CylinderType<T>::print()
{
    CircleType<T>::print();
    cout << "Surface Area: " << calcSurfaceArea() << endl;
    cout << "Volume: " << calcVolume() << endl;
}