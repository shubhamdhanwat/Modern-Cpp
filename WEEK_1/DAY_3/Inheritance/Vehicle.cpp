#include<iostream>
#include"Vehicle.h"

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs)
{
    std::string type;
    switch (static_cast<int>(rhs._type))
    {
    case 0:
        type = "PERSONAL";
        break;

    case 1:
        type = "SECURITY";
        break;

    case 2:
        type = "TRANSPORT";
        break;
    }
    os << "_id: " << rhs._id
       << "\n_name: " << rhs._name
       << "\n_price: " << rhs._price
       << "\n_type: " << type;
    return os;
}

Vehicle::Vehicle(int id, std::string name,float price, VechicleType type) 
:Vehicle(id,name, type)
{
    _price=price;
    // constructor deligation and member initializer list can not be used together 
}

Vehicle::Vehicle(int id, std::string name, VechicleType type)
:_id(id),_name(name), _type(type)
{
}
