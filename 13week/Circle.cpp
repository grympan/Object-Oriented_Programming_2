#include <iostream>
using namespace std;

#include "Circle.h"

Circle::Circle(double r, float x, float y)
	:TwoDimensionalShape(x, y)
{
	radius = ((r > 0.0) ? r : 0.0);
}

void Circle::print() const
{
	cout << "\nCircle's radius : " << radius << endl;
	cout << "Coordinate : (" << xCoordinate << ", " << yCoordinate << ")";
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	return 3.141592 * radius * radius;
}