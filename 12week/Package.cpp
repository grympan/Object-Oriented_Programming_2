#include "Package.h"

Package::Package(const string &sN, const string &sA,
	const string &sC, const string &sS, int sZ,
	const string &rN, const string &rA, const string &rC,
	const string &rS, int rZ, double w, double c)
{
	setSenderName(sN); setSenderAddress(sA); setSenderCity(sC);
	setSenderState(sS); setSenderZIPCode(sZ);
	setRecipientName(rN); setRecipientAddress(rA); setRecipientCity(rC);
	setRecipientState(rS); setRecipientZIPCode(rZ);
	setWeight(w); setCostPerOunce(c);
}

void Package::setSenderName(const string &n1)
{
	senderName = n1;
}
void Package::setSenderAddress(const string &a1)
{
	senderAddress = a1;
}
void Package::setSenderCity(const string &c1)
{
	senderCity = c1;
}
void Package::setSenderState(const string &s1)
{
	senderState = s1;
}
void Package::setSenderZIPCode(int z1)
{
	senderZIPCode = z1;
}

string Package::getSenderName() const
{
	return senderName;
}
string Package::getSenderAddress() const
{
	return senderAddress;
}
string Package::getSenderCity() const
{
	return senderCity;
}
string Package::getSenderState() const
{
	return senderState;
}
int Package::getSenderZIPCode() const
{
	return senderZIPCode;
}

void Package::setRecipientName(const string &n2)
{
	recipientName = n2;
}
void Package::setRecipientAddress(const string &a2)
{
	recipientAddress = a2;
}
void Package::setRecipientCity(const string &c2)
{
	recipientCity = c2;
}
void Package::setRecipientState(const string &s2)
{
	recipientState = s2;
}
void Package::setRecipientZIPCode(int z2)
{
	recipientZIPCode = z2;
}

string Package::getRecipientName() const
{
	return recipientName;
}
string Package::getRecipientAddress() const
{
	return recipientAddress;
}
string Package::getRecipientCity() const
{
	return recipientCity;
}
string Package::getRecipientState() const
{
	return recipientState;
}
int Package::getRecipientZIPCode() const
{
	return recipientZIPCode;
}

void Package::setWeight(double w)
{
	weight = (w <= 0.0) ? 0.0 : w;
}
void Package::setCostPerOunce(double c)
{
	costPerOunce = (c <= 0.0) ? 0.0 : c;
}

double Package::getWeight() const
{
	return weight;
}
double Package::getCostPerOunce() const
{
	return costPerOunce;
}

double Package::calculateCost() const
{
	return getWeight() * getCostPerOunce();
}