#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
public:
	Employee(string, string, int);
	void setFirstName(string);
	string getFirstName();
	void setLastName(string);
	string getLastName();
	void setMonthlySalary(int);
	int getMonthlySalary();

private:
	string firstName, lastName;
	int monthlySalary;
};

#endif