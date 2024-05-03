#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H

#include<iostream>
#include<vector>
#include<memory>
#include"CabBooking.h"

using Pointer = std::shared_ptr<CabBooking>;

using Container =std::vector<Pointer>;

void CreateObjects(Container & data);

using pot=std::shared_ptr<CabBooking>;

using container_Base =std::vector<pot>;

container_Base FindInstances(Container & data,std::string pickup_location);

std::string FindBookingID(Container & data);

Container LastNInstance(Container & data, int N);

float FindAverage(Container & data);

bool CheckInstance(Container & data);
#endif // FUNCTIONALITY_H
