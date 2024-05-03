#include "CashPaymentCabBooking.h"
#include"CabBooking.h"

CashPaymentCabBooking::CashPaymentCabBooking(std::string bookingid, std::string pickup_location, std::string drop_loaction, float base_fare, int reward_points_claimed)
:CabBooking(bookingid,pickup_location,drop_loaction,base_fare),_reward_points_claimed(reward_points_claimed)
{
}

std::ostream &operator<<(std::ostream &os, const CashPaymentCabBooking &rhs) {
    os << static_cast<const CabBooking &>(rhs)
       << " _reward_points_claimed: " << rhs._reward_points_claimed;
    return os;
}

float CashPaymentCabBooking::CabFareCalculation()
{
    float total_fare;
    if(rewardPointsClaimed()<0.25*baseFare())
    {
        total_fare=2*baseFare();

    }
    else if(rewardPointsClaimed()>=0.25*baseFare())
    {
        total_fare=1.5*baseFare();

    }
    else
    {
        total_fare= baseFare();
    }
    return total_fare;
}