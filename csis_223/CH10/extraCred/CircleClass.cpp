#include <iostream>
#include "Circle.h" 
using namespace std;
int main()
{
Circle circle01; // declare Circle class object (default constructor)
Circle circle02(5.7); // declare Circle class object with initial radius
cout << endl;
cout << "circle01 - Radius: " << circle01.getRadius() << endl;
cout << "circle02 - Radius: " << circle02.getRadius() << endl;
cout << "circle01 - Diameter: " << circle01.getDiameter() << endl;
cout << "circle02 - Diameter: " << circle02.getDiameter() << endl;
cout << "circle01 - Area: " << circle01.getArea() << endl;
cout << "circle02 - Area: " << circle02.getArea() << endl;

return 0;
}