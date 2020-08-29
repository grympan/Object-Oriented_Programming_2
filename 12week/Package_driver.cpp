#include <iostream>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

void main()
{
	Package p1("Yun", "Soseong-ro 12", "Incheon", "Nam-gu", 123456,
		"Park", "Bongsu-ro 34", "Ulsan", "Dong-gu", 789011, 20.0, 2.0);

	TwoDayPackage p2("Park", "Geunhye-ro 88", "Seoul", "Jongro-gu", 165789,
		"Choi", "Sunsil st. 77", "Berlin", "Eichenwalde", 565789, 7.5, 0.7, 2.5);

	OvernightPackage p3("Genji", "Bibyo st. 82", "Dokyo", "Hannamura", 894622,
		"Mac", "Hwamul st. 66", "L.A", "California", 561586, 15.6, 2.3, 3.0);

	cout << "<1st package sender info.>\n";
	cout << "Name : " << p1.getSenderName() << endl;
	cout << "Address : " << p1.getSenderAddress() << endl;
	cout << "City : " << p1.getSenderCity() << endl;
	cout << "State : " << p1.getSenderState() << endl;
	cout << "ZIP : " << p1.getSenderZIPCode() << endl;

	cout << "\n<1st package recipient info.>\n";
	cout << "Name : " << p1.getRecipientName() << endl;
	cout << "Address : " << p1.getRecipientAddress() << endl;
	cout << "City : " << p1.getRecipientCity() << endl;
	cout << "State : " << p1.getRecipientState() << endl;
	cout << "ZIP : " << p1.getRecipientZIPCode() << endl;

	cout << "\n================ 1st COST (NORMAL) : " << p1.calculateCost() << endl;

	cout << "\n<2nd package sender info.>\n";
	cout << "Name : " << p2.getSenderName() << endl;
	cout << "Address : " << p2.getSenderAddress() << endl;
	cout << "City : " << p2.getSenderCity() << endl;
	cout << "State : " << p2.getSenderState() << endl;
	cout << "ZIP : " << p2.getSenderZIPCode() << endl;

	cout << "\n<2nd package recipient info.>\n";
	cout << "Name : " << p2.getRecipientName() << endl;
	cout << "Address : " << p2.getRecipientAddress() << endl;
	cout << "City : " << p2.getRecipientCity() << endl;
	cout << "State : " << p2.getRecipientState() << endl;
	cout << "ZIP : " << p2.getRecipientZIPCode() << endl;

	cout << "\n================ 2nd COST (TWODAY) : " << p2.calculateCost() << endl;

	cout << "\n<3rd package sender info.>\n";
	cout << "Name : " << p3.getSenderName() << endl;
	cout << "Address : " << p3.getSenderAddress() << endl;
	cout << "City : " << p3.getSenderCity() << endl;
	cout << "State : " << p3.getSenderState() << endl;
	cout << "ZIP : " << p3.getSenderZIPCode() << endl;

	cout << "\n<3rd package recipient info.>\n";
	cout << "Name : " << p3.getRecipientName() << endl;
	cout << "Address : " << p3.getRecipientAddress() << endl;
	cout << "City : " << p3.getRecipientCity() << endl;
	cout << "State : " << p3.getRecipientState() << endl;
	cout << "ZIP : " << p3.getRecipientZIPCode() << endl;

	cout << "\n================ 3rd COST (OVERNIGHT) : " << p3.calculateCost() << endl;
}