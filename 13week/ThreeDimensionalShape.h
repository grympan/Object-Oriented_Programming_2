#ifndef THREEDIMSHAPE_H
#define THREEDIMSHAPE_H

#include "Shape.h"

class ThreeDimensionalShape :public Shape
{
public:
	ThreeDimensionalShape(double x, double y, double z) : Shape(x, y, z) {}

	virtual double getArea() const = 0;
	virtual double getVolume() const = 0;
};

#endif