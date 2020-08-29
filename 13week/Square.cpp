#include <iostream>
using namespace std;

#include "Square.h"

Square::Square(double l, float x, float y)
	:TwoDimensionalShape(x, y)
{
	length = ((l > 0.0) ? l : 0.0);
}

void Square::print() const
{
	cout << "\nSquare's length : " << length << endl;
	cout << "Coordinate : (" << xCoordinate << ", " << yCoordinate << ")";
}

double Square::getLength() const
{
	return length;
}

double Square::getArea() const
{
	return length * length;
}