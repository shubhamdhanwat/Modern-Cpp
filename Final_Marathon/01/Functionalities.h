#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"ElectricVehicle.h"
#include"ICEngineVehicle.h"
#include<memory>
#include<list>
#include<variant>
#include<algorithm>
#include<numeric>

using ElectricVehiclePointer = std::shared_ptr<ElectricVehicle>;
using ICEnginePointer = std::shared_ptr<ICEngineVehicle>;
using VType = std::variant<ElectricVehiclePointer,ICEnginePointer>;
using Container = std::list<VType>;

void CreateObject(Container & data);

void AveragePrice(Container & data);

void FindBrandName(Container & data);

void FindIfAllInstanceAreBelowThresholdPrice(Container & data,float threshold);

void CheckInstance(Container & data,VehicleType vec,int N);

#endif // FUNCTIONALITIES_H
