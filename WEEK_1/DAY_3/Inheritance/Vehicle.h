#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VechicleType.h"

class Vehicle
{
private:
    int _id{-1};
    std::string _name{""};
    float _price{0.0f};
    VechicleType _type{VechicleType::PERSONAL};

public:
    // default constructor
    Vehicle() = default;

    // copy constructor
    Vehicle(const Vehicle &) = delete;

    // copy assignment
    Vehicle &operator=(const Vehicle &) = delete;

    // move constructor
    Vehicle(Vehicle &&) = delete;

    // move assignment
    Vehicle &operator=(Vehicle &&) = delete;

    // default destructor
    ~Vehicle() = default;

    Vehicle(int id, std::string name, float price, VechicleType type);

    Vehicle(int id, std::string name, VechicleType type);

    int id() const { return _id; }

    std::string name() const { return _name; }

    float price() const { return _price; }

    VechicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

    virtual void CalculateRegistrationCharge() = 0;
    // user can not make the objects of vehicle class
};

#endif // VEHICLE_H
