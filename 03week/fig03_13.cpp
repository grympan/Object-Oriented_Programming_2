#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main()
{
	GradeBook gradeBook1("cs101 Introduction to C++ Programming");
	GradeBook gradeBook2("cs102 Data Structures in C++");

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
	return 0;
}