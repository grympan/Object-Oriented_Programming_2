#ifndef ACCOUNT_H
#define ACCOUNT_H

class SavingsAccount
{
public:
	SavingsAccount(double);
	void calculateMonthlyInterest();
	static void modifyInterestRate(double);
	void printBalance() const;

private:
	double savingsBalance;
	static double annualInterestRate;
};

#endif