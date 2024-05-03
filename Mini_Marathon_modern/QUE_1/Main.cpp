
#include <iostream>
#include "Functionality.h"
#include "Sensor.h"

int main()
{
    Contianer data;
    CreateObjets(data);
    for (Pointer &ptr : data)
    {
        std::cout << *(ptr) << std::endl;
    }

    std::cout << "\nAll instance with reading value below 25: ";
    try
    {
        std::cout << FindInstanceReadingbelow_25(data);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\nCount of instance with sensor type temperature :";
    try
    {
        std::cout << FindCountOfInstance(data, SensorType::TEMPERATURE);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\nName of the instance whose id=101 and type is temperature :";
    try
    {
        std::cout << FindInstanceName(data, 101, SensorType::TEMPERATURE);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\nAll instance with reading value above 15 and sensor type typre_pressure :";
    try
    {
        Contianer ans = FindtheInstance(data);
        for (Pointer &ptr : ans)
        {
            std::cout << *(ptr) << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}