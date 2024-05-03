#ifndef DISELCAR_H
#define DISELCAR_H

#include <iostream>
#include "Vehicle.h"
class DiselCar : public Vehicle
{
private:
    int _fuel_tank_capacity;

public:
    void CalculateRegistrationCharge() override;

    DiselCar(int id, std::string name, float price, VechicleType type, int capacity);
    
    DiselCar(int id, std::string name, VechicleType type, int capacity);

    DiselCar() = default;

    DiselCar(const DiselCar &) = delete;

    DiselCar &operator=(const DiselCar &) = delete;

    DiselCar(DiselCar &&) = delete;

    ~DiselCar() = default;

    DiselCar &operator=(DiselCar &&) = delete;

    int fuelTankCapacity() const { return _fuel_tank_capacity; }

    friend std::ostream &operator<<(std::ostream &os, const DiselCar &rhs);
};

#endif // DISELCAR_H
