#include "Assistant.h"

Assistant::Assistant(std::string name, std::string katedra, std::string subjects, int FN):Teacher(name,katedra,subjects),Student(FN,name),Person(name)
{
}

void Assistant::display() const
{
	Student::display();
	Teacher::display();
	Student::display();
}

Assistant* Assistant::clone()
{
	return new Assistant(*this);
}
