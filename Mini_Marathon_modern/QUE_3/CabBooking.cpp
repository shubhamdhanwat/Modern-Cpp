#include "CabBooking.h"

CabBooking::CabBooking(std::string bookingid, std::string pickup_location, std::string drop_loaction, float base_fare)
:_booking_id(bookingid),_pickup_location(pickup_location),_drop_location(drop_loaction),_base_fare(base_fare)
{
}
std::ostream &operator<<(std::ostream &os, const CabBooking &rhs) {
    os << "_booking_id: " << rhs._booking_id
       << " _pickup_location: " << rhs._pickup_location
       << " _drop_location: " << rhs._drop_location
       << " _base_fare: " << rhs._base_fare;
    return os;
}
