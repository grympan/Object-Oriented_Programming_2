#ifndef CUBE_H
#define CUBE_H

#include "ThreeDimensionalShape.h"

class Cube :public ThreeDimensionalShape
{
public:
	Cube(double = 0.0, double = 0.0, double = 0.0, double = 0.0);
	double getlength() const;
	void print() const;

	virtual double getArea() const;
	virtual double getVolume() const;

private:
	double length;
};

#endif