#ifndef BOOK_H
#define BOOK_H

#include <string>

// Class definition for a Panda
class Book
{
public:
	Book();
	Book(std::string btitle);
	std::string title;
	int index;
	bool borrowed = false;
	// std::string species;
	// std::string type;
	// std::string fav_food;
	// void treat(int fav_food_quantity);		
	~Book();
};
#endif //PANDA_H
