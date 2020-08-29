#include <iostream>
using namespace std;

#include "Sphere.h"

Sphere::Sphere(double r, double x, double y, double z)
	:ThreeDimensionalShape(x, y, z)
{
	radius = ((r > 0.0) ? r : 0.0);
}

double Sphere::getRadius() const
{
	return radius;
}

void Sphere::print() const
{
	cout << "\nSphere's radius : " << radius << endl;
	cout << "Coordinate : (" << xCoordinate << ", " << yCoordinate
		<< ", " << zCoordinate << ")";
}

double Sphere::getArea() const
{
	return 4 * 3.141592 * radius * radius;
}

double Sphere::getVolume() const
{
	return (4/3) * 3.141592 * radius * radius * radius;
}