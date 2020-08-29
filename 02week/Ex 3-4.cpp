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
	void setCourseName(string name)
	{
		courseName = name;
	}

	string getCourseName()
	{
		return courseName;
	}

	void displayMessage()
	{
		cout << "welcome to the grade book for\n" << getCourseName() << "!"
			<< endl;
	}
private:
	string courseName;
};

int main()
{
	string nameofCourse;
	GradeBook myGradeBook;

	cout << "Initial course name is: " << myGradeBook.getCourseName()
		<<endl;

	cout << "\nPlease enter the course name: " << endl;
	getline(cin, nameofCourse);
	myGradeBook.setCourseName(nameofCourse);

	cout << endl;
	myGradeBook.displayMessage();
	return 0;
}