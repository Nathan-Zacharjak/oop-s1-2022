#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>
#include "person.h"

using namespace std;

class aircraft {
	private:
		string _callsign;
		person _pilot;
		person _copilot;
	public:
		// a pilot and copilot must be provided when creating an aircraft
		aircraft(string callsign,person thePilot,person theCoPilot);
		void setPilot(person thePilot);      // change the pilot
		person getPilot();
		void setCoPilot(person theCoPilot);  // change the co-pilot
		person getCoPilot();
		void printDetails();                 // print the callsign, a new line, the pilot name,
											// a new line, the co-pilot name and a final newline.
};
#endif