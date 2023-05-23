#ifndef _A_
#define _A_
#include "Teacher.h"
#include "Student.h"

class Assistant :public Teacher, public Student {
public:
	Assistant(std::string name, std::string katedra, std::string subjects, int FN);
	void display() const override;
	Assistant* clone() override;
};


#endif