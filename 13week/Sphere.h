#ifndef SPHERE_H
#define SPHERE_H

#include "ThreeDimensionalShape.h"

class Sphere :public ThreeDimensionalShape
{
public:
	Sphere(double = 0.0, double = 0.0, double = 0.0, double = 0.0);
	double getRadius() const;
	void print() const;

	virtual double getArea() const;
	virtual double getVolume() const;

private:
	double radius;
};

#endif