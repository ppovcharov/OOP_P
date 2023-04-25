#ifndef _D_
#define _D_
#include "Map.h"
template <typename T1, typename T2>
class Dictionary {
private:
	Map* pages[100];
	int pagesCount;
public:
	void add(T1 key, T2 value);
	void remove(T1 key);
	Dictionary& operator[](int index);
	bool contains(T1 key);
	int size();
};
#endif
