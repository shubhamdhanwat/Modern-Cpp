#include "ElectricVehicle.h"

ElectricVehicle::ElectricVehicle(VehicleType evType, float evPrice, std::string evBrand, int evSeatCount)
:_evType(evType),_evPrice(evPrice),_evBrand(evBrand)
{
    if(evSeatCount>=2 && evSeatCount<=6)
    {
        _evSeatCount=evSeatCount;
    }
    else
    {
        std::cout<<"THe evseatcount is not in the spectified range.\n";
    }
}

std::ostream &operator<<(std::ostream &os, const ElectricVehicle &rhs) {
    os << "_evType: " <<static_cast<int>(rhs._evType) 
       << " _evPrice: " << rhs._evPrice
       << " _evBrand: " << rhs._evBrand
       << " _evSeatCount: " << rhs._evSeatCount;
    return os;
}


