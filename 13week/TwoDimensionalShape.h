#ifndef TWODIMSHAPE_H
#define TWODIMSHAPE_H

#include "Shape.h"

class TwoDimensionalShape :public Shape
{
public:
	TwoDimensionalShape(float x, float y) : Shape(x, y){}

	virtual double getArea() const = 0;
};

#endif