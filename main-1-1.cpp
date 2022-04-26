#include <iostream>
#include <string>
#include "Musician.h"

using namespace std;

int main(void){
	Musician musician1;
	Musician musician2("violin", 5);

	cout << musician1.get_experience() << " " << musician1.get_instrument() << endl;
	cout << musician2.get_experience() << " " << musician2.get_instrument() << endl;
	

	return 0;
}
