#include <iostream>
#include "individualtrip.h"
#include "sharedtrip.h"

int main()
{

    individualTrip obj1("100", "SHAM", 29, 3, REGULAR, 58);
    //std::cout << obj1.calculateFare();
    std::cout << obj1.calculateFare(12.0);

    return 0;
}