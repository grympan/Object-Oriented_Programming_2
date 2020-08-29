#include <iostream>
using namespace std;

#include "Account.h"

Account::Account(double b1)
{
	setBalance(b1);
}

Account::~Account()
{

}

void Account::setBalance(double b2)
{
	Balance = b2;
}

double Account::getBalance() const
{
	return Balance;
}

void Account::credit(int c)
{
	if (c > 0)
		Balance += c;

	else
		cout << "\nWrong value : must be over 0.";
}

void Account::debit(int d)
{
	if (d <= Balance)
		Balance -= d;

	else
		cout << "\nNot enough money : the value is more than balance.";
}