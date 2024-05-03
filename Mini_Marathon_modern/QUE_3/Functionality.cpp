#include "Functionality.h"
#include "OnlinePaymentCabBooking.h"
#include "CashPaymentCabBooking.h"
#include <iostream>

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<OnlinePaymentCabBooking>(
        "101",
        "pune",
        "nashik",
        1000.0f,
        PaymentMode::CARD,
        4));

    data.emplace_back(std::make_shared<OnlinePaymentCabBooking>(
        "102",
        "kalyan",
        "nashik",
        1500.0f,
        PaymentMode::CARD,
        10));

    data.emplace_back(std::make_shared<OnlinePaymentCabBooking>(
        "103",
        "pune",
        "nashik",
        1700.0f,
        PaymentMode::CARD,
        10));

    data.emplace_back(std::make_shared<CashPaymentCabBooking>(
        "104",
        "pune",
        "nahik",
        1600.0f,
        100));

    data.emplace_back(std::make_shared<CashPaymentCabBooking>(
        "105",
        "mumbai",
        "nahik",
        1900.0f,
        100));

    data.emplace_back(std::make_shared<CashPaymentCabBooking>(
        "106",
        "pune",
        "nahik",
        1600.0f,
        60));
}

container_Base FindInstances(Container &data, std::string pickup_location)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty .");
    }
    container_Base ans;
    for (Pointer &ptr : data)
    {
        if (ptr->pickupLocation() == pickup_location)
        {
            ans.emplace_back(ptr);
        }
    }
    if (ans.empty())
    {
        throw std::runtime_error("no data found.");
    }
    return ans;
}

std::string FindBookingID(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty .");
    }
    float min_fare = data[0].get()->CabFareCalculation();
    std::string ans = data[0].get()->bookingId();
    for (Pointer &ptr : data)
    {
        if (ptr->CabFareCalculation() < min_fare)
        {
            min_fare = ptr->CabFareCalculation();
            ans = ptr->bookingId();
        }
    }

    return ans;
}

Container LastNInstance(Container &data, int N)
{

    if (data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }

    Container res;
    int count = N;
    if (N < 0 || N > data.size())
    {
        throw std::runtime_error("N is not in range .");
    }
    for (int i = data.size(); N > 0; i--)
    {
        res.emplace_back(data[i - 1]);
        N--;
    }
    if (res.empty())
    {
        throw std::runtime_error("Data conatainer is empty.");
    }

    return res;
}

float FindAverage(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }

    float total = 0.0f;
    int count = 0;

    for (const Pointer &ptr : data)
    {
        if (std::shared_ptr<OnlinePaymentCabBooking> con = std::dynamic_pointer_cast<OnlinePaymentCabBooking>(ptr))
        {
            total += ptr->baseFare();
            count++;
        }
    }
    if (total == 0.0f)
    {
        throw std::runtime_error("no instance found");
    }
    return total / count;
}

bool CheckInstance(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }
    //int count =0;
    for (const Pointer &ptr : data)
    {
        if (std::shared_ptr<CashPaymentCabBooking> con = std::dynamic_pointer_cast<CashPaymentCabBooking>(ptr))
        {
            if (ptr->CabFareCalculation() < 1000)
            {
                //count++;
                return false;
            }
        }
    }
    // if(count==data.size())
    // {
    //     return true;
    // }
    return true;
}
