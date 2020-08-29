#include <iostream>
using namespace std;

#include "Employee.h"

Employee::Employee(string firstName, string lastName, int monthlySalary)
{
	setFirstName(firstName);
	setLastName(lastName);
	setMonthlySalary(monthlySalary);
}

void Employee::setFirstName(string fn)
{
	firstName = fn;
}

string Employee::getFirstName()
{
	return firstName;
}

void Employee::setLastName(string ln)
{
	lastName = ln;
}

string Employee::getLastName()
{
	return lastName;
}

void Employee::setMonthlySalary(int s)
{
	monthlySalary = (s >= 0) ? s : 0;
}

int Employee::getMonthlySalary()
{
	return monthlySalary;
}