#include <iostream>
#include <string>
#include "person.h"
#include "aircraft.h"

using namespace std;

aircraft::aircraft(string callsign,person thePilot,person theCoPilot){
	_callsign = callsign;
	_pilot = thePilot;
	_copilot = theCoPilot;
}

void aircraft::setPilot(person thePilot){
	_pilot = thePilot;
}

person aircraft::getPilot(){
	return _pilot;
}

void aircraft::setCoPilot(person theCoPilot){
	_copilot = theCoPilot;
}

person aircraft::getCoPilot(){
	return _copilot;
}

void aircraft::printDetails(){
	cout << _callsign << endl;
	cout << _pilot.getName() << endl;
	cout << _copilot.getName() << endl;
	
}