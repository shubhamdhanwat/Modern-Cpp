#ifndef PETROLCAR_H
#define PETROLCAR_H


#include"Vehicle.h"
#include<iostream>
class PetrolCar:public Vehicle
{
private:
    int _fuel_tank_capacity;
public:

    PetrolCar() = default;

    PetrolCar(const PetrolCar &) = delete;

    // Abstraction example using the vehcile accleration

    PetrolCar &operator=(const PetrolCar &) = delete;

    PetrolCar(PetrolCar &&) = delete;

    ~PetrolCar() = default;

    PetrolCar &operator=(PetrolCar &&) = delete;

    void CalculateRegistrationCharge() override;
    
    //override key words check if the virtual function is present in the parent class.
    //it is used for conrfirming

    int fuelTankCapacity() const { return _fuel_tank_capacity; }

    // friend std::ostream &operator<<(std::ostream &os, const PetrolCar &rhs);

    PetrolCar(int id, std::string name, float price, VechicleType type, int capacity);
    
    PetrolCar(int id, std::string name, VechicleType type,int capacity);

    friend std::ostream &operator<<(std::ostream &os, const PetrolCar &rhs);
    
};


#endif // PETROLCAR_H
