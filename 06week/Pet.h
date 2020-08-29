#ifndef PET_H
#define PET_H

#include "Human.h"

class CPet{
private :
	int nWeight;
public:
	CPet(int nW){
		nWeight = nW;
	}
	int getWeight(){
		return nWeight;
	}
	void walkwith(CHuman& objMaster){
		nWeight--;
		//objMaster.setWeight(getWeight()-1);
		objMaster.nWeight--;
	}
};

#endif