#ifndef _S_
#define _S_
#include <iostream>
template <typename T>
class Set {
private:
	unsigned int size;
	T* elements;
public:
	Set();
	Set(const T* elements,unsigned int const size);
	~Set();
	Set(Set& other);
	Set& operator=(const Set& other);
	void add(T element);
	bool isEmpty();
	void print();
	bool contains(T element);
	Set& operator+(const Set& other);
	bool operator<(const Set& other);
};


#endif

