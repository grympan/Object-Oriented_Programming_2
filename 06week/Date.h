#ifndef DATE_H
#define DATE_H

#include <string>
using std::string;

class Date
{
public:
	Date();
	Date(int, int);
	Date(int, int, int);
	Date(string, int, int);

	void setMonth(int);
	void setDay(int);

	void printMMDDYYYY() const;
	void printDDDYYYY() const;
	void printMMDDYY() const;
	void printMonthDDYYYY() const;
	~Date();

private:
	int month;
	int day;
	int year;

	static int daysPerMonth[];
	static const string monthList[];

	int checkDay(int) const;
	int checkLeapYear() const;

	void setMMDDfromDDD(int);
	void setYYYYfromYY(int);
	void setMMfromMonth(string);

	int showYYbyYYYY() const;
	int showDDDbyMMDD() const;
	string showMonthbyMM() const;
};

#endif