#include <iostream>
using namespace std;

#include "Complex.h";

int main()
{
	Complex a, b, c;
	double r = 0;
	double i = 0;
	int menu = 0;

	for (;;)
	{
		cout << "\nEnter A's realPart : ";
		cin >> r;
		cout << "Enter A's imaginaryPart : ";
		cin >> i;
		a.setComplex(r, i);

		cout << "\nEnter B's realPart : ";
		cin >> r;
		cout << "Enter B's imaginaryPart : ";
		cin >> i;
		b.setComplex(r, i);

		cout << endl;

		c = a.add(b);
		a.printComplex(); cout << " + ";
		b.printComplex(); cout << " = ";
		c.printComplex(); cout << endl;

		c = a.substract(b);
		a.printComplex(); cout << " - ";
		b.printComplex(); cout << " = ";
		c.printComplex(); cout << endl;
	}
	return 0;
}