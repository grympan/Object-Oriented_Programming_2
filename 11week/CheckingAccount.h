#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCONUT_H

#include "Account.h"

class CheckingAccount : public Account
{
public:
	CheckingAccount(double, double);
	~CheckingAccount();

	void setTranFee(double);
	double getTranFee() const;

	void creditTranFee(double);
	void debitTranFee(double);

private:
	double TransactionFee;
};

#endif