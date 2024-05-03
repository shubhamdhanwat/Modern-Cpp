#ifndef ELECTRICVEHICLE_H
#define ELECTRICVEHICLE_H
#include <iostream>
#include <string.h>
#include "VehicleType.h"

class ElectricVehicle
{
private:
    VehicleType _evType{VehicleType::DIESEL};
    float _evPrice{0.0f};
    std::string _evBrand{""};
    int _evSeatCount{0};

public:
    ElectricVehicle(VehicleType evType, float evPrice, std::string evBrand, int evSeatCount);
    // default constructor
    ElectricVehicle() = default;
    // copy constructor
    ElectricVehicle(const ElectricVehicle &) = delete;
    // copy assignment
    ElectricVehicle &operator=(ElectricVehicle &) = delete;
    // move constructor
    ElectricVehicle(ElectricVehicle &&) = delete;
    // move assignment
    ElectricVehicle &operator=(ElectricVehicle &&) = delete;
    // deafault destructor
    ~ElectricVehicle() = default;

    VehicleType Type() const { return _evType; }

    float Price() const { return _evPrice; }

    std::string Brand() const { return _evBrand; }

    int SeatCount() const { return _evSeatCount; }

    friend std::ostream &operator<<(std::ostream &os, const ElectricVehicle &rhs);


};


#endif // ELECTRICVEHICLE_H
