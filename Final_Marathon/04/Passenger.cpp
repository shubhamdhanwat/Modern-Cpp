#include "Passenger.h"

Passenger::Passenger(Vtypeid passengerId, std::string passengerName, int passengerAge, PassengerType passengerType, float passengerfare)
    : _passengerId(passengerId), _passengerName(passengerName), _passengerAge(passengerAge), _passengerType(passengerType), _passengerFare(passengerfare)
{
    if (passengerAge < 0 && passengerAge > 100)
    {
        std::cout << "The Passenger age is invalid :";
    }
    else
    {
        _passengerAge = passengerAge;
    }
}
std::ostream &operator<<(std::ostream &os, const Passenger &rhs)
{
    os << "_passengerId: ";
    std::visit([&](auto &&id)
               { os << id; },
               rhs._passengerId);
    os << " _passengerName: " << rhs._passengerName
       << " _passengerAge: " << rhs._passengerAge
       << " _passengerType: " << static_cast<int>(rhs._passengerType)
       << " _passengerFare: " << rhs._passengerFare;
    return os;
}
