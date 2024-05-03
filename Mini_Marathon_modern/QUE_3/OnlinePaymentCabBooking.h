#ifndef ONLINEPAYMENTCABBOOKING_H
#define ONLINEPAYMENTCABBOOKING_H
#include"CabBooking.h"
#include"PaymeentMode.h"
#include <ostream>
class OnlinePaymentCabBooking :public CabBooking
{
private:
    PaymentMode _payment_mode;
    int _drop_stops_count;

    
public:
    OnlinePaymentCabBooking()=default;

    OnlinePaymentCabBooking(const OnlinePaymentCabBooking &)=delete;

    OnlinePaymentCabBooking &operator=(const OnlinePaymentCabBooking &)=delete;

    OnlinePaymentCabBooking(OnlinePaymentCabBooking &&)=delete;

    OnlinePaymentCabBooking & operator=(OnlinePaymentCabBooking &&)=delete;

    ~OnlinePaymentCabBooking() =default;

    OnlinePaymentCabBooking(std::string bookingid, std::string pickup_location, std::string drop_loaction, float base_fare, PaymentMode PaymentMode,int drop_stops_count);
    
    float CabFareCalculation() override ;

    PaymentMode paymentMode() const { return _payment_mode; }

    int dropStopsCount() const { return _drop_stops_count; }

    friend std::ostream &operator<<(std::ostream &os, const OnlinePaymentCabBooking &rhs);
};

#endif // ONLINEPAYMENTCABBOOKING_H
