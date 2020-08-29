#include <iostream>
using namespace std;

#include "Account.h"

int main()
{
	SavingsAccount saver1(2000.00);
	SavingsAccount saver2(3000.00);

	SavingsAccount::modifyInterestRate(0.03);

	cout << "Saver1's initial "; saver1.printBalance(); cout << endl;
	cout << "Saver2's initial "; saver2.printBalance(); cout << "\n\n";

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	cout << "Saver1's (I.R = 0.03) "; saver1.printBalance(); cout << endl;
	cout << "Saver2's (I.R = 0.03) "; saver2.printBalance(); cout << "\n\n";

	SavingsAccount::modifyInterestRate(0.04);

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	cout << "Saver1's (I.R = 0.04) "; saver1.printBalance(); cout << endl;
	cout << "Saver2's (I.R = 0.04) "; saver2.printBalance(); cout << endl;

	return 0;
}