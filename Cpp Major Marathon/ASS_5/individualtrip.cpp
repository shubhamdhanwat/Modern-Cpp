#include <iostream>
#include "individualtrip.h"

individualTrip::individualTrip()
{
    individualTripDuration = 0;
}

individualTrip::individualTrip(std::string id, std::string driver, int distance, int rating, enum RIDE type, int duration)
 : Trip(id, driver, distance, rating, type), individualTripDuration(duration) 
 {

    
 }

float individualTrip::calculateFare()
{
    float fare, total_fare;
    switch (getTripVehicleType())
    {
    case 0:
        fare = getTripDistance() * 25;
        break;
    case 1:
        fare = getTripDistance() * 30;
        break;
    case 2:
        fare = getTripDistance() * 50;
        break;
    }
    total_fare = fare + fare * 0.18;
    return total_fare;
}

float individualTrip::calculateFare(float sur)
{
    float fare, total_fare;
    switch (getTripVehicleType())
    {
    case 0:
        fare = getTripDistance() * 25;
        break;
    case 1:
        fare = getTripDistance() * 30;
        break;
    case 2:
        fare = getTripDistance() * 50;
        break;
    }
    total_fare = fare + fare * 0.18;
    return total_fare + ((total_fare * sur)/100) ;
}

bool individualTrip::isTripAsPerStandard()
{
    int flag = 0;
    switch (getTripVehicleType())
    {
    case 0:
        if (getTripRating() >= 3 && getIndividualTripDuration() <= 3 * getTripDistance())
        {
            flag = 1;
        }
        break;
    case 1:
        if (getTripRating() >= 5 && getIndividualTripDuration() <= 3 * getTripDistance())
        {
            flag = 1;
        }
        break;
    case 2:
        if (getTripRating() > 4 && getIndividualTripDuration() <= 4 * getTripDistance())
        {
            flag = 1;
        }
        break;
    }
    if (flag == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}