#include "Functionalities.h"

int main()
{
    licence_container data1;
    driver_container data2;

    createObjct(data1, data2);

    try
    {
        licence_container ans = REturn2licenseInstance(data2);
        for (auto ptr : ans)
        {
            std::cout << *ptr << "\n";
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}