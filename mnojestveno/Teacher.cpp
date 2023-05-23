#include "Teacher.h"

Teacher::Teacher(std::string name, std::string katedra, std::string subjects):Person(name),katedra{katedra},subjects{subjects}
{
}

void Teacher::display() const
{
	Person::display();
	std::cout << " " << katedra << " " << subjects << std::endl;
}

Teacher* Teacher::clone()
{
	return new Teacher(*this);
}
