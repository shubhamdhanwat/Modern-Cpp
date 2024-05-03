#include<iostream>
#include"EvCar.h"


std::ostream &operator<<(std::ostream &os, const EvCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << "\n_battery_capacity: " << rhs._battery_capacity;
    return os;
}

void EvCar::CalculateRegistrationCharge()
{
        std::cout<<"Tax on ev is 3 % "<<0.03f*price()
    <<"\n";
}

EvCar::EvCar(int id, std::string name, float price, VechicleType type, int capacity)
    : Vehicle(id, name, price, type), _battery_capacity(capacity)
{
}

EvCar::EvCar(int id, std::string name, VechicleType type, int capacity)
:Vehicle(id,name,type),_battery_capacity(capacity)
{
}
