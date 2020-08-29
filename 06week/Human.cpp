#include <iostream>
using namespace std;

#include "Human.h"

CHuman::CHuman(int nN, int nH, int nW)
	: objPhone(nN), nHeight(nH), nWeight(nW)
{
}

CHuman::~CHuman(){
	cout << "End of CHuman class" << endl;
}

void CHuman::eat(){
	this->nWeight += 10;
	//this pointer �ڱ� �ڽ��� ����Ű�� ������, (*this).nWeight += 10;�� �ᵵ ��. this pointer�� ��� �Լ����� ������ �̹� ���ǵ� ������ �̸��� ������ �� �̸� �и��� �ϱ����� ����ϱ⵵�ϳ� ���ǹ� x.
	//���� ���� : nWieight += 10;
}
void CHuman::sleep(){
	nHeight++;
}
void CHuman::setHeight(int nH){
	nHeight = (nH < 0) ? 0 : nH; //validation
}
void CHuman::setWeight(int nW){
	nWeight = (nW < 0) ? 0 : nW; //validation
}
int CHuman::getHeight(){
	return nHeight;
}
int CHuman::getWeight(){
	return nWeight;
}

void CHuman::printMemberVar(){
	cout << "Height : " << nHeight << endl;
	cout << "Weight : " << nWeight << endl;
	cout << "Phone Number : " << objPhone.getNumber() << endl;
}