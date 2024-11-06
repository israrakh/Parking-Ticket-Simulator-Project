#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

using namespace std;

class PoliceOfficer {
private:
	string name;
	string badgeNum;

public:
	PoliceOfficer(string n = "Officer name", string bdgNum = "badge num");
	// Using pointer because only needs to issue a ticket if a violation occurs, if there is no violation no ticket 
	// should be generated.
	ParkingTicket* patrol(ParkedCar car, ParkingMeter meter);
};

#endif // !POLICEOFFICER_H
