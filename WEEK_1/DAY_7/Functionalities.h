#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H 
#include<memory>
#include<iostream>
#include "Employee.h"
#include<vector>
#include<list>


using Pointer = std::shared_ptr<Employee>;

using Container_list = std::list<Pointer>;

using Vectorcontainter =std::vector<Pointer>;

void creteObject(Container_list &  l1, Vectorcontainter & v1);

#endif // FUNCTIONALITIES_H
