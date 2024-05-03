#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Driver.h"
#include<functional>
#include<memory>
#include<vector>

using licPointer=std::shared_ptr<License>;
using drivrpointer=std::shared_ptr<Driver>;

using licence_container = std::vector<licPointer>;
using driver_container= std::vector<drivrpointer>;

void createObjct(licence_container & data1,driver_container & data2);
extern std::function<licence_container( driver_container&data2)> REturn2licenseInstance;


#endif // FUNCTIONALITIES_H
