#ifndef PASSENGER_H
#define PASSENGER_H
#include<iostream>
#include"PassengerType.h"
#include<variant>
#include<string.h>

using Vtypeid =std::variant<int,std::string>;
class Passenger
{
private:
    Vtypeid _passengerId;
    std::string _passengerName;
    int _passengerAge;
    PassengerType _passengerType;
    float _passengerFare;
   
public:

    Passenger(Vtypeid passengerId, std::string passengerName, int passengerAge, PassengerType passengerType,float passengerfare);
    // default constructor
    Passenger() = default;
    // copy constructor
    Passenger(const Passenger &) = delete;
    // copy assignment
    Passenger &operator=(Passenger &) = delete;
    // move constructor
    Passenger(Passenger &&) = delete;
    // move assignment
    Passenger &operator=(Passenger &&) = delete;
    // deafault destructor
    ~Passenger() = default;

    Vtypeid passengerId() const { return _passengerId; }

    std::string passengerName() const { return _passengerName; }

    int passengerAge() const { return _passengerAge; }

    PassengerType passengerType() const { return _passengerType; }

    float passengerFare() const { return _passengerFare; }

    friend std::ostream &operator<<(std::ostream &os, const Passenger &rhs);


};



#endif // PASSENGER_H
