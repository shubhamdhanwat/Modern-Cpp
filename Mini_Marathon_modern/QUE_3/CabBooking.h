#ifndef CABBOOKING_H
#define CABBOOKING_H
#include<iostream>

class CabBooking
{
private:
    std::string _booking_id {"0"};
    std::string _pickup_location {"mumbai"};
    std::string _drop_location {"pune"};
    float _base_fare{0.0f};

public:
    CabBooking()=default;

    CabBooking(const CabBooking &)=delete;

    CabBooking &operator=(const CabBooking &)=delete;

    CabBooking(CabBooking &&)=delete;

    CabBooking & operator=(CabBooking &&)=delete;

    ~CabBooking() =default;
    
    CabBooking(std::string bookingid, std::string pickup_location ,std::string drop_loaction,float base_fare);
    
    virtual float CabFareCalculation()=0;

    std::string bookingId() const { return _booking_id; }

    std::string pickupLocation() const { return _pickup_location; }

    std::string dropLocation() const { return _drop_location; }

    float baseFare() const { return _base_fare; }

    friend std::ostream &operator<<(std::ostream &os, const CabBooking &rhs);
};

#endif // CABBOOKING_H
