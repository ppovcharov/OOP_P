#include "Dict.h"
template<typename T1, typename T2>
void Dictionary<T1, T2>::add(T1 key, T2 value)
{
	for (int i = 0; i < 100; i++)
	{
		if (pages[i].isEmpty()) {
			pages[i].setKey(key);
			pages[i].setValue(value);
			break;
		}
	}
}
template<typename T1, typename T2>
void Dictionary<T1, T2>::remove(T1 key)
{
	for (int i = 0; i < 100; i++)
	{
		if (pages[i].getKey() == key) {
			pages[i].setKey(T1());
			pages[i].setValue(T2());
		}
	}
}
template<typename T1, typename T2>
Dictionary& Dictionary<T1, T2>::operator[](int index)
{
	try
	{
		if (index < 0 || index>99) {
			throw std::exception("invalid index");
		}
		return pages[index];
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
template<typename T1, typename T2>
bool Dictionary<T1, T2>::contains(T1 key)
{
	for (int i = 0; i < 100; i++)
	{
		if (pages[i].getKey()==key) {
			return true;
		}
	}
	return false;
}
template <typename T1, typename T2>
int Dictionary<T1, T2>::size()
{
	return pagesCount;
}
