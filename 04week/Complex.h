#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	Complex();
	void setComplex(double, double);
	Complex add(const Complex &);
	Complex substract(const Complex &);
	void printComplex();

private:
	double realPart;
	double imaginaryPart;
};

#endif