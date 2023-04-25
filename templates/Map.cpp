#include "Map.h"
template<typename T1, typename T2>
 Map<T1, T2>::Map(T1 key, T2 value)
{
	 this->key = key;
	 this->value = value;
}

 template<typename T1, typename T2>
 T1 Map<T1, T2>::getKey()
 {
	 return key;
 }

 template<typename T1, typename T2>
 T2 Map<T1, T2>::getValue()
 {
	 return value;
 }

 template<typename T1, typename T2>
 bool Map<T1, T2>::isEmpty()
 {
	 if (key == T1()) {
		 return true;
	 }
	 return false;
 }

 template<typename T1, typename T2>
 void Map<T1, T2>::setKey(T1 key)
 {
	 this->key = key;
 }
 template<typename T1, typename T2>
 void Map<T1, T2>::setValue(T2 value)
 {
	 this->value = value;
 }


