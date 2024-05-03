#include "Driver.h"
#include<iostream>

Driver::Driver(std::string drivername, DriveCategory driverCategory, int driverbirthyear, ref_license ref_lc)
:_drivername(drivername),_driverCategory(driverCategory),_driverBirthYear(driverbirthyear),_ref_lc(ref_lc)
{
    if(driverbirthyear<1947 && driverbirthyear>2023)
    {
        std::cout<<"The driver birth year is wrong .";
    }
    
}
std::ostream &operator<<(std::ostream &os, const Driver &rhs) {
    os << "_drivername: " << rhs._drivername
       << " _driverCategory: " <<static_cast<int>(rhs._driverCategory) 
       << " _driverBirthYear: " << rhs._driverBirthYear
       << " _ref_lc: " << *rhs._ref_lc.get();
    return os;
}
