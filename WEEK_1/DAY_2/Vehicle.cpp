#include "Vehicele.h"

vehicle::vehicle(int id, std::string model, float price, VehicleType type)
: _id(id), _model_name(model), _price(price), _type(type) { }

vehicle::~vehicle()
{
    std::cout<<"Destructor called !!\n";
}