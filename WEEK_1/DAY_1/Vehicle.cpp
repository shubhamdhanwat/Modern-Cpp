#include "Vehicle.h"

Vehicle::Vehicle(int id, std::string model, float price, VechicleType type)
    : _id(id), _model_name(model), _price(price), _type(type) {}

