#include <iostream>
using namespace std;

#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"

int main()
{
	Account a1(1000);
	cout << "a1 balance : " << a1.getBalance();
	
	a1.credit(500);
	cout << "\na1 balance after credit 500 : " << a1.getBalance();

	a1.debit(300);
	cout << "\na1 balance after debit 300 : " << a1.getBalance();

	SavingAccount a2(2000, 0.2);
	cout << "\n\na2 balance : " << a2.getBalance();
	cout << "\na2 interest rate : " << a2.getInterest();
	cout << "\na2 interest : " << a2.CalculateInterest();

	CheckingAccount a3(3000, 100);
	cout << "\n\na3 balance : " << a3.getBalance();
	cout << "\nTransaction fee : " << a3.getTranFee();

	a3.creditTranFee(500);
	cout << "\na3 balance after credit 500 : " << a3.getBalance();

	a3.debitTranFee(300);
	cout << "\na3 balance after debit 300 : " << a3.getBalance() << endl;

	return 0;
}