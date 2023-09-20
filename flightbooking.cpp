#include "flightbooking.h"
using namespace std;

FlightBooking::FlightBooking()
{

}

string FlightBooking::showDetails()
{
    string str1 =  "Flugbuchung von" + fromDestination + "nach" + toDestination + "mit" + airline + "am" + fromDate + ".\n";
    string str2 = "Preis :" +to_string(price)+ '\n';
    return  str1.append(str2);
}

const string &FlightBooking::getFromDestination() const
{
    return fromDestination;
}

void FlightBooking::setFromDestination(const string &newFromDestination)
{
    fromDestination = newFromDestination;
}

const string &FlightBooking::getToDestination() const
{
    return toDestination;
}

void FlightBooking::setToDestination(const string &newToDestination)
{
    toDestination = newToDestination;
}

const string &FlightBooking::getAirline() const
{
    return airline;
}

void FlightBooking::setAirline(const string &newAirline)
{
    airline = newAirline;
}
