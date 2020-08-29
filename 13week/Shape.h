#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape 
{
	friend ostream &operator << (ostream &, Shape &);

public:
	Shape(float = 0.0, float = 0.0);
	Shape(double = 0.0, double = 0.0, double = 0.0);
	double getXCoor() const;
	double getYCoor() const;
	double getZCoor() const;

	virtual void print() const = 0;

protected:
	double xCoordinate;
	double yCoordinate;
	double zCoordinate;
};

#endif