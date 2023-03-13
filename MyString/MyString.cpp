#include <iostream>

int getLength(const char* str) {
	int size = 0;
	while (str[size] != '\0') {
		size++;
	}
	return size;
}
class MyString
{
private:
	char* string;
public:
	MyString();
	MyString(MyString const& strObj);
	~MyString();
	MyString(const char* str);
	int length() {
		int size = 0;
		if (string != nullptr) {
			while (string[size] != '\0') {
				size++;
			}
		}
		return size;
	}
	char& at(unsigned indx) {
		try
		{
			if (indx<0 || indx>length()) {
				throw std::exception("Index out of range");
			}
			else {
				return string[indx];
			}
		}
		catch (const std::exception& e)
		{
			std::cout << e.what();
		}
	}
	int find(char c, unsigned int startPos = 0) {
		for (int i = startPos; i < length(); i++)
		{
			if (string[i] == c) {
				return i;
			}
		}
		return -1;
	}
	bool empty() {
		if (string != nullptr) {
			return false;
		}
		return true;
	}
	MyString substring(unsigned pos = 0, unsigned n = 0) {
		try {
			if (pos > length()) {
				throw std::exception("Pos out of range");
			}
			if (pos + n > length()) {
				n = length() - pos;
			}
			MyString newStr;
			newStr.string = new char[n + 1];
			for (int i = 0; i < n; i++) {
				newStr.string[i] = string[pos + i];
			}
			newStr.string[n] = '\0';
			return newStr;
		}
		catch (const std::exception& e) {
			std::cout << e.what();
			return MyString();
		}
	}

	void append(const MyString& str) {
		int size = length() + getLength(str.string);
		char* newStr = new char[size];
		for (int i = 0; i < length(); i++)
		{
			newStr[i] = string[i];
		}
		int j = 0;
		for (int i = length(); i < size; i++)
		{
			newStr[i] = str.string[j];
			j++;
		}
		newStr[size] = '\0';
		string = newStr;
		//delete[]newStr; tuk mai ima memory leak
	}

	void print() {
		for (int i = 0; i < length(); i++)
		{
			std::cout << string[i];
		}
		std::cout << std::endl;
	}
};

MyString::MyString() {
	if (string != nullptr)
		string[0] = '\0';
}
MyString::MyString(MyString const& strObj) {
	string = strObj.string;
}
MyString::~MyString() {
	delete[]string;
}
MyString::MyString(const char* str) {
	int len = getLength(str);
	string = new char[len + 1];
	for (int i = 0; i <= len; i++)
	{
		string[i] = str[i];
	}
}

int main() {
	MyString emptyString("abcd1234");
	std::cout << "Empty string: ";
	emptyString.print();
	std::cout << "Length: " << emptyString.length() << std::endl;
	std::cout << "Is empty? " << (emptyString.empty() ? "Yes" : "No") << std::endl;
	std::cout << emptyString.at(3) << std::endl;
	std::cout << emptyString.find('1', 2);//tuk ne znam dali se tursi indexa v samiq string ili indexa smqtaiki startPos za nachaloto, az sum go napravil da vrushta indexa sprqma celiq string, v drugiq sluchai prosto trqbva da izvadim startPos
	//emptyString.substring(3, 4);//tuk ima nqkuv problem spored men s pametta na 67 red
	const MyString& str("5678");
	emptyString.append(str);
	emptyString.print();
}