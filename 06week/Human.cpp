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
	//this pointer 자기 자신을 가르키는 포인터, (*this).nWeight += 10;도 써도 됨. this pointer는 멤버 함수에서 변수와 이미 정의된 변수와 이름이 동일할 때 이를 분명히 하기위해 사용하기도하나 별의미 x.
	//원래 형태 : nWieight += 10;
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