#ifndef STRING_H
#define STRING_H

#include <iostream>
#include <string>
using namespace std;

class String
{
	friend ostream &operator<< (ostream &, const String &);

public:
	String(const char* const = "(blank)");
	String(const String &);
	const String &operator= (const String &);
	String operator+ (const String &);

private:
	char *ptr;
	int size;
};

#endif