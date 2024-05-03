#ifndef ICENGINEVEHICLE_H
#define ICENGINEVEHICLE_H
#include<iostream>
#include"VehicleType.h"
#include<string.h>

class ICEngineVehicle
{
private:
    VehicleType _icType{VehicleType ::REGULAR};
    float _icPrice{0.0f};
    std::string _icBrand{""};
    int _icSeatCount{0};
    
public:
    ICEngineVehicle(VehicleType icType,float icPrice,std::string icBrand,int icSeatCount);
    //default constructor
    ICEngineVehicle() = default;
    // copy constructor
    ICEngineVehicle(const ICEngineVehicle &) = delete;
    // copy assignment
    ICEngineVehicle &operator=(ICEngineVehicle &) = delete;
    // move constructor
    ICEngineVehicle(ICEngineVehicle &&) = delete;
    // move assignment
    ICEngineVehicle &operator=(ICEngineVehicle &&) = delete;
    // deafault destructor
    ~ICEngineVehicle() = default;

    VehicleType Type() const { return _icType; }

    float Price() const { return _icPrice; }

    std::string Brand() const { return _icBrand; }

    int SeatCount() const { return _icSeatCount; }

    friend std::ostream &operator<<(std::ostream &os, const ICEngineVehicle &rhs);
};

#endif // ICENGINEVEHICLE_H
