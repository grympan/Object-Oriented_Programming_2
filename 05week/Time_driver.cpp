#include <iostream>
using namespace std;

#include "Time.h"

int main()
{
	Time a;
	a.setTime(23, 58, 55);
	a.setDay(1);
	a.tick();

	return 0;
}