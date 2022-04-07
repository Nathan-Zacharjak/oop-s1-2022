#include <iostream>
#include <string>
#include "person.h"
#include "aircraft.h"

using namespace std;

int main(void){
	person person1("Bill", 100);
	person person2("Bob", 100);
	person person3("Ben", 10);

	aircraft plane1("AlphaBravo", person1, person2);

	plane1.setPilot(person3);
	plane1.setCoPilot(person1);

	return 0;
}
