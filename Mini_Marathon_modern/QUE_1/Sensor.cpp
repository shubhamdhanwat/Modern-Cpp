#include"Sensor.h"

std::ostream &operator<<(std::ostream &os, const Sensor &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _type: " <<static_cast<int>(rhs._type) 
       << " _reading: " << rhs._reading;
    return os;
}

Sensor::Sensor(int id, std::string name, SensorType type, int reading)
:_id(id),_name(name),_type(type),_reading(reading)
{

    if(reading<0 && reading>20 && reading/10==0)
    {
        std::cout<<"The reading is invalid please enter the reading again :";
        std::cin>>_reading;
    }

}
