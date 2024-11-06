#include "ParkingMeter.h"

// default constructor of ParkingMeter class
ParkingMeter::ParkingMeter(int min) : minutesPurchased(min) {}

int ParkingMeter::getMinutesPurchased() const {
	return minutesPurchased;
}