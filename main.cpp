#include <iostream>
#include "Book.h"
#include "Library.h"

using namespace std;

// main program
int main()
{
	Library *library1;
	library1 = new Library("Wow this a great name!");

	Book *book1, *book2;
	book1 = new Book("The Hitchhikers Guide to the Galaxy");
	book2 = new Book();
	// cout << (*book1).title << endl;
	// cout << (*book2).title << endl;

	library1->addBook(book1);
	library1->addBook(book2);
	cout << book2->index << endl;

	// cout << (*library1).books[0].title << endl;
	// cout << (*library1).books[1].title << endl;

	library1->borrowBook(book1->index);
	library1->borrowBook(book2->index);
	library1->returnBook(book2->index);
}
