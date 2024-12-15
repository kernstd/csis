#pragma once
class Circle
{
public:
Circle(); // default constructor 
Circle(double initialRadius); // constructor with initial radius parameter
double getRadius() const; // accessor member functions (public)
double getDiameter() const;
double getArea() const;
void setRadius(double newRadius); // mutator member function (public)
private:
double radius; //data member (private) 
};

