#include <iostream>
#include <string>
#include "meerkat.h"
#include "meerkat.h"

using namespace std;

int main(void){
	meerkat kat1;
	meerkat kat2;
	meerkat kat3;
	meerkat kat4;
	
	kat1.setAge(5);
	kat2.setAge(10);
	kat3.setAge(11);
	kat4.setAge(12);

	kat1.setName("Barry");
	kat2.setName("Larry");
	kat3.setName("Harry");
	kat4.setName("Parry");

	cout << kat1.getName() << "\t" << kat1.getAge() << endl;
	cout << kat2.getName() << "\t" << kat2.getAge() << endl;
	cout << kat3.getName() << "\t" << kat3.getAge() << endl;
	cout << kat4.getName() << "\t" << kat4.getAge() << endl;

	return 0;
}
