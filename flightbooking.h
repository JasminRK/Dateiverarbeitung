#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H

#include "booking.h"
#include <iostream>
#include <iomanip>

using namespace std;

class FlightBooking : public Booking
{
public:
    FlightBooking();
    string showDetails() override;
    const string &getFromDestination() const;
    void setFromDestination(const string &newFromDestination);

    const string &getToDestination() const;
    void setToDestination(const string &newToDestination);

    const string &getAirline() const;
    void setAirline(const string &newAirline);

private:
    string fromDestination;
    string toDestination;
    string airline;
};

#endif // FLIGHTBOOKING_H
