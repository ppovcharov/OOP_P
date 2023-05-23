#ifndef _PE_
#define _PE_
#include <iostream>
#include "BasePerson.h"
#include <string>

class Person :public BasePerson {
private:
	std::string name;
	int egn;
	static int count;
public:
	Person(std::string name="");
	Person* clone() override;
	void display() const override;
};

#endif