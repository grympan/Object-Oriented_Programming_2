#include <iostream>
using namespace std;

#include "Date.h"

int main()
{
	Date d1(256, 1999);
	Date d2(3, 25, 04);
	Date d3("September", 1, 2000);
	Date sD;

	d1.printMMDDYYYY();
	d2.printMMDDYYYY();
	d3.printMMDDYYYY();
	sD.printMMDDYYYY();
	cout << endl;

	d1.printDDDYYYY();
	d2.printDDDYYYY();
	d3.printDDDYYYY();
	sD.printDDDYYYY();
	cout << endl;

	d1.printMMDDYY();
	d2.printMMDDYY();
	d3.printMMDDYY();
	sD.printMMDDYY();
	cout << endl;

	d1.printMonthDDYYYY();
	d2.printMonthDDYYYY();
	d3.printMonthDDYYYY();
	sD.printMonthDDYYYY();

	return 0;
}