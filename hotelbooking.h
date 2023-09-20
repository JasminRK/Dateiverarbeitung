#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H

#include "booking.h"

class HotelBooking : public Booking
{
public:
    HotelBooking();
    string showDetails()override;
private:
    string hotel;
    string town;

};

#endif // HOTELBOOKING_H
