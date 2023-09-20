#include "hotelbooking.h"

HotelBooking::HotelBooking()
{

}

string HotelBooking::showDetails()
{
    string result = "Hotelreservierung im" + hotel + "in" + town +"vom" + fromDate + "bis zum" + toDate + ".Preis : " + to_string(price) + "Euro";
    return result;
}
