#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H

#include<memory>
#include<vector>
#include"TouristVehicle.h"

using Pointer =std::shared_ptr<TouristVehicle>;

using Container =std::vector<Pointer>;

void CreateObjects(Container & data);

Container FindAllInstance(Container & data);

float FindAverage(Container & data);

PermitType FindTouristVehicleInstance(Container & data);


Container LastNInstance(Container & data, int N);

#endif // FUNCTIONALITY_H
