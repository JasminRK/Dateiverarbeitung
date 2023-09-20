#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H
#include "booking.h"

class RentalCarReservation : public Booking
{
public:
    RentalCarReservation();
    string showDetails()override;
private:
    string pickupLocation;
    string returnLocation;
    string company;
};

#endif // RENTALCARRESERVATION_H
