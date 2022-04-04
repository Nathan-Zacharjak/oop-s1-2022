#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include "Book.h"

// Class definition for a Library
class Library
{
public:
	Library();
	Library(std::string lname);
	std::string name;
	Book* books[10];
	int number_of_books = 0;
	void addBook(Book* book_to_add);		
	void borrowBook(int index);		
	void returnBook(int index);		
	~Library();
};
#endif
