#ifndef CIRCLE_H
#define CIRCLE_H

#include "TwoDimensionalShape.h"

class Circle :public TwoDimensionalShape
{
public:
	Circle(double = 0.0, float = 0.0, float = 0.0);
	void print() const;

	virtual double getRadius() const;
	virtual double getArea() const;

private:
	double radius;
};

#endif