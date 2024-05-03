#include <iostream>
#include "sharedtrip.h"

sharedTrip::sharedTrip()
{

    sharedTripPassengers = 0;
}

sharedTrip::sharedTrip(std::string id, std::string driver, int distance, int rating, enum RIDE type, int pass) :
 Trip(id, driver, distance, rating, type), sharedTripPassengers(pass)
{


}

float sharedTrip::calculateFare()
{
    float fare, final_fare;
    switch (getTripVehicleType())
    {
    case 0:
        fare = getTripDistance() * 25 + sharedTripPassengers * 5;
        break;
    case 1:
        fare = getTripDistance() * 30 + sharedTripPassengers * 10;
        break;
    case 2:
        fare = getTripDistance() * 50 + sharedTripPassengers * 20;
        break;
    }
    final_fare = fare + fare * 0.18;
    return final_fare;
}

float sharedTrip::calculateFare(float surcharge)
{
    float fare, final_fare;
    switch (getTripVehicleType())
    {
    case 0:
        fare = getTripDistance() * 25 + sharedTripPassengers * 5;
        break;
    case 1:
        fare = getTripDistance() * 30 + sharedTripPassengers * 10;
        break;
    case 2:
        fare = getTripDistance() * 50 + sharedTripPassengers * 20;
        break;
    }
    final_fare = fare + fare * 0.18;
    return final_fare + final_fare * surcharge / 100;
}

bool sharedTrip::isTripAsPerStandard()
{
    int flag = 0;
    switch (getTripVehicleType())
    {
    case 0:
        if (getTripRating() >= 3)
        {
            flag = 1;
        }
        break;
    case 1:
        if (getTripRating() >= 5)
        {
            flag = 1;
        }
        break;
    case 2:
        if (getTripRating() > 4)
        {
            flag = 1;
        }
        break;
    }
    if (flag == 1)
        return true;
    else
        return false;
}