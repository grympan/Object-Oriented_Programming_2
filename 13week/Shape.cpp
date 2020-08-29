#include "Shape.h"

ostream & operator<<(ostream &out, Shape &s)
{
	s.print();
	return out;
}

Shape::Shape(float x, float y)
{
	xCoordinate = x;
	yCoordinate = y;
}

Shape::Shape(double x, double y, double z)
{
	xCoordinate = x;
	yCoordinate = y;
	zCoordinate = z;
}

double Shape::getXCoor() const
{
	return xCoordinate;
}

double Shape::getYCoor() const
{
	return yCoordinate;
}

double Shape::getZCoor() const
{
	return zCoordinate;
}