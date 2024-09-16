#include <iostream>
#include "CylinderType.h"

using namespace std;

int main()
{
    cout << "Test CylinderType with integers" << endl;

    cout << "Default constructor (cylinder1): " << endl;
    CylinderType<int> cylinder1;
    cout << "   Center Point: ";
    cylinder1.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder1.printCircumPoint();
    cout << "   Height: " << cylinder1.getHeight();
    cout << endl << endl;

    cout << "Constructor with coordinates (cylinder2): " << endl;
    CylinderType<int> cylinder2(5, 3, -4, 0, 8);
    cout << "   Center Point: ";
    cylinder2.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder2.printCircumPoint();
    cout << "    Height: " << cylinder2.getHeight();
    cout << endl << endl;

    cout << "Constructor with points (cylinder3): " << endl;
    PointType<int> centerPoint(2, 0);
    PointType<int> circumPoint(0, -2);
    int height = 6;
    CylinderType<int> cylinder3(centerPoint, circumPoint, height);
    cout << "   Center Point: ";
    cylinder3.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder3.printCircumPoint();
    cout << "   Height: " << cylinder3.getHeight();
    cout << endl << endl;

    cout << "Test setCenterPoint, setCircumPoint, and setHeight with cylinder1: " << endl;
    cylinder1.setCenterPoint(5, 3);
    cylinder1.setCircumPoint(0, 3);
    cylinder1.setHeight(4);

    cout << "   Center Point: ";
    cylinder1.printCenterPoint();
    cout << "   Circumference Point: ";
    cylinder2.printCircumPoint();
    cout << "   Height: " << cylinder2.getHeight();
    cout << endl << endl;

    return 0;

}