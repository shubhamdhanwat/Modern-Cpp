#ifndef SENSOR_H
#define SENSOR_H

#include<iostream>
#include"SensorType.h"

class Sensor
{
private:
    int _id {0};    
    std::string _name {""};
    SensorType _type {SensorType::CABIN_PRESSURE};
    int _reading {0};

public:
    Sensor()=default;

    Sensor(const Sensor &)=delete;

    Sensor &operator=(const Sensor &)=delete;

    Sensor(Sensor &&)=delete;

    Sensor & operator=(Sensor &&)=delete;

    ~Sensor() =default;

    Sensor(int id, std::string name ,SensorType type,int reading );

    int id() const { return _id; }

    std::string name() const { return _name; }

    SensorType type() const { return _type; }

    int reading() const { return _reading; }

    friend std::ostream &operator<<(std::ostream &os, const Sensor &rhs);



};



#endif // SENSOR_H
