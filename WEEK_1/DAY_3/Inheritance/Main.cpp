
#include<iostream>
#include "Vehicle.h"
#include "Functionalities.h"
#include"EvCar.h"
#include"DiselCar.h"
#include"PetrolCar.h"
#include"HybridCar.h"

int main()
{
    Container data;
    CreateObjects(data);
    for(int i=0;i<data.size();i++)
    {
        std::cout<<*(data[i])<<"\n";
        data[i]->CalculateRegistrationCharge();
    }
    //display(data);
    std::cout<<"\nAverage price :"<<AveragePrice(data);
    std::cout<<"\nThe registration price :";
    AllRegistration(data);
}