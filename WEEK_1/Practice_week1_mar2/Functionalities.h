#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Car.h"
#include <vector>
#include <memory>

//using alias Pointer for standard shared ptr of car
using Pointer = std::shared_ptr<Car>;

//using alias Containter for standard vector of pointer
using Container = std::vector<Pointer>;

void CreateObject(Container &data) ;

void Display(Container & data);

int FindEngineHorsePower(Container & data, std::string id);

Container CarEngineTorqueAbove80(const Container &data);

using Poi = std::shared_ptr<Engine>;
using Container_eng = std::vector<Poi>;
//std::vector<std::shared_ptr<Engine>>;
Container_eng FindCarEngine(Container & data, CarType car_type);

float AverageOfCarHorsePower(Container & data);

std::string FindCarid(Container &data);

//float FindComibinedPriceOfCar(Container & data,int size);
float FindCombinedPriceOfInstanceofcar(std::shared_ptr<Car> c1,std::shared_ptr<Car> c2);

#endif // FUNCTIONALITIES_H
