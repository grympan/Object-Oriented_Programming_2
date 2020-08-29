#include <iostream>
#include <string>

#include "Human.h"
#include "Pet.h"

using namespace std;

void eatWith(CHuman& objInput, int nAmount){
	objInput.nWeight += nAmount;
}

int main()
{
	CHuman objTK(1012345678, 180, 70);
	CHuman objJS(123456789, 170, 40);
	CPet objAmi(3);

	eatWith(objJS, 40);

	cout << "JS's var" << endl;
	objJS.printMemberVar();

	objAmi.walkwith(objJS);
	cout << "JS's after var" << endl;
	objJS.printMemberVar();

	cout << "First Taekang's information" << endl;;
	objTK.printMemberVar();

	return 0;
}