#include <iostream>
#include "ParkingTicket.h"

using namespace std;

// default constructor
ParkingTicket::ParkingTicket(ParkedCar c, string ofcrName, string ofcrBadge, int totalFine)
	: car(c), officerName(ofcrName), officerBadge(ofcrBadge), fine(totalFine) {}

void ParkingTicket::generateTicket() const {
	cout << "*** Parking Ticket ***" << endl;
	cout << "Officer: " << officerName << " | Badge Number: " << officerBadge << endl;
	cout << "Vehicle License Number: " << car.getLicenseNum() << endl;
	cout << "Make: " << car.getMake() << " | Model: " << car.getModel() << " | Color: " << car.getColor() << endl;
	cout << "Minutes Parked: " << car.getMinutesParked() << endl;
	cout << "Charge/Fine Amount: $" << fine << endl;
}