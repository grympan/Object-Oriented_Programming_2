#include <iostream>
#include <cstring>
using namespace std;

#include "Employee.h"

int Employee::count = 0;

int Employee::getCount()
{
	return count;
}

Employee::Employee(const char * const first, const char * const last)
{
	firstName = new char[strlen(first) + 1];
	strcpy(firstName, first);

	lastName = new char[strlen(last) + 1];
	strcpy(lastName, last);

	count++;

	cout << "Employee constructor for " << firstName
		<< ' ' << lastName << " called." << endl;
}

Employee::~Employee()
{
	cout << "~Employee() called for " << firstName
		<< ' ' << lastName << endl;

	delete [] firstName;
	delete [] lastName;

	count--;
}

const char *Employee::getFirstName() const
{
	return firstName;
}

const char *Employee::getLastName() const
{
	return lastName;
}