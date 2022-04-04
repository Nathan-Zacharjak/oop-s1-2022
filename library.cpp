#include <iostream>
#include "Library.h"

using namespace std;

// implementation of the default Panda constructor
Library::Library()
{
	name = "no name";
}

// implementation of a Panda constructor taking a name and food type
Library::Library(string lname)
{
	name = lname;
}

// implementation of the Panda treat function
void Library::addBook(Book* book_to_add)
{
	book_to_add->index = number_of_books;
	books[number_of_books] = book_to_add;
	number_of_books++;
}

void Library::borrowBook(int index)
{
	books[index]->borrowed = true;
	cout << "You have borrowed book: " << books[index]->title << "!" << endl;
}

void Library::returnBook(int index)
{
	books[index]->borrowed = false;
	cout << "You have returned book: " << books[index]->title << "!" << endl;
}		

// implementation of the default Panda destructor
Library::~Library()
{
}
