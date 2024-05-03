#include<iostream>
#include"Functionalities.h"


int main()
{
    Container data;
    CreateObject(data);
    // std::cout<<*data[0];
    // std::cout<<" \n";
    // std::cout<<*data[1];
    std::cout<<"Engine Horse Power :"<<FindEngineHorsePower(data,"101")<<" \n\n";
    std::cout<<"Cars with Engine torque above 80 : \n";
    try
    {
        Container ans =CarEngineTorqueAbove80(data);
        
        for (const Pointer &ptr : ans)
        {
            std::cout << *ptr << "\n";
        }
    }
    catch (const std::runtime_error &ex)
    {
        std::cout << ex.what() << "\n";
    }

    std::cout<<"\nThe car engine with car type SUV :";

    try
    {
        Container_eng ans =FindCarEngine(data,CarType::SUV);
        
        for (const Poi &ptr : ans)
        {
            std::cout << *ptr << "\n";
        }
    }
    catch (const std::runtime_error &ex)
    {
        std::cout << ex.what() << "\n";
    }
    
    std::cout<<"\nAverage of the horsepower of the car :"<<AverageOfCarHorsePower(data);
    std::cout<<"\nThe car id with the smallest price is :"<<FindCarid(data);
    std::cout<<"\nThe combined price of the cars : "<<FindCombinedPriceOfInstanceofcar(data[0],data[1]);
    
    return 0;
}