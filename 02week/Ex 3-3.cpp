#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GradeBook
{
public:
	void displayMessage(string courseName)
	{
		cout << "welcome to the grade book for\n" << courseName << "!"
			<< endl;
	}
};

int main()
{
	string nameofCourse;
	GradeBook myGradeBook;

	cout << "Please enter the course name:" << endl;
	getline(cin, nameofCourse);
	cout << endl;

	myGradeBook. displayMessage(nameofCourse);
	return 0;
}