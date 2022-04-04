#include <iostream>
#include "Book.h"

using namespace std;

// implementation of the default Panda constructor
Book::Book()
{
	title = "no title";
}

// implementation of a Panda constructor taking a name and food type
Book::Book(string btitle)
{
	title = btitle;
}

// implementation of the Panda treat function
// void Panda::treat(int fav_food_quantity)
// {
// 	cout << "Hi, I'm " << name << " and I'm a " << species ;
// 	cout << ", munching " << fav_food_quantity << " tons of " ;
// 	cout << fav_food << ", my favorite food!" << endl;
// }		

// implementation of the default Panda destructor
Book::~Book()
{
}
