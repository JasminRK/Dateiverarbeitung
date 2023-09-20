#ifndef BOOKING_H
#define BOOKING_H
#include "string"
#include <iomanip>
using namespace std;

class Booking
{
public:
    Booking();
    virtual string showDetails()=0;
protected:

string id;
string fromDate;
string toDate;
double price;


private:

};

#endif // BOOKING_H
