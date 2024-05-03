#include <iostream>
#include "trip.h"

Trip::Trip()
{
    tripID = "0";
    tripDriver = "rahul";
    tripDistance = 100;
    tripRating = 5;
}

Trip::Trip(std::string id, std::string driver, int distance, int rating, enum RIDE type) :
 tripID(id), tripDriver(driver), tripDistance(distance), tripRating(rating), tripVehicleType(type)
{

}