#ifndef _FT_
#define _FT_
#include "CarPart.h"
template <typename T>
class FuelTank : public CarPart{
private:
	int volume;
	T fuel;
public:
	FuelTank(std::string name, std::string manufacturer, unsigned int year, int volume, T fuel);
	void display() const override;
};

#endif

template<typename T>
inline FuelTank<T>::FuelTank(std::string name, std::string manufacturer, unsigned int year, int volume, T fuel):CarPart(name,manufacturer,year)
{
	this->volume = volume;
	this->fuel = fuel;
}

template<typename T>
inline void FuelTank<T>::display() const
{
	std::cout <<volume<<' '<<fuel<<' ' << CarPart::manufacturer << ' ' << CarPart::name << ' ' << CarPart::year << std::endl;
}
