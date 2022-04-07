#include <iostream>
#include <string>
#include "meerkat.h"
#include "cart.h"

using namespace std;

int main(void){
	meerkat kats[5];
	
	kats[0].setAge(5);
	kats[1].setAge(10);
	kats[2].setAge(11);
	kats[3].setAge(12);
	kats[4].setAge(15);

	kats[0].setName("Barry");
	kats[1].setName("Larry");
	kats[2].setName("Harry");
	kats[3].setName("Parry");
	kats[4].setName("Marry");

	cart cart1;

	cart1.emptyCart();

	for (int i = 0; i < 5; i++){
		bool katAdded = cart1.addMeerkat(kats[i]);
		if (!katAdded){
			cout << "Error, cart full!" << endl;
		}
	}

	cart1.printMeerkats();

	return 0;
}
