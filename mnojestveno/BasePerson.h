#ifndef _BP_
#define P_
#include <iostream>

class BasePerson {
public:
	virtual void display() const = 0;
	virtual ~BasePerson();
	virtual BasePerson* clone()=0;
};

#endif