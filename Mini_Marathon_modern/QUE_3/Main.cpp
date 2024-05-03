#include <iostream>
#include "Functionality.h"

int main()
{
    Container data;
    
    CreateObjects(data);

    for (Pointer &ptr : data)
    {
        std::cout << *ptr << std::endl;
    }
    std::cout << "\nTHe instance to check if pickup location is mumbai :\n";
    try
    {
        container_Base ans = FindInstances(data, "mumbai");
        for (pot &pt : ans)
        {
            std::cout << *pt << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\nTHe instance to find booking id with highest cabfare :\n";
    try
    {
        std::cout << FindBookingID(data);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\nTHe last n instances : \n";
    try
    {
        Container ans = LastNInstance(data, 2);
        for (Pointer &pt : ans)
        {
            std::cout << *pt << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\nTHe function to find the average of instance :";
    try
    {
        std::cout << FindAverage(data);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\nTHe function to check the cabfare is above 1000 : ";
    try
    {
        Container ans = LastNInstance(data, 2);
        for (Pointer &pt : ans)
        {
            std::cout << *pt << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << CheckInstance(data);
    return 0;
}