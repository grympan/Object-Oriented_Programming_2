#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

template < typename T >

void sortArray(T *array, int size)
{
	array[size] = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (array[i] > array[j])
			{
				array[size] = array[i];
				array[i] = array[j];
				array[j] = array[size];
			}
		}
	}
}

template < typename Y >

void printArray(Y *array, int count)
{
	cout << "Data items in (original/ascending) order\n";
	cout << "> ";

	for (int i = 0; i < count; i++)
		cout << array[i] << " ";

	cout << endl;
}
#endif