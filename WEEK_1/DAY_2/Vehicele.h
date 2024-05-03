#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <cstring>
#include "vehicleType.h"

class vehicle
{
private:
    /* data */
    int _id;
    std::string _model_name;
    float _price;
    VehicleType _type;

public:
    vehicle(int id, std::string model, float price, VehicleType type);
    // 1) disable default constructor (deleted default constructor)
    vehicle() = delete; // disable

    // 2) copy constructor (deleted copy constructor)
    vehicle(const vehicle &) = delete;

    // 3) copy assignment operator
    vehicle &operator=(const vehicle &) = delete;

    // 4) move constructor
    vehicle(vehicle &&) = delete;

    // 5) move assignment
    vehicle &operator=(vehicle &&) = delete;

    // 6) destructor
    ~vehicle() {std :: cout << "\nBye!!";}
    float price() const { return _price; }

    int id() const { return _id; }

    void setType(const VehicleType &type) { _type = type; }

};

/*
move semantics:
- ability to move data.
- without pointer move semantic can not work.
- also data should be in heap to perform move semantics.
valgrind   --leak-check=full ./app // command to check the memory leackage

*/

#endif // VEHICLE_H
