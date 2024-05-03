#ifndef TRIP_H
#define TRIP_H

#include<iostream>

enum RIDE{
    REGULAR, COMFORT, PREMIUM
};

class Trip{
    std::string tripID;
    std::string tripDriver;
    int tripDistance;
    int tripRating;
    enum RIDE tripVehicleType;

    public:
    Trip();
    Trip(std::string, std::string, int, int, enum RIDE);

    virtual float calculateFare()=0;

    std::string getTripID()  { return tripID; }
    void setTripID( std::string &tripID_) { tripID = tripID_; }

    std::string getTripDriver() { return tripDriver; }
    void setTripDriver( std::string &tripDriver_) { tripDriver = tripDriver_; }

    int getTripDistance()  { return tripDistance; }
    void setTripDistance(int tripDistance_) { tripDistance = tripDistance_; }

    int getTripRating()  { return tripRating; }
    void setTripRating(int tripRating_) { tripRating = tripRating_; }

    enum RIDE getTripVehicleType()  { return tripVehicleType; }
    void setTripVehicleType( enum RIDE &tripVehicleType_) { tripVehicleType = tripVehicleType_; }
};

#endif // TRIP_H
