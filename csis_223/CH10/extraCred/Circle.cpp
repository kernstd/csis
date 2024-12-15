#include "Circle.h"
Circle::Circle() // default constructor (no-argument constructor)
{
radius = 1.0;
}
Circle::Circle(double initialRadius) // constructor with initial radius parameter
{
radius = initialRadius;
}
double Circle::getRadius() const // accessor member functions (public)
{
return radius;
}
double Circle::getDiameter() const
{
return radius * 2.0;
}
double Circle::getArea() const
{
return radius * radius * 3.14159;
}
void Circle::setRadius(double newRadius) // mutator member function
{
radius = newRadius;
}

