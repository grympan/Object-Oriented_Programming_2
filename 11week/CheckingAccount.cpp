#include <iostream>
using namespace std;

#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double b, double tf1)
	:Account(b)
{
	setTranFee(tf1);
}

CheckingAccount::~CheckingAccount()
{

}

void CheckingAccount::setTranFee(double tf2)
{
	TransactionFee = tf2;
}

double CheckingAccount::getTranFee() const
{
	return TransactionFee;
}

void CheckingAccount::creditTranFee(double c)
{
	if (getBalance() + c >= TransactionFee)
		setBalance(getBalance() + c - TransactionFee);

	else
		cout << "\nError : transactionFee is more than balance.";
}

void CheckingAccount::debitTranFee(double d)
{
	if (getBalance() - d >= TransactionFee)
		setBalance(getBalance() - d - TransactionFee);

	else
		cout << "\nError : transactionFee is more than balance.";
}