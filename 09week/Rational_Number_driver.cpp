#include <iostream>
using namespace std;

#include "Rational_Number.h"

int main()
{
	bool e;

	RationalNumber n1(1, 2);
	RationalNumber n2(1, 3);
	RationalNumber n3(1, 0);
	RationalNumber n4(0, 1);
	RationalNumber n5(6, -3);
	RationalNumber n6(-3, 9);
	RationalNumber n7(-2, -8);
	RationalNumber n8(1, 2);
	RationalNumber result;

	cout << "n1 : "; n1.printRational();
	cout << "n2 : "; n2.printRational();
	cout << "n3 : "; n3.printRational();
	cout << "n4 : "; n4.printRational();
	cout << "n5 : "; n5.printRational();
	cout << "n6 : "; n6.printRational();
	cout << "n7 : "; n7.printRational();
	cout << "n8 : "; n8.printRational();
	cout << endl;

	result = n1 + n2;
	cout << "n1 + n2 = "; result.printRational();

	result = n1 - n2;
	cout << "n1 - n2 = "; result.printRational();

	result = n1 * n2;
	cout << "n1 * n2 = "; result.printRational();

	result = n1 / n2;
	cout << "n1 / n2 = "; result.printRational();
	cout << endl;

	e = n1 > n2;
	if (e == true)
		cout << "n1 > n2 : true" << endl;
	else
		cout << "n1 > n2 : false" << endl;

	e = n1 < n2;
	if (e == true)
		cout << "n1 < n2 : true" << endl;
	else
		cout << "n1 < n2 : false" << endl;

	e = n1 >= n2;
	if (e == true)
		cout << "n1 >= n2 : true" << endl;
	else
		cout << "n1 >= n2 : false" << endl;

	e = n1 <= n2;
	if (e == true)
		cout << "n1 <= n2 : true" << endl;
	else
		cout << "n1 <= n2 : false" << endl;

	e = n1 == n2;
	if (e == true)
		cout << "n1 == n2 : true" << endl;
	else
		cout << "n1 == n2 : false" << endl;

	e = n1 == n8;
	if (e == true)
		cout << "n1 == n8 : true" << endl;
	else
		cout << "n1 == n2 : false" << endl;

	e = n1 != n2;
	if (e == true)
		cout << "n1 != n2 : true" << endl;
	else
		cout << "n1 != n2 : false" << endl;

	return 0;
}