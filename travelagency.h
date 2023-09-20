#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include <vector>
#include "booking.h"

using namespace std;


class TravelAgency
{
public:
    TravelAgency();
    void readFile();
    ~TravelAgency();
private:
    vector <Booking *> booking;

};

#endif // TRAVELAGENCY_H
