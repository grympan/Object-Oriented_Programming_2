#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

#include "Date.h"

Date::Date()
{
	struct tm *sysDate;
	time_t timer = time(NULL);
	sysDate = localtime(&timer);

	day = sysDate->tm_mday;
	month = sysDate->tm_mon + 1;
	year = sysDate->tm_year + 1900;
}

Date::Date(int ddd, int yyyy)
{
	year = yyyy;
	setMMDDfromDDD(ddd);
	setMonth(month);
	setDay(day);
}

Date::Date(int mm, int dd, int yy)
{
	setYYYYfromYY(yy);
	setMonth(mm);
	setDay(dd);
}

Date::Date(string monthName, int dd, int yyyy)
{
	year = yyyy;
	setMMfromMonth(monthName);
	setMonth(month);
	setDay(dd);
}

void Date::setMonth(int m)
{
	if (m > 0 && m <= 12)
		month = m;
	else
	{
		month = 1;
		cout << "Invalid month (" << m << ") set to 1.\n";
	}
}

void Date::setDay(int d)
{
	day = checkDay(d);
}

void Date::printMMDDYYYY() const
{
	cout << month << '/' << day << '/' << year << endl;
}

void Date::printDDDYYYY() const
{
	cout << showDDDbyMMDD() << ' ' << year << endl;
}

void Date::printMMDDYY() const
{
	cout << setw(2) << setfill('0') << month << '/'
		<< setw(2) << setfill('0') << day << '/'
		<< setw(2) << setfill('0') << showYYbyYYYY() << endl;
}

void Date::printMonthDDYYYY() const
{
	cout << showMonthbyMM() << ' ' << day << ", " << year
		<< endl;
}

Date::~Date()
{
}

int Date::daysPerMonth[13]
= { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

const string Date::monthList[13]
= { "", "January", "February",  "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December" };

int Date::checkDay(int testDay) const
{
	if (testDay > 0 && testDay <= daysPerMonth[month])
		return testDay;

	else if (month == 2 && testDay == 29 && checkLeapYear() == 1)
		return testDay;

	else
	{
		cout << "Invalid day (" << testDay << ") set to 1.\n";
		return 1;
	}
}

int Date::checkLeapYear() const
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return true;

	else
		return false;
}

void Date::setMMDDfromDDD(int ddd)
{
	if (checkLeapYear() == 1)
	{
		daysPerMonth[2] = 29;
	}

	int m = 1;
	int monthDaysSum = 0;

	for (m = 1; m <= 12 && (monthDaysSum + daysPerMonth[m]) < ddd; m++)
	{
		monthDaysSum += daysPerMonth[m];
	}

	month = m;
	day = ddd - monthDaysSum;

	daysPerMonth[2] = 28;
}

void Date::setYYYYfromYY(int yy)
{
	year = (yy < 20 ? yy + 2000 : yy + 1900);
}

void Date::setMMfromMonth(string monthName)
{
	for (int i = 1; i <= 12; i++)
	{
		if (monthName == monthList[i])
		{
			month = i;
			break;
		}

		else
			continue;
	}
}

int Date::showYYbyYYYY() const
{
	return (year >= 2000 ? year - 2000 : year - 1900);
}

int Date::showDDDbyMMDD() const
{
	int ddd = 0;

	if (checkLeapYear() == 1)
	{
		daysPerMonth[2] = 29;
	}

	for (int i = 1; i < month; i++)
		ddd += daysPerMonth[i];

	ddd += day;

	daysPerMonth[2] = 28;

	return ddd;
}

string Date::showMonthbyMM() const
{
	return monthList[month];
}