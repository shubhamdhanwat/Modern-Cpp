#include "PetrolCar.h"

PetrolCar::PetrolCar(int id, std::string name, float price, VechicleType type, int capacity)
:Vehicle(id,name,price,type),_fuel_tank_capacity(capacity)
{
}

PetrolCar::PetrolCar(int id, std::string name, VechicleType type, int capacity)
:Vehicle(id,name,type),_fuel_tank_capacity(capacity)
{
}

void PetrolCar::CalculateRegistrationCharge()
{
    std::cout<<"Tax on petrol is 13 % "<<0.13f*price()
    <<"\n";
    //we are accepting price by getter we can set price  as protected and it will be assisible to child class
    //function in the class is the behaviour/action.

}

std::ostream &operator<<(std::ostream &os, const PetrolCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _fuel_tank_capacity: " << rhs._fuel_tank_capacity;
    return os;
}

// std::ostream &operator<<(std::ostream &os, const PetrolCar &rhs) {
//     os << static_cast<const Vehicle &>(rhs)
//        << "\n_fuel_tank_capacity: " << rhs._fuel_tank_capacity;
//     return os;
// }
