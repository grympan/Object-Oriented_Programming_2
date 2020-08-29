#include <iostream>
using namespace std;

#include "Employee.h"

int main()
{
	string firstName1, lastName1, firstName2, lastName2;
	int monthlySalary1, monthlySalary2;

	cout << "Enter E1's first name : ";
	cin >> firstName1;
	cout << "Enter E1's last name : ";
	cin >> lastName1;
	cout << "Enter E1's monthly salary : ";
	cin >> monthlySalary1;

	cout << "\nEnter E2's first name : ";
	cin >> firstName2;
	cout << "Enter E2's last name : ";
	cin >> lastName2;
	cout << "Enter E2's monthly salary : ";
	cin >> monthlySalary2;

	Employee e1(firstName1, lastName1, monthlySalary1);
	Employee e2(firstName2, lastName2, monthlySalary2);

	cout << "\n=====================================================\n";

	cout << "\nEmployees' yearly salaries:\n"
		<< e1.getFirstName() << " " << e1.getLastName() << ": $"
		<< e1.getMonthlySalary() << endl;
	cout << e2.getFirstName() << " " << e2.getLastName() << ": $"
		<< e2.getMonthlySalary() << endl;

	cout << "\nEmployees' yearly salaries after 10% raise:\n"
		<< e1.getFirstName() << " " << e1.getLastName() << ": $"
		<< e1.getMonthlySalary() * 1.1 << endl;
	cout << e2.getFirstName() << " " << e2.getLastName() << ": $"
		<< e2.getMonthlySalary() * 1.1 << endl;
}