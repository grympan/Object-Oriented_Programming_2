#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string &sN, const string &sA,
	const string &sC, const string &sS, int sZ,
	const string &rN, const string &rA, const string &rC,
	const string &rS, int rZ, double w, double c, double f)
	: Package(sN, sA, sC, sS, sZ, rN, rA, rC, rS, rZ, w, c)
{
	setOvernightFeePerOunce(f);
}

void OvernightPackage::setOvernightFeePerOunce(double overnightFee)
{
	overnightFeePerOunce = (overnightFee < 0.0) ? 0.0 : overnightFee;
}

double OvernightPackage::getOvernightFeePerOunce() const
{
	return overnightFeePerOunce;
}

double OvernightPackage::calculateCost() const
{
	return getWeight() * (getCostPerOunce() + getOvernightFeePerOunce());
}