#include "OnlinePaymentCabBooking.h"
#include"CabBooking.h"

OnlinePaymentCabBooking::OnlinePaymentCabBooking(std::string bookingid, std::string pickup_location, std::string drop_loaction, float base_fare, PaymentMode PaymentMode, int drop_stops_count)
:CabBooking(bookingid,pickup_location,drop_loaction,base_fare),_payment_mode(PaymentMode),_drop_stops_count(drop_stops_count)
{
}
float OnlinePaymentCabBooking::CabFareCalculation()
{
    float total_fare;
    if(paymentMode()==PaymentMode::CARD || paymentMode()==PaymentMode::UPI)
    {
        total_fare=baseFare()*dropStopsCount();
    }
    else if(paymentMode()==PaymentMode::ONLINE_WALLET)
    {
        total_fare=baseFare()+baseFare()*0.10;
    }
    else
    {
        total_fare=baseFare();
    }
    return total_fare;
}
std::ostream &operator<<(std::ostream &os, const OnlinePaymentCabBooking &rhs)
{
    os << static_cast<const CabBooking &>(rhs)
       << " _payment_mode: " <<static_cast<int>(rhs._payment_mode) 
       << " _drop_stops_count: " << rhs._drop_stops_count;
    return os;
}
