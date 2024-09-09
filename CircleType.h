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

}