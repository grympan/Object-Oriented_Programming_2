#include <iostream>
using namespace std;

#include "Account.h"
#include "SavingAccount.h"

SavingAccount::SavingAccount(double b, double i1)
	:Account(b)
{
	setInterest(i1);
}

SavingAccount::~SavingAccount()
{

}

void SavingAccount::setInterest(double i2)
{
	interest = i2;
}

double SavingAccount::getInterest() const
{
	return interest;
}

double SavingAccount::CalculateInterest()
{
	if (interest > 0)
		return getBalance() * interest;

	else
	{
		cout << "\nWrong value : must be over 0";
		return 1;
	}
}