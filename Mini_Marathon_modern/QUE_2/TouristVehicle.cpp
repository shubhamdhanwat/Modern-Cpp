#include "TouristVehicle.h"

TouristVehicle::TouristVehicle(std::string number, VehiceType v_type, int seat_count, std::shared_ptr<Permit> permit)
:_number(number),_type(v_type),_seat_count(seat_count),_permit(permit)
{
}
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " <<static_cast<int>(rhs._type) 
       << " _seat_count: " << rhs._seat_count
       << " _permit: " << *rhs._permit;
    return os;
}
