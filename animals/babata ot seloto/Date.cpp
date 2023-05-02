#include "Date.h"

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

Date& Date::operator=(const Date& other)
{
	if (this != &other) {
		this->day = other.day;
		this->month = other.month;
		this->year = other.year;
	}
	return*this;
}

Date::Date(const Date& other)
{
	this->day = other.day;
	this->month = other.month;
	this->year = other.year;
}
