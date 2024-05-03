#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(int id, std::string name, float price, VehicleType type)
:Vehicle(id,name,type)
{
    _price=price;
}

Vehicle::Vehicle(int id, std::string name, VehicleType type)
    : _id(id), _model_name(name), _type(type)
{

}
    
std::ostream &operator<<(std::ostream &os, const Vehicle &rhs)
{
    std::string type;
    switch (static_cast<int>(rhs._type))
    {
    case 0:
        type = "PRIVATE";
        break;
    case 1:
        type = "PUBLIC";
        break;
    case 2:
        type = "TRANSPORT";
        break;
    default:
        type = "PRIVATE";
        break;
    }
    os << "_id: " << rhs._id
       << " _model_name: " << rhs._model_name
       << " _price: " << rhs._price
       << " _type: " << type;
    return os;
}


