#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H

class RationalNumber
{
public:
	RationalNumber(int = 0, int = 1);
	RationalNumber operator+(const RationalNumber&);
	RationalNumber operator-(const RationalNumber&);
	RationalNumber operator*(const RationalNumber&);
	RationalNumber operator/(const RationalNumber&);

	bool operator>(const RationalNumber&) const;
	bool operator<(const RationalNumber&) const;
	bool operator>=(const RationalNumber&) const;
	bool operator<=(const RationalNumber&) const;

	bool operator==(const RationalNumber&) const;
	bool operator!=(const RationalNumber&) const;
	void printRational() const;

private:
	int numerator;
	int denominator;
	void reduction();
};

#endif