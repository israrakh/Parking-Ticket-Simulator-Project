#include "ParkedCar.h"

using namespace std;
// default constructor of ParkedCar class
ParkedCar::ParkedCar(string mk, string mdl, string clr, string licNum, int min) : make(mk), model(mdl), color(clr),
licenseNum(licNum), minutesParked(min) {}

string ParkedCar::getMake() const {
	return make;
}

string ParkedCar::getModel() const {
	return model;
}

string ParkedCar::getColor() const {
	return color;
}

string ParkedCar::getLicenseNum() const {
	return licenseNum;
}

int ParkedCar::getMinutesParked() const {
	return minutesParked;
}