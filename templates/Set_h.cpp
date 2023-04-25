#include "Set_h.h"
template <typename T>
Set<T>::Set() : elements{ nullptr }, size{ 0 } {

}
template <typename T>
Set<T>::Set(const T* elements, unsigned int const size)
{
	this->size = size;
	for (int i = 0; i < size; i++)
	{
		this->elements[i] = elements[i];
	}
}
template <typename T>
Set<T>::~Set() {
	delete[] elements;
}
template <typename T>
Set<T>::Set(Set& other)
{
	size = other.size;
	elements = new T(size);
	for (int i = 0; i < size; i++)
	{
		elements[i] = other.elements[i];
	}
}
template <typename T>
Set<T>& Set<T>::operator=(const Set& other)
{
	if (this != &other) {
		size = other.size;
		elements = new T(size);
		for (int i = 0; i < size; i++)
		{
			elements[i] = other.elements[i];
		}
	}
	return *this;
}
template<typename T>
void Set<T>::add(T element)
{
	if (!this->contains(element)) {
		T temp = new T[size];
		for (int i = 0; i < size; i++)
		{
			temp[i] = elements[i];
		}
		delete[] elements;
		size++;
		elements = new T[size];
		for (int i = 0; i < size - 1; i++)
		{
			elements[i] = temp[i];
		}
		elements[size - 1] = element;
	}
}

template<typename T>
bool Set<T>::isEmpty()
{
	return size==0;
}

template<typename T>
void Set<T>::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << elements[i] << std::endl;
	}
}

template<typename T>
bool Set<T>::contains(T element)
{
	for (int i = 0; i < size; i++)
	{
		if (elements[i] == element) {
			return true;
		}
	}
	return false;
}
template <typename T>
Set<T>& Set<T>::operator+(const Set& other) {
	T temp = new T[size + other.size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = elements[i];
	}
	for (int i = size; i < size+other.size; i++)
	{
		temp[i] = other.elements[i - size];
	}
	Set newSet(temp, size + other.size);
	return newSet;
}

template<typename T>
bool Set<T>::operator<(const Set& other)
{
	if (size > other.size) {
		return false;
	}
	for (int i = 0; i < size; i++)
	{
		if (!contains(other.elements[i])) {
			return false;
		}
	}
	return true;
}


