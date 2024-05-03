#ifndef CASHPAYMENTCABBOOKING_H
#define CASHPAYMENTCABBOOKING_H
#include"CabBooking.h"
#include <ostream>
class CashPaymentCabBooking:public CabBooking
{
private:
    int _reward_points_claimed;

public:
    CashPaymentCabBooking()=default;

    CashPaymentCabBooking(const CashPaymentCabBooking &)=delete;

    CashPaymentCabBooking &operator=(const CashPaymentCabBooking &)=delete;

    CashPaymentCabBooking(CashPaymentCabBooking &&)=delete;

    CashPaymentCabBooking & operator=(CashPaymentCabBooking &&)=delete;

    ~CashPaymentCabBooking() =default;

    CashPaymentCabBooking(std::string bookingid, std::string pickup_location, std::string drop_loaction, float base_fare, int reward_points_claimed);

    float CabFareCalculation() override;

    int rewardPointsClaimed() const { return _reward_points_claimed; }

    friend std::ostream &operator<<(std::ostream &os, const CashPaymentCabBooking &rhs);

};

#endif // CASHPAYMENTCABBOOKING_H
