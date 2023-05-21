#include <iostream>
const int MAX_SIZE = 20;

class Waffle
{
public:
	char name[MAX_SIZE];
	double weight;
	double wholesalePrice;
	double clientPrice;
};

class WaffleShop
{

private:
	Waffle waffle;
	int count;
	int maxCount;
	double currentIncome;
	double currentExpenses;
public:
	void initializeShop(Waffle w, int max) {
		waffle = w;
		count = 0;
		currentIncome = 0;
		currentExpenses = 0;
		maxCount = max;
	}
	void testShop(Waffle w) {
		waffle = w;
		count = 3;
		currentIncome = 10;
		currentExpenses = 0;
		maxCount = 10;
	}
	void order(int waffles) {
		try
		{
			if (count != 0) {
				throw std::exception("Availability is not 0");
			}
			if (maxCount < count + waffles) {
				throw std::exception("Not enough space");

			}
			count = count + waffles;
			currentExpenses += waffles * waffle.wholesalePrice;
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	void sell() {
		try
		{
			if (count == 0) {
				throw std::exception("No waffles");
			}
			count--;
			currentIncome += waffle.clientPrice;
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	void outputWafflesInfo() {
		std::cout << count << " " << waffle.name << " " << count * waffle.weight << std::endl;
	}
	void outputIncomeInfo() {
		std::cout << currentIncome - currentExpenses;
	}
};





int main()
{
	Waffle waffle = {"borovec",100,5,10};
	WaffleShop shop;
	shop.testShop(waffle);
	//shop.initializeShop(waffle, 10);
	shop.order(3);
	shop.sell();
	shop.outputWafflesInfo();
	shop.outputIncomeInfo();

}
