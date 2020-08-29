#ifndef SQUARE_H
#define SQUARE_H

#include "TwoDimensionalShape.h"

class Square :public TwoDimensionalShape
{
public:
	Square(double = 0.0, float = 0.0, float = 0.0);
	void print() const;

	virtual double getLength() const;
	virtual double getArea() const;

private:
	double length;
};

#endif