#include "Student.h"

Student::Student(int FN, std::string name):Person(name),FN{FN}
{

}

void Student::display() const
{
	Person::display();
	std::cout << " " << FN;
}

Student* Student::clone()
{
	return new Student(*this);
}
