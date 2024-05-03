#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    int _id;
    std::string _model_name;
    float _price;
    VechicleType _type;
    int cus_id;



public:
    //parameteized constructor
    Vehicle(int id, std::string model, float price, VechicleType type);

    // for every class there are 6 special member functions

    // 1)default constructor (deleted default constructor)
    // functionaly is not require so it is disabled
    Vehicle() = delete;

    // 2)copy constructor (deleted copy constructor)
    Vehicle(const Vehicle &) = delete;

    // 3)copy assignment operator
    Vehicle &operator=(const Vehicle &) = delete;

    // 4) Move  constructor
    Vehicle(Vehicle &&) = delete;

    // 5)move assignment
    Vehicle &operator=(Vehicle &&) = delete;

    // 6)destructor
    ~Vehicle() = default; // enable

    float price() const { return _price; }

    int id() const { return _id; }

    void setPrice(float price) { _price = price; }

    void setId(int id) { _id = id; }

    int cusId() const { return cus_id; }
    void setCusId(int cusId) { cus_id = cusId; }
};

#endif // VEHICLE_H
