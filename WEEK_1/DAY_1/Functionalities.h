#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Vehicle.h"
/*
    accept a pointer to an array of pointers.
    Intitialize objects on heap,
     store their address in the array.

*/

void CreateObjects(Vehicle **arr, const int size); //(Vehicle * arr[3])

/*
    Loop over instances.
    Calculate the total price and divide it by number of instances

*/
float AveragePrice(Vehicle **arr, const int size);

/*
    return _id of vechicle with lowest price
*/

int LowestPriceId(Vehicle **arr, const int size);

#endif // FUNCTIONALITIES_H
