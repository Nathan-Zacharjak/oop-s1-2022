#include <iostream>
#include <string>
#include "person.h"

using namespace std;

person::person(string myName, int Salary){
	_name = myName;
	_salary = Salary;
}

void person::setName(string name){
	_name = name;
}

string person::getName(){
	return _name;
}

void person::setSalary(int salary){
	_salary = salary;
}

int person:: getSalary(){
	return _salary;
}