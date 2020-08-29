#include <iostream>
#include <vector>
using namespace std;

#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "Circle.h"
#include "Square.h"
#include "ThreeDimensionalShape.h"
#include "Sphere.h"
#include "Cube.h"

int main()
{
	vector <Shape *> s(4);

	s[0] = new Circle(1, 2, 3);
	s[1] = new Square(4, 5, 6);
	s[2] = new Sphere(7, 8, 9, 10);
	s[3] = new Cube(11, 12, 13, 14);

	for (int i = 0; i < 4; i++)
	{
		cout << *s[i] << endl;

		TwoDimensionalShape *twoDimensionalShapePtr
			= dynamic_cast <TwoDimensionalShape *> (s[i]);

		if (twoDimensionalShapePtr != 0)
			cout << "Area : " << twoDimensionalShapePtr -> getArea() << endl;

		ThreeDimensionalShape *threeDimensionalShapePtr
			= dynamic_cast <ThreeDimensionalShape *> (s[i]);

		if (threeDimensionalShapePtr != 0)
		{
			cout << "Area : " << threeDimensionalShapePtr -> getArea() << endl;
			cout << "Volume : " << threeDimensionalShapePtr -> getVolume() << endl;
		}
	}
}