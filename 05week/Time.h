#ifndef TIME_H
#define TIME_H

class Time
{
public:
	Time();
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	void setDay(int);
	void tick();

	int getHour() const;
	int getMinute() const;
	int getSecond() const;
	int getDay() const;

private:
	int hour;
	int minute;
	int second;
	int day;
};

#endif