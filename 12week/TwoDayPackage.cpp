#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string &sN, const string &sA,
	const string &sC, const string &sS, int sZ,
	const string &rN, const string &rA, const string &rC,
	const string &rS, int rZ, double w, double c, double f)
	: Package(sN, sA, sC, sS, sZ, rN, rA, rC, rS, rZ, w, c)
{
	setFlatFee(f);
}

void TwoDayPackage::setFlatFee(double f)
{
	flatFee = (f < 0.0) ? 0.0 : f;
}

double TwoDayPackage::getFlatFee() const
{
	return flatFee;
}

double TwoDayPackage::calculateCost() const
{
	return Package::calculateCost() + getFlatFee();
}