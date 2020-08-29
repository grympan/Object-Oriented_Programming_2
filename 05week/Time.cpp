#include <iostream>
using namespace std;

#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h"

Time::Time()
{
	hour = minute = second = day = 0;
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	hour = (h >= 0 && h<24) ? h : 0;
}

void Time::setMinute(int m)
{
	minute = (m >= 0 && m<60) ? m : 0;
}

void Time::setSecond(int s)
{
	second = (s >= 0 && s<60) ? s : 0;
}

void Time::setDay(int d)
{
	day = d;
}

int Time::getHour() const
{
	return hour;
}

int Time::getMinute() const
{
	return minute;
}

int Time::getSecond() const
{
	return second;
}

int Time::getDay() const
{
	return day;
}

void Time::tick()
{
	for (int i = 0; i <= 100; i++)
	{
		if (second >= 60)
		{
			minute = minute + 1;
			second = second % 60;
		}

		if (minute >= 60)
		{
			hour = hour + 1;
			minute = minute % 60;
		}

		if (hour >= 24)
		{
			day = day + 1;
			hour = hour % 12;
		}

		cout << "D" << getDay() << " / "
			<< ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
			<< setfill('0') << setw(2) << getMinute() << ":" << setw(2)
			<< getSecond() << (hour < 12 ? " AM" : " PM") << endl;

		second = second + 1;
	}
}
