#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H

#include<iostream>
#include"memory"
#include"Permit.h"
#include"TouristVehicleType.h"

class TouristVehicle
{
private:
    std::string _number {""};
    VehiceType _type {VehiceType::BIKE};
    int _seat_count {0};
    std::shared_ptr<Permit> _permit;
   

public:

    TouristVehicle()=default;

    TouristVehicle(const TouristVehicle &)=delete;

    TouristVehicle &operator=(const TouristVehicle &)=delete;

    TouristVehicle(TouristVehicle &&)=delete;

    TouristVehicle & operator=(TouristVehicle &&)=delete;

    TouristVehicle(std::string number, VehiceType v_type,int seat_count, std::shared_ptr<Permit> permit);

    ~TouristVehicle() =default;

    std::string number() const { return _number; }

    VehiceType type() const { return _type; }

    int seatCount() const { return _seat_count; }

    std::shared_ptr<Permit> permit() const { return _permit; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);
};

#endif // TOURISTVEHICLE_H
