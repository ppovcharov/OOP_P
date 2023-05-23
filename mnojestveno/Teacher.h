#ifndef _T_
#define _T_
#include "Person.h"

class Teacher :virtual public Person {
private:
	std::string katedra;//deaznam
	std::string subjects;
public:
	Teacher(std::string name, std::string katedra, std::string subjects);
	void display() const override;
	Teacher* clone() override;
};


#endif