#include <iostream>
using namespace std;

#include "Cube.h"

Cube::Cube(double l, double x, double y, double z)
	: ThreeDimensionalShape(x, y, z)
{
	length = ((l > 0.0) ? l : 0.0);
}

double Cube::getlength() const
{
	return length;
}

void Cube::print() const
{
	cout << "\nCube's length : " << length << endl;
	cout << "Coordinate : (" << xCoordinate << ", " << yCoordinate
		<< ", " << zCoordinate << ")";
}

double Cube::getArea() const
{
	return 6 * length * length;
}

double Cube::getVolume() const
{
	return length * length * length;
}