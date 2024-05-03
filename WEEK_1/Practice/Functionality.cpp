#include "Functionality.h"

void createObjects(container &data)
{
    data.emplace_back(std::make_shared<Vehicle>(101,"tata",120000.f,VehicleType::PUBLIC));
    
}