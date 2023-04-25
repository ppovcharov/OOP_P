#ifndef _M_
#define _M_
#include <iostream>
template <typename T1,typename T2>
class Map {
private:
	T1 key;
	T2 value;
public:
	Map(T1 key, T2 value);
	T1 getKey();
	T2 getValue();
	bool isEmpty();
	void setKey(T1 key);
	void setValue(T2 value);
};
#endif
