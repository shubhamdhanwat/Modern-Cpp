#ifndef EVCAR_H
#define EVCAR_H

#include<iostream>
#include"Vehicle.h"

class EvCar:public Vehicle
{
private:
    int _battery_capacity;
public:
    void CalculateRegistrationCharge() override;
    EvCar(int id, std::string name, float price, VechicleType type, int capacity) ;
    EvCar(int id, std::string name, VechicleType type,int capacity);
    EvCar() = default;

    EvCar(const EvCar &) = delete;

    EvCar &operator=(const EvCar &) = delete;

    EvCar(EvCar &&) = delete;

    ~EvCar() = default;

    EvCar &operator=(EvCar &&) = delete;

    int batteryCapacity() const { return _battery_capacity; }

    friend std::ostream &operator<<(std::ostream &os, const EvCar &rhs);

    
};

#endif // EVCAR_H
