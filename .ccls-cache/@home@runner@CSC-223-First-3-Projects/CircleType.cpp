// CircleType Class.cpp : This file contains the code and a separate test program for the CircleType class.

#include <iostream>
#include "CircleType.h"

int main()
{
    cout << "Test CircleType with integers" << endl;

    cout << "Default constructor (circle1): ";
    CircleType<int> circle1;
    cout << "   Center Point: ";
    circle1.printCenterPoint();
    cout << "   Circumference Point: ";
    circle1.printCircumPoint();
    cout << endl << endl;

    cout << "Constructor with coordinates (circle2): ";
    CircleType<int> circle2(5, 3, -4, 0);
    cout << "   Center Point: ";
    circle2.printCenterPoint();
    cout << "   Circumference Point: ";
    circle2.printCircumPoint();
    cout << endl << endl;

    cout << "Constructor with points (circle3): ";
    PointType<int> centerPoint(2, 0);
    PointType<int> circumPoint(0, -2);
    CircleType<int> circle3(centerPoint, circumPoint);
    cout << "   Center Point: ";
    circle3.printCenterPoint();
    cout << "   Circumference Point: ";
    circle3.printCircumPoint();
    cout << endl << endl;

    cout << "Test setCenterPoint, and setCircumPoint with circle1: ";
    circle1.setCenterPoint(5, 3);
    circle1.setCircumPoint(0, 3);
    cout << "   Center Point: ";
    circle1.printCenterPoint();
    cout << "   Circumference Point: ";
    circle1.printCircumPoint();
    cout << endl << endl;

    cout << "Test getCenterPoint and getCircumPoint with circle1: ";
    centerPoint = circle1.getCenterPoint();
    circumPoint = circle1.getCircumPoint();
    cout << "   Center Point: ";
    circle1.printCenterPoint();
    cout << "   Circumference Point: ";
    circle1.printCircumPoint();
    cout << endl << endl;

    cout << "Radius from circle1: " << circle1.calcRadius() << endl;
    cout << "Area from circle1 " << circle1.calcArea() << endl;
    cout << "Circumference from circle1: " << circle1.calcCircumference() << endl;
    cout << endl;

    cout << "Testing the print function for circle2: " << endl;
    circle2.print();
    cout << endl << endl;


    cout << endl << "Test CircleType with real numbers: " << endl;

    cout << "Default constructor (circle4): ";
    CircleType<double> circle4;
    cout << "   Center Point: ";
    circle4.printCenterPoint();
    cout << "   Circumference Point: ";
    circle4.printCircumPoint();
    cout << endl << endl;

    cout << "Constructor with coordinates (circle5): ";
    CircleType<double> circle5(5.1, 3.3, -4.6, 0);
    cout << "   Center Point: ";
    circle5.printCenterPoint();
    cout << "   Circumference Point: ";
    circle5.printCircumPoint();
    cout << endl << endl;

    cout << "Constructor with points (circle6): ";
    PointType<double> centerPoint2(2, 0);
    PointType<double> circumPoint2(0, -2);
    CircleType<double> circle6(centerPoint2, circumPoint2);
    cout << "   Center Point: ";
    circle6.printCenterPoint();
    cout << "   Circumference Point: ";
    circle6.printCircumPoint();
    cout << endl << endl;

    cout << "Test setCenterPoint, and setCircumPoint with circle4: ";
    circle4.setCenterPoint(5, 3);
    circle4.setCircumPoint(0, 3);
    cout << "   Center Point: ";
    circle4.printCenterPoint();
    cout << "   Circumference Point: ";
    circle4.printCircumPoint();
    cout << endl << endl;

    cout << "Test getCenterPoint and getCircumPoint with circle4: ";
    centerPoint2 = circle4.getCenterPoint();
    circumPoint2 = circle4.getCircumPoint();
    cout << "   Center Point: ";
    circle4.printCenterPoint();
    cout << "   Circumference Point: ";
    circle4.printCircumPoint();
    cout << endl << endl;

    cout << "Radius from circle4: " << circle4.calcRadius() << endl;
    cout << "Area from circle4 " << circle4.calcArea() << endl;
    cout << "Circumference from circle4: " << circle4.calcCircumference() << endl;
    cout << endl;

    cout << "Testing the print function for circle5: " << endl;
    circle5.print();
    cout << endl << endl;



    return 0;

}