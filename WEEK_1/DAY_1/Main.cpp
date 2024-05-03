#include <iostream>
#include "Vehicle.h"
#include "Functionalities.h"
int main()
{
    // always initallized the variable
    const int size = 3;

    Vehicle *arr[3] = {nullptr}; // array of 3 vechile pointers

    CreateObjects(arr, size);
    /*
    Average  price should be calculated for all instances stored in the array by CreateObjects
    */
    float ans = AveragePrice(arr, size);

    std::cout<<"The Average :"<<ans<<"\n";
    /*
     min price finction
    */
    int id = LowestPriceId(arr, size);

    std::cout<<"Lowest Price id :"<<id<<"\n";

}
