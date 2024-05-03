#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<vector>
#include<memory>
#include"Customer.h"
using Pointer =std::shared_ptr<Customer>;
using Container =std::vector<Pointer>;

void CreateObject(Container &data);
//cotainer is the shared ptr to standard vector 

#endif // FUNCTIONALITIES_H
