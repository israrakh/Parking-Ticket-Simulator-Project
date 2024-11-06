#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:
	int minutesPurchased;

public:
	ParkingMeter(int min = 0);
	int getMinutesPurchased() const;
};

#endif // !PARKINGMETER_H

