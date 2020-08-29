#include <iostream>
using namespace std;

class Account
{
public:
	void setBalance(int iniDollar)
	{
		if (iniDollar < 0)
		{
			cout << "\nError: Initial balance cannot be negative.\n";
			Balance = 0;
		}

		else
			Balance = iniDollar;
	}

	int getBalance()
	{
		return Balance;
	}

	void credit(int dollar)
	{
		Balance += dollar;
	}

	void debit(int dollar)
	{
		if (dollar > Balance)
			cout << "\nDebit amount exceeded account balance.";

		else
			Balance -= dollar;
	}

private:
	int Balance;
};

void main()
{
	Account A1, A2;
	int Menu = 0;
	int A1_dollar = 0;
	int A2_dollar = 0;
	int iniA1 = 0;
	int iniA2 = 0;

	cout << "Please enter the initial balance for A1: ";
	cin >> iniA1;
	cout << "                             And for A2: ";
	cin >> iniA2;

	A1.setBalance(iniA1);
	A2.setBalance(iniA2);

	for (;;)
	{
		cout << "\n< Menu >";
		cout << "\n0. Quit";
		cout << "\n1. Deposit   - A1";
		cout << "\n2. Deposit   - A2";
		cout << "\n3. Withdraw  - A1";
		cout << "\n4. Withdraw  - A2";
		cout << "\nEnter the number: ";
		cin >> Menu;

		if (Menu == 0)
			break;

		else if (Menu == 1)
		{
			cout << "\nEnter deposit amount for account1: ";
			cin >> A1_dollar;
			A1.credit(A1_dollar);
		}

		else if (Menu == 2)
		{
			cout << "\nEnter deposit amount for account2: ";
			cin >> A2_dollar;
			A2.credit(A2_dollar);
		}

		else if (Menu == 3)
		{
			cout << "\nEnter withdrawal amount for account1: ";
			cin >> A1_dollar;
			A1.debit(A1_dollar);
		}

		else if (Menu == 4)
		{
			cout << "\nEnter withdrawal amount for account2: ";
			cin >> A2_dollar;
			A2.debit(A2_dollar);
		}

		else
		{
			cout << "\nPlease check the number.\n";
			continue;
		}

		cout << "\naccount1 balance: $" << A1.getBalance() << endl;
		cout << "account2 balance: $" << A2.getBalance() << endl;
	}
}