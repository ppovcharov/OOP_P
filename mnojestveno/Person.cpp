#include "Person.h"
int Person::count = 0;
Person::Person(std::string name):name{name}
{
	count++;
	egn = count;
}

Person* Person::clone()
{
	return new Person(*this);
}

void Person::display() const
{
	std::cout << name << " " << egn << std::endl;
}

