#include "Permit.h"

Permit::Permit(std::string serial_number, PermitType per_type, int per_dur_left, float per_charge)
:_serial_number(serial_number),_permit_type(per_type),_permit_duration_left(per_dur_left),_permit_renewal_charge(per_charge)
{
}
std::ostream &operator<<(std::ostream &os, const Permit &rhs) {
    os << "_serial_number: " << rhs._serial_number
       << " _permit_type: " <<static_cast<int>(rhs._permit_type) 
       << " _permit_duration_left: " << rhs._permit_duration_left
       << " _permit_renewal_charge: " << rhs._permit_renewal_charge;
    return os;
}
