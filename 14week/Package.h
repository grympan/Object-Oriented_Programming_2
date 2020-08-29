#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package
{
public:
	Package(const string &, const string &, const string &, const string &,
		int, const string &, const string &, const string &, const string &,
		int, double, double);

	void setSenderName(const string &);
	void setSenderAddress(const string &);
	void setSenderCity(const string &);
	void setSenderState(const string &);
	void setSenderZIPCode(int);

	string getSenderName() const;
	string getSenderAddress() const;
	string getSenderCity() const;
	string getSenderState() const;
	int getSenderZIPCode() const;

	void setRecipientName(const string &);
	void setRecipientAddress(const string &);
	void setRecipientCity(const string &);
	void setRecipientState(const string &);
	void setRecipientZIPCode(int);

	string getRecipientName() const;
	string getRecipientAddress() const;
	string getRecipientCity() const;
	string getRecipientState() const;
	int getRecipientZIPCode() const;

	void setWeight(double);
	void setCostPerOunce(double);

	double getWeight() const;
	double getCostPerOunce() const;

	virtual double calculateCost();

private:
	string senderName;
	string senderAddress;
	string senderCity;
	string senderState;
	int senderZIPCode;
	string recipientName;
	string recipientAddress;
	string recipientCity;
	string recipientState;
	int recipientZIPCode;

	double weight;
	double costPerOunce;
};
#endif