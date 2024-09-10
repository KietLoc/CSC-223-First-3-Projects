#pragma once
#include "PointType.h"

template <class T>
class CircleType
{
public:
  //Def static constant PI
  static const double PI;

  //Default Constr
  CircleType();
  //Constr w/ cordinates sent in
  CircleType(T,T,T,T);
  //Constr w/ points sent in
  CircleType(PointType<T>, PointType<T>);

  //Sets coordinates for the radius point
  void setCenterPoint(T,T);

  //Sets coordinates for the circumference point
  void setCircumPoint(T,T);

  //Returns value x and y coordinates of the center point
  PointType<T> getCenterPoint();

  //Returns value x and y coordinates of the circumference point
  PointType<T> getCircumPoint();

  //Disp the (x,y) of CenterPoint
  void printCenterPoint();

  //Disp the (x,y) of CircumPoint
  void printCircumPoint();

  //Returns rad of circle
  double calcRadius();

  //Returns area of circle
  double calcArea();

  //Retruns circumference of circle
  double calcCircumference();

  //Prints the radius, area, and circumference to disp
  void print();

private:
  PointType<T> centerPoint;
  PointType<T> circumPoint;
};

template <class T>
const double CircleType<T> :: PI = 3.14159;

template <class T>
CircleType<T>::CircleType() : centerPoint(), circumPoint() {}

template <class T>
CircleType<T>::CircleType(T xCenter, T yCenter, T xCircum, T yCircum): centerPoint(xCenter, yCenter), circumPoint(xCircum, yCircum) {}

template <class T>
CircleType<T>::CircleType(PointType<T> center, PointType<T> circum) : centerPoint(center), circumPoint(circum) {}

template <class T>
void CircleType<T>::setCenterPoint(T x, T y)
{
  centerPoint.setX(x);
  centerPoint.setY(y);
}

template <class T>
void CircleType<T>::setCircumPoint(T x, T y)
{
  circumPoint.setX(x);
  circumPoint.setY(y);
}

template <class T>
PointType<T> CircleType<T>::getCenterPoint()
{
  return centerPoint;
}

template <class T>
PointType<T> CircleType<T>::getCircumPoint()
{
  return circumPoint;
}

template <class T>
void CircleType<T>::printCenterPoint()
{
  centerPoint.print();
}

template <class T>
void CircleType<T>::printCircumPoint()
{
  circumPoint.print();
}

template <class T>
double CircleType<T>::calcRadius()
{
  double radius = centerPoint - circumPoint;
  return radius;
}

template <class T>
double CircleType<T>::calcCircumference()
{
  double circumference = 2 * PI * calcRadius();
  return circumference;
}

template <class T>
double CircleType<T>::calcArea()
{
  double area = 2 * PI * calcRadius() * calcRadius();
  return area;
}

template <class T>
void CircleType<T>::print()
{
  cout << "Radius: " << calcRadius() << endl;	
  cout << "Area: " << calcArea() << endl;
  cout << "Circumference: " << calcCircumference() << endl;
}