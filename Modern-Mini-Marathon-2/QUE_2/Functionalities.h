#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Product.h"
#include<memory>
#include<iostream>
#include<vector>
#include<functional>
#include<array>
#include<set>

using poiner =std::shared_ptr<Product>;
using Container =std::vector<poiner>;

using Container1 = std::set<poiner>;

void CreateObject(Container & data);

extern std::function<float(Container &,ProductType)> FindProductPrice;
extern std::function<float(Container &)> FindProductTaxAmount;
extern std::function<Container(Container &,int)> ReturnLastNInstances;
extern std::function<Container1(Container &)> ReturnUniqueInstances;
extern std::function<std::array<int,2>(Container &)> ReturnArray;
extern std::function<Container(Container &,std::string )> ReturnContainerWithSameProductBrand;

#endif // FUNCTIONALITIES_H
