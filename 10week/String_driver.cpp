#include "String.h"

int main()
{
	String s1;
	String s2("happy ");
	String s3("birth day ");
	String s4("to you ");

	cout << "s1 = " << s1;
	cout << "\ns2 = " << s2;
	cout << "\ns3 = " << s3;
	cout << "\ns4 = " << s4;

	s1 = s2 + s3;
	cout << "\n\nDone : s1 = s2 + s3";
	cout << "\n\ns1 = " << s1;

	s1 = s2 + s3 + s4;
	cout << "\n\nDone : s1 = s2 + s3 + s4";
	cout << "\n\ns1 = " << s1 << endl;

	return 0;
}