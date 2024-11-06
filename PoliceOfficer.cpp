#include "PoliceOfficer.h"

using namespace std;

// default constructor of class PoliceOfficer
PoliceOfficer::PoliceOfficer(string n, string b) : name(n), badgeNum(b){}

ParkingTicket* PoliceOfficer::patrol(ParkedCar car, ParkingMeter meter) {
	int minutesParked = car.getMinutesParked();
	int minutesPurchased = meter.getMinutesPurchased();

	// checking for fine and charges
	if (minutesParked > minutesPurchased) {
		int exceededMinutes = minutesParked - minutesPurchased;
		int fine = 25; // $25 for the first hour
		if (exceededMinutes > 60) {
			fine += 10 * ((exceededMinutes - 1) / 60 + 1); // $10 for each additional hour
		}
		return new ParkingTicket(car, name, badgeNum, fine);
	}
	else {
		return nullptr;
	}
}