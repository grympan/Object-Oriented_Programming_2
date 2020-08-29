#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include "Account.h"

class SavingAccount :public Account
{
public:
	SavingAccount(double, double);
	~SavingAccount();

	void setInterest(double);
	double getInterest() const;

	double CalculateInterest();

private:
	double interest;
};

#endif