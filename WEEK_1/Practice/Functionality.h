#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H

#include"Vehicle.h"
#include<memory>
#include<vector>
#include<iostream>

using pointer = std::shared_ptr<Vehicle>;
using container =std::vector<pointer>;

void createObjects(container & data);

#endif // FUNCTIONALITY_H
