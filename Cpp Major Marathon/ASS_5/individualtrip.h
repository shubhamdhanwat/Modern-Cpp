#ifndef INDIVIDUALTRIP_H
#define INDIVIDUALTRIP_H

#include <iostream>
#include "trip.h"

class individualTrip : public Trip
{
    int individualTripDuration;

public:
    individualTrip();
    individualTrip(std::string, std::string, int, int, enum RIDE, int);

    int getIndividualTripDuration() { return individualTripDuration; }
    void setIndividualTripDuration(int individualTripDuration_) { individualTripDuration = individualTripDuration_; }

    float calculateFare();
    float calculateFare(float);
    bool isTripAsPerStandard();
};

#endif // INDIVIDUALTRIP_H
