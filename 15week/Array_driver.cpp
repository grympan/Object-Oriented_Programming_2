#include <iostream>
using namespace std;

#include "Array.h"

int main()
{
	int a1[9] = { 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	printArray(a1, 9);
	sortArray(a1, 9);
	printArray(a1, 9);

	double a2[7] = { 5.2, 36.5, 3.4, 12.8, 1.9, 6.8, 24.3 };

	printArray(a2, 7);
	sortArray(a2, 7);
	printArray(a2, 7);
	
	char a3[9] = { 'I', 'n', 'h', 'a', 'U', 'n', 'i', 'v', '.' };
	
	printArray(a3, 9);
	sortArray(a3, 9);
	printArray(a3, 9);

	return 0;
}