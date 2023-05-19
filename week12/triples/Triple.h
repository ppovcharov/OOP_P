#ifndef _T_
#define _T_
#include <iostream>
#include <vector>
template <typename T>
class Triple {
private:
	T first, second, third;
	
public:
	bool operator<(const Triple<T> other);
	bool operator==(const Triple<T> other);
	Triple(T first, T second, T third);
	static Triple<T>& make_triple(T one, T two, T three);
	static Triple<T>& make_triple(T one, T two);
	static Triple<T>& make_triple(T one);
	static void sort(std::vector<Triple<T>>& triples);
};


#endif

template<typename T>
inline bool Triple<T>::operator<(const Triple<T> other)
{
	if (first < other.first) {
		return true;
	}
	if (first > other.first) {
		return false;
	}
	if (second < other.second) {
		return true;
	}
	if (second > other.second) {
		return false;
	}
	return third < other.third;
}

template<typename T>
inline bool Triple<T>::operator==(const Triple<T> other)
{
	return first == other.first && second == other.second && third == other.third;
}

template<typename T>
inline Triple<T>::Triple(T first, T second, T third):first{first},second{second},third{third}
{
	
}

template<typename T>
inline Triple<T>& Triple<T>::make_triple(T one, T two, T three)
{

	Triple<T> t(one, two, three);
	return t;
}

template<typename T>
inline Triple<T>& Triple<T>::make_triple(T one, T two)
{
	Triple<T> t(one, two, two);
	return t;
}

template<typename T>
inline Triple<T>& Triple<T>::make_triple(T one)
{
	Triple<T> t(one, one, one);
	return t;
}

template<typename T>
inline void Triple<T>::sort(std::vector<Triple<T>>& triples)
{
	for (int i = 0; i < triples.size(); i++)
	{
		for (int j = 0; j < triples.size(); j++)
		{
			if (triples[i] < triples[j]) {
				Triple<T> temp = triples[i];
				triples[i] = triples[j];
				triples[j] = temp;
			}
		}
	}
}
