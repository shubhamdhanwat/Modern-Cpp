#include "ICEngineVehicle.h"

ICEngineVehicle::ICEngineVehicle(VehicleType icType, float icPrice, std::string icBrand, int icSeatCount)
:_icType(icType),_icPrice(icPrice),_icBrand(icBrand)
{
    if(icSeatCount>=2 && icSeatCount<=6)
    {
        _icSeatCount=icSeatCount;
    }
    else
    {
        std::cout<<"THe icseatcount is not in the spectified range.\n";
    }
}
std::ostream &operator<<(std::ostream &os, const ICEngineVehicle &rhs) {
    os << "_icType: " <<static_cast<int>(rhs._icType) 
       << " _icPrice: " << rhs._icPrice
       << " _icBrand: " << rhs._icBrand
       << " _icSeatCount: " << rhs._icSeatCount;
    return os;
}
