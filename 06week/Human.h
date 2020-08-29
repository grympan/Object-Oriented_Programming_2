#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Phone.h"

using namespace std;

class CHuman{
	friend void eatWith(CHuman& objInput, int nAmount);
	friend class CPet;
private:
	// member var
	int nWeight;
	int nHeight;
	CPhone objPhone;

public:
	// constructor
	CHuman(int nN, int nH = 0, int nW = 0);

	// destructor
	~CHuman();
	
	// member function
	void eat();
	void sleep();
	void setHeight(int nH);
	void setWeight(int nW);
	int getHeight();
	int getWeight();

	void printMemberVar();

};

#endif






