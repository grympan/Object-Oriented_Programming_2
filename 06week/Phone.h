#ifndef PHONE_H
#define PHONE_H

class CPhone{
private:
	int nNumber;
public:
	CPhone(int nN = 12345678){
		nNumber = nN;
	}
	int getNumber(){
		return nNumber;
	}
};

#endif