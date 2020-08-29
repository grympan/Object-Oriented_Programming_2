#define _CRT_SECURE_NO_WARNINGS
#include "String.h"

String::String(const char * const tPtr)
{
	size = strlen(tPtr);
	ptr = new char[size + 1];
	strcpy(ptr, tPtr);
}

String::String(const String &stringToCopy)
	:size(stringToCopy.size)
{
	ptr = new char[size + 1];
	strcpy(ptr, stringToCopy.ptr);
}

const String &String::operator= (const String &right)
{
	if (&right != this)
	{
		delete[] ptr;
		size = right.size;
		ptr = new char[size + 1];
		strcpy(ptr, right.ptr);
	}

	return *this;
}

String String::operator+ (const String &right)
{
	String t;
	t.size = size + right.size;
	t.ptr = new char[t.size + 1];
	strcpy(t.ptr, ptr);
	strcat(t.ptr, right.ptr);

	return t;
}

ostream & operator<< (ostream &output, const String &s)
{
	output << s.ptr;

	return output;
}