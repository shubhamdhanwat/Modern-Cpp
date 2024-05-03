#include<iostream>
#include"Functionality.h"


int main()
{
    Container data;
    CreateObjects(data);

    for(Pointer & ptr:data)
    {
        std::cout<<*ptr<<std::endl;
    }

        std::cout<<"\nThe function to return instance with seat count at least 4 and permit type LEASE:";

    try
    {
        Container ans=FindAllInstance(data);
        for(Pointer & ptr:ans)
        {
            std::cout<<*ptr<<std::endl;
        }

    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    std::cout<<"\nThe function to return average of permit duration of instance with type CAB:";

    try
    {
       std::cout<<FindAverage(data);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    

   std::cout<<"\nThe function to return permit type of instance whose permit renewal charge is mimimum:";

    try
    {
        std::cout<<static_cast<int>(FindTouristVehicleInstance(data)) ;
    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    

std::cout<<"\nLast N instances :\n";
    try
    {
        int N=2;
        Container ans=LastNInstance(data,N);
        for(Pointer & ptr:ans)
        {
            std::cout<<*ptr<<std::endl;
        }
    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
    
    return 0;
}