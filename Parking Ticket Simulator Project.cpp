// Parking Ticket Simulator Project.cpp

#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"

using namespace std;

int main()
{
    // Creating car, meter, and officer objects for testing purpose
    
    ParkedCar car1("Hyundai", "Sonata", "Silver", "A12345", 120); // 120 mins parked
    ParkingMeter meter1(60); // 60 mins purchased
    PoliceOfficer officer("Mark Smith", "B123456");

    // Officer checking the parked car and issue a ticker if there is a violation 
    ParkingTicket* ticket = officer.patrol(car1, meter1);

    // Printing ticket if issued, if not print no violation
    if (ticket != nullptr) {
        ticket->generateTicket();
        delete ticket; // for cleaning up dynamically the allocated ticket.
    }
    else {
        cout << "No Violation." << endl;
    }
    
    // Testing with diff values

    ParkedCar car2("Toyota", "Camry", "Black", "A12399", 180); // 180 mins parked
    ParkingMeter meter2(60); // 60 mins purchased
    PoliceOfficer officer2("Donald Harris", "B123999");

    // Officer checking the parked car and issue a ticker if there is a violation 
    ParkingTicket* ticket2 = officer2.patrol(car2, meter2);

    // Printing ticket if issued, if not print no violation
    if (ticket2 != nullptr) {
        ticket2->generateTicket();
        delete ticket2; // for cleaning up dynamically the allocated ticket.
    }
    else {
        cout << "No Violation." << endl;
    }

    return 0;
}
