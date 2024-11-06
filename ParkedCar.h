#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
using namespace std;

class ParkedCar {
public:
	ParkedCar(string make = "mk", string model = "mdl", string color = "clr", string license = "lic", int min = 0);
	string getMake() const;
	string getModel() const;
	string getColor() const;
	string getLicenseNum() const;
	int getMinutesParked() const;
private:
	string make, model, color, licenseNum;
	int minutesParked;
};

#endif