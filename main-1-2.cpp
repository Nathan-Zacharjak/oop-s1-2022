#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int main(void){
	person person1("Bill", 10000);
	person person2("Bob", 1000);
	person person3("Billy", 1010);
	person person4("Brian", 20001);

	cout << person1.getName() << "\t" << person1.getSalary() << endl;
	cout << person2.getName() << "\t" << person2.getSalary() << endl;
	cout << person3.getName() << "\t" << person3.getSalary() << endl;
	cout << person4.getName() << "\t" << person4.getSalary() << endl;
	
	person1.setSalary(5);
	person2.setSalary(10);
	person3.setSalary(11);
	person4.setSalary(12);

	person1.setName("Barry");
	person2.setName("Larry");
	person3.setName("Harry");
	person4.setName("Parry");

	cout << person1.getName() << "\t" << person1.getSalary() << endl;
	cout << person2.getName() << "\t" << person2.getSalary() << endl;
	cout << person3.getName() << "\t" << person3.getSalary() << endl;
	cout << person4.getName() << "\t" << person4.getSalary() << endl;

	return 0;
}
