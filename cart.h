#ifndef CART_H
#define CART_H

#include <string>
#include "meerkat.h"

using namespace std;

class cart {
	private:
		meerkat _passengers[4];
		int _passengerCount;
	public:
		cart();                         // create an empty cart object
		bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
		void emptyCart();               // remove all meerkats from the cart
		void printMeerkats();           // print the name, a space, the age, then a new line
										// for each meerkat in the order they were added
};
#endif