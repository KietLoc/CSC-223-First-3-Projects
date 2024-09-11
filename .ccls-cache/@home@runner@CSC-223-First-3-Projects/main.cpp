#include <iostream>  
#include "CircleType.h"

using namespace std;

int main()
{
  
  cout << "Testing Default construtor" << endl;
  CircleType<int> Cir1;
  cout << "Center Point: ";
  Cir1.printCenterPoint();
  cout << "Circumference: ";
  Cir1.getCircumPoint();

  cout << "Testing Parameterized construtor" << endl;
  CircleType<double> Cir2(5.5,7.2,-6.4,3.3);
  cout << "Center Point: ";
  Cir2.printCenterPoint();
  cout << "Circumference: ";
  Cir2.printCircumPoint();

  cout << "Testing setCenterPoint, setCircumPoint" << endl;
  Cir1.setCenterPoint(3,7);
  Cir1.setCircumPoint(6,-2);
  cout << "Center Point: ";
  Cir1.printCenterPoint();
  cout << "Circumference Point: ";
  Cir1.printCircumPoint()

  cout << "Testing getCenterPoint, getCircumPoint" << endl;
  double x1, y1, x2, y2;
  //Cir2.getCenterPoint(x1,y1);
  //Cir2.getCircumPoint(x2,y2);
  cout << "x1 = " << x1 << " y1 = " << y1 << " x2 = " << x2 << " y2 = " << y2 << endl;
}