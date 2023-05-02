#include "Book.h"

Book::Book(const char* genre, int id, const char* title, const char* author, Date d) : Item(id,title,author,d)
{
	this->genreSize = strlen(genre);
	this->genre = new char[genreSize + 1];
	strcpy_s(this->genre, genreSize + 1, genre);
}

Book::~Book()
{
	delete[] genre;
}
