#include <iostream>
using namespace std;

class Circle
{
public :
	Circle(int r)
	{
		radius = r;
	}

	void print_radius()
	{
		cout << "radius : " << radius << endl;
	}

	void operator+(int value)
	{
		radius = radius + value;
	}

private :
	int radius;
};

int main()
{
	Circle c(3);
	c.print_radius();

	c.operator+(3);
	c.print_radius();
	
	c + 3;
	c.print_radius();

	return 0;
}