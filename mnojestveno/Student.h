#ifndef _ST_
#define _ST_
#include "Person.h"

class Student :virtual public Person {
private:
	int FN;
public:
	Student(int FN, std::string name);
	void display() const override;
	Student* clone() override;
};
#endif