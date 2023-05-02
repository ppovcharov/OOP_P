#include "Item.h"

Item::Item(int id, const char* title, const char* author, Date d)
{
	this->id = id;
	this->titleSize = strlen(title);
	this->title = new char[titleSize + 1];
	strcpy_s(this->title, titleSize + 1, title);
	this->authorSize = strlen(author);
	this->publicationDate = d;
}

Item::~Item()
{
	delete[] title;
	delete[] author;
}

Item& Item::operator=(const Item& other)
{
	if (this != &other) {
		this->id = other.id;
		this->titleSize = other.titleSize;
		delete[] title;
		this->title = new char[titleSize + 1];
		strcpy_s(this->title, titleSize + 1, other.title);
		this->authorSize = other.authorSize;
		delete[] author;
		this->author = new char[authorSize + 1];
		strcpy_s(this->author, authorSize + 1, other.author);
		this->publicationDate = other.publicationDate;
	}
	return *this;
}

Item::Item(const Item& other)
{
	this->id = other.id;
	this->titleSize = other.titleSize;
	this->title = new char[titleSize + 1];
	strcpy_s(this->title, titleSize + 1, other.title);
	this->authorSize = other.authorSize;
	this->author = new char[authorSize + 1];
	strcpy_s(this->author, authorSize + 1, other.author);
	this->publicationDate = other.publicationDate;
}
