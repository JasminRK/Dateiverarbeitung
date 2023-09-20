#include "travelagency.h"
using namespace std;

TravelAgency::TravelAgency()
{

}

TravelAgency::~TravelAgency()
{

    for( auto p : booking)
    {
    delete p;
    }


    booking.clear();

}
