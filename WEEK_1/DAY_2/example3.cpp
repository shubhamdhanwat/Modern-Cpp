#include<iostream>

/*
    file open
    database connection
*/
#include"Vehicele.h"
#include"vehicleType.h"
#include<memory>

int main(){

    // vehicle *ptr = new vehicle("4012","city",140000.0f,VehicleType :: PERSONAL); // pointer

    // vehicle *ptr = std ::make_shared<vehicle>("4012","city",140000.0f,VehicleType :: PERSONAL); // smart pointer

    std :: shared_ptr <vehicle> ptr = std :: make_shared <vehicle> (
        1008,
        "City",
        14009.0f,
        VehicleType :: PERSONAL
    );
}

/*
    RAII: Resource Acquisition Is Initialization

    1) When we acquire resource, something is initialized.
    2) If i want to acquire resource then I must acquire it 
    while initializing "something"
*/