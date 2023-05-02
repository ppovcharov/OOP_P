#ifndef _D_
#define _D_
class Date {
private:
	int day;
	int month;
	int year;
public:
	Date(int d=0, int m=0, int y=0);
	Date& operator=(const Date& other);
	Date(const Date& other);
};
#endif