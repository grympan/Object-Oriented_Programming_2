#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(double = 0.0);
	~Account();

	void setBalance(double = 0.0);
	double getBalance() const;

	void credit(int);
	void debit(int);

private:
	double Balance;
};

#endif