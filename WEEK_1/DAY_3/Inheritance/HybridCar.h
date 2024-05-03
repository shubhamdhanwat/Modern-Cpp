#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H
#include"VechicleType.h"
#include"Vehicle.h"
#include<iostream>
class HybridCar:public Vehicle
{
private:
    int _fuel_tank_capacity;
    int _battery_capacity;
public:
    void CalculateRegistrationCharge() override;
    HybridCar(int id, std::string name, float price, VechicleType type, int fuel_capacity,int battery_capacity) ;
    HybridCar(int id, std::string name, VechicleType type,int fuel_capacity,int battery_capacity);
    HybridCar() = default;

    HybridCar(const HybridCar &) = delete;

    HybridCar &operator=(const HybridCar &) = delete;

    HybridCar(HybridCar &&) = delete;

    ~HybridCar() = default;

    HybridCar &operator=(HybridCar &&) = delete;

    int fuelTankCapacity() const { return _fuel_tank_capacity; }

    int batteryCapacity() const { return _battery_capacity; }

    friend std::ostream &operator<<(std::ostream &os, const HybridCar &rhs);
    

    
};

#endif // HYBRIDCAR_H
