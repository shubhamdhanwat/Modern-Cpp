#include "Functionalities.h"
#include <iostream>
#include <array>
int main()
{
    Container data;

    try
    {
        CreateObject(data);

        std::cout << FindProductPrice(data, ProductType::APPLIANCE)<<"\n";

        std::cout << FindProductTaxAmount(data)<<"\n";

        std::cout<<"The last N instances :"<<"\n";
        Container res = ReturnLastNInstances(data, 2);
        for (auto ptr : res)
        {
            std::cout << *ptr << std::endl;
        }

        std::cout << "The array containig the count of FOOD product type and Domestic product origin is:";
        std::array<int, 2> arr2 = ReturnArray(data);
        std::cout << "The count of food product type :"<<arr2[0] <<std::endl<<"The count of domestic product origin :"<< arr2[1]<<"\n";

        std::cout<<"The instance with tata brand :"<<"\n";
        Container ans3=ReturnContainerWithSameProductBrand(data,"tata");
        for (auto ptr : ans3)
        {
            std::cout << *ptr << std::endl;
        }



        std::cout<<"The unique instances :"<<"\n";

        Container1 result2 = ReturnUniqueInstances(data);
        for (auto ptr : result2)
        {
            std::cout << *ptr << std::endl;
        }

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}