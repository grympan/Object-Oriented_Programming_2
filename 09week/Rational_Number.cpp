#include <iostream>
using namespace std;

#include "Rational_Number.h"


RationalNumber::RationalNumber(int n, int d)
{
	numerator = n;

	if (d > 0)
		denominator = d;

	else if (d == 0)
	{
		denominator = 1;
	}

	else
	{
		numerator *= (-1);
		denominator = d * (-1);
	}

	reduction();
}

RationalNumber RationalNumber::operator+(const RationalNumber &r2)
{
	RationalNumber r3;
	r3.numerator = (this->numerator * r2.denominator) + (r2.numerator * this->denominator);
	r3.denominator = this->denominator * r2.denominator;
	r3.reduction();
	return r3;
}

RationalNumber RationalNumber::operator-(const RationalNumber &r2)
{
	RationalNumber r3;
	r3.numerator = (this->numerator * r2.denominator) - (r2.numerator * this->denominator);
	r3.denominator = this->denominator * r2.denominator;
	r3.reduction();
	return r3;
}

RationalNumber RationalNumber::operator*(const RationalNumber &r2)
{
	RationalNumber r3;
	r3.numerator = this->numerator * r2.numerator;
	r3.denominator = this->denominator * r2.denominator;
	r3.reduction();
	return r3;
}

RationalNumber RationalNumber::operator/(const RationalNumber &r2)
{
	RationalNumber r3;
	r3.numerator = this->numerator * r2.denominator;
	r3.denominator = this->denominator * r2.numerator;
	r3.reduction();
	return r3;
}

bool RationalNumber::operator<(const RationalNumber &r2) const
{
	int rn1 = this->numerator * r2.denominator;
	int rn2 = r2.numerator * this->denominator;

	if (rn1 < rn2)
		return true;

	else
		return false;
}

bool RationalNumber::operator>(const RationalNumber &r2) const
{
	int rn1 = this->numerator * r2.denominator;
	int rn2 = r2.numerator * this->denominator;

	if (rn1 > rn2)
		return true;
	else
		return false;
}

bool RationalNumber::operator<=(const RationalNumber &r2) const
{
	int rn1 = this->numerator * r2.denominator;
	int rn2 = r2.numerator * this->denominator;

	if (rn1 <= rn2)
		return true;
	else
		return false;
}

bool RationalNumber::operator>=(const RationalNumber &r2) const
{
	int rn1 = this->numerator * r2.denominator;
	int rn2 = r2.numerator * this->denominator;

	if (rn1 >= rn2)
		return true;
	else
		return false;
}

bool RationalNumber::operator==(const RationalNumber &r2) const
{
	int rn1 = this->numerator * r2.denominator;
	int rn2 = r2.numerator * this->denominator;

	if (rn1 == rn2)
		return true;
	else
		return false;
}

bool RationalNumber::operator!=(const RationalNumber &r2) const
{
	int rn1 = this->numerator * r2.denominator;
	int rn2 = r2.numerator * this->denominator;

	if (rn1 != rn2)
		return true;
	else
		return false;
}

void RationalNumber::printRational() const
{
	cout << numerator << "/" << denominator << endl;
}

void RationalNumber::reduction()
{
	bool negativeNumerator = false;
	int GreatestCommonDivisor = 0;
	int d = 2;
	int smallNumber;

	if (numerator < 0)
	{
		negativeNumerator = true;
		numerator *= -1;
	}
	
	smallNumber = (numerator  < denominator) ? numerator : denominator;

	while(d <= smallNumber)
	{
		if (numerator % d == 0 && denominator % d == 0)
			GreatestCommonDivisor = d;

		++d;
	}

	if (GreatestCommonDivisor != 0)
	{
		numerator = numerator / GreatestCommonDivisor;
		denominator = denominator / GreatestCommonDivisor;
	}

	if (negativeNumerator == true)
		numerator *= -1;
}