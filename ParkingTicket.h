#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>
#include "ParkedCar.h"
using namespace std;

class ParkingTicket {
private:
	ParkedCar car;
	int fine;
	string officerName;
	string officerBadge;

public:
	ParkingTicket(ParkedCar c, string ofcrName, string ofcrBadge, int totlaFine);
	void generateTicket() const;
};

#endif // !PARKINGTICKET_H
