#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex()
{
	realPart = imaginaryPart = 0;
}

void Complex::setComplex(double r, double i)
{
	realPart = r;
	imaginaryPart = i;
}

Complex Complex::add(const Complex &c)
{
	Complex add;
	add.realPart = realPart + c.realPart;
	add.imaginaryPart = imaginaryPart + c.imaginaryPart;
	return add;
}

Complex Complex::substract(const Complex &c)
{
	Complex substract;
	substract.realPart = realPart - c.realPart;
	substract.imaginaryPart = imaginaryPart - c.imaginaryPart;
	return substract;
}

void Complex::printComplex()
{
	cout << "(" << realPart << "," << imaginaryPart << ")";
}