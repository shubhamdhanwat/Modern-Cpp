#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H

#include"Sensor.h"
#include<iostream>
#include<memory>
#include<vector>
#include<functional>


using Pointer = std::shared_ptr<Sensor>;

using Contianer =std::vector<Pointer> ;

//Function to crete the objects
void CreateObjets(Contianer & data);

//Function to find wheather all instance of the sensor show reading below 25
bool FindInstanceReadingbelow_25(Contianer & data);

//function to count the sensor of specific sensor type
int FindCountOfInstance(Contianer & data,SensorType type);

//function to return the name of the sensor whose id and type match with the data
std::string FindInstanceName(Contianer & data,int id,SensorType type);

//function to find the instance whose readint is above 15 and sensor type is tyre pressure
Contianer FindtheInstance(Contianer & data);



#endif // FUNCTIONALITY_H
