#include<iostream>
#include"HybridCar.h"


std::ostream &operator<<(std::ostream &os, const HybridCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << "\n_fuel_tank_capacity: " << rhs._fuel_tank_capacity
       << "\n_battery_capacity: " << rhs._battery_capacity;
    return os;
}

void HybridCar::CalculateRegistrationCharge()
{
        std::cout<<"Tax on petrol is 10 % "<<0.10f*price()
    <<"\n";
}

HybridCar::HybridCar(int id, std::string name, float price, VechicleType type, int fuel_capacity, int battery_capacity)
    : Vehicle(id, name, price, type), _fuel_tank_capacity(fuel_capacity), _battery_capacity(battery_capacity)
{
}

HybridCar::HybridCar(int id, std::string name, VechicleType type, int fuel_capacity, int battery_capacity)
:Vehicle(id,name,type),_fuel_tank_capacity(fuel_capacity),_battery_capacity(battery_capacity)
{
}
