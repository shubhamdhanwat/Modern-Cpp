#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include"vehicletype.h"

class Vehicle
{
private:
    int _id {0};
    std::string _model_name {""};
    float _price {0.0f};
    VehicleType _type {VehicleType::PRIVATE};
public:
    Vehicle(int id, std::string name, float price,VehicleType type);
    Vehicle(int id, std::string name, VehicleType type);
    
    Vehicle()=delete;
    Vehicle(const Vehicle &)=delete;
    Vehicle &operator=(const Vehicle & )=delete;
    Vehicle(Vehicle &&)=delete;
    Vehicle & operator=(Vehicle &&)=delete;
    ~Vehicle() =default;

    int id() const { return _id; }

    std::string modelName() const { return _model_name; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

};



#endif // VEHICLE_H
