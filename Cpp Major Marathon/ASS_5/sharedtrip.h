#include<iostream>
#include"trip.h"

class sharedTrip: public Trip{
    int sharedTripPassengers;

    public:
    sharedTrip();
    sharedTrip(std::string, std::string, int, int, enum RIDE, int);

    float calculateFare();
    float calculateFare(float);
    bool isTripAsPerStandard();

    int getSharedTripPassengers()  { return sharedTripPassengers; }
    void setSharedTripPassengers(int sharedTripPassengers_) { sharedTripPassengers = sharedTripPassengers_; }


};