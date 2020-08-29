#include <iostream>
using namespace std;

#include "Account.h"

SavingsAccount::SavingsAccount(double ac)
{
	savingsBalance = (ac >= 0.0 ? ac : 0.0);
}

void SavingsAccount::calculateMonthlyInterest()
{
	savingsBalance += savingsBalance * annualInterestRate / 12;
}

void SavingsAccount::modifyInterestRate(double ir)
{
	annualInterestRate = ir >= 0.0 ? ir : 0.03;
}

double SavingsAccount::annualInterestRate = 0.0;

void SavingsAccount::printBalance() const
{
	cout << "Account : $" << savingsBalance;
}