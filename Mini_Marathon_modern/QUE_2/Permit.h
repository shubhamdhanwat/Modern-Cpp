#ifndef PERMIT_H
#define PERMIT_H

#include<iostream>
#include"PermitType.h"

class Permit
{
private:
    std::string _serial_number {""};
    PermitType _permit_type {PermitType::LEASE};
    int _permit_duration_left {0};
    float _permit_renewal_charge {0.0f};

public:
    Permit()=default;

    Permit(const Permit &)=delete;

    Permit &operator=(const Permit &)=delete;

    Permit(Permit &&)=delete;

    Permit & operator=(Permit &&)=delete;

    Permit(std::string serial_number, PermitType per_type, int per_dur_left, float per_charge);

    ~Permit() =default;

    std::string serialNumber() const { return _serial_number; }

    PermitType permitType() const { return _permit_type; }

    int permitDurationLeft() const { return _permit_duration_left; }

    float permitRenewalCharge() const { return _permit_renewal_charge; }

    friend std::ostream &operator<<(std::ostream &os, const Permit &rhs);
};

#endif // PERMIT_H
