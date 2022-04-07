#include <iostream>
#include <string>
#include "meerkat.h"

using namespace std;

meerkat::meerkat(){
	_name = "no name";
	_age = 0;
}

void meerkat::setName(string name){
	_name = name;
}

string meerkat::getName(){
	return _name;
}

void meerkat::setAge(int age){
	_age = age;
}

int meerkat:: getAge(){
	return _age;
}