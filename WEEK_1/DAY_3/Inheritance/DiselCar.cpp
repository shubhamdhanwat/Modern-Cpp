#include <iostream>
#include "DiselCar.h"

void DiselCar::CalculateRegistrationCharge()
{
        std::cout<<"Tax on petrol is 15 % "<<0.15f*price()
    <<"\n";
}

DiselCar::DiselCar(int id, std::string name, float price, VechicleType type, int capacity)
    : Vehicle(id, name, price, type), _fuel_tank_capacity(capacity)
{
}

DiselCar::DiselCar(int id, std::string name, VechicleType type, int capacity)
    : Vehicle(id, name, type), _fuel_tank_capacity(capacity)
{
}

std::ostream &operator<<(std::ostream &os, const DiselCar &rhs)
{
    os << static_cast<const Vehicle &>(rhs)
       << "\n_fuel_tank_capacity: " << rhs._fuel_tank_capacity;
    return os;
}
