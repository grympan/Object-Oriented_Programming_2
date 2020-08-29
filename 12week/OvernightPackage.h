#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package
{
public:
	OvernightPackage(const string &, const string &, const string &, const string &,
		int, const string &, const string &, const string &, const string &,
		int, double, double, double);

	void setOvernightFeePerOunce(double);
	
	double getOvernightFeePerOunce() const;

	double calculateCost() const;

private:
	double overnightFeePerOunce;
};
#endif