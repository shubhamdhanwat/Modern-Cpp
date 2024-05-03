#include"Functionalities.h"

int main()
{
    Container data;
    CreateObject(data);
    try
    {
        AveragePrice(data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        FindBrandName(data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        CheckInstance(data,VehicleType::DIESEL,2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        FindIfAllInstanceAreBelowThresholdPrice(data,100000.0f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}