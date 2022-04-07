#include <iostream>
#include <string>
#include "cart.h"

using namespace std;

cart::cart(){
	_passengerCount = 0;
}

bool cart::addMeerkat(meerkat cat){
	bool success = false;
	if (_passengerCount < 4){
		_passengers[_passengerCount] = cat;
		_passengerCount++;
		success = true;
	} else {
		success = false;
	}

	return success;
}

void cart::emptyCart(){
	meerkat cat;
	for (int i = 0; i < 4; i++){
		_passengers[i] = cat;
	}
	_passengerCount = 0;	
}

void cart::printMeerkats(){
	for (int i = 0; i < _passengerCount; i++){
		cout << _passengers[i].getName() << " " << _passengers[i].getAge() << endl;
	}
	
}