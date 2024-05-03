#include <iostream>
#include "Functionalities.h"
#include <iostream>
int main()
{
    Container data;
    CreateObject(data);

    // std::cout<<*data[0];
    // std::cout<<" \n";
    // std::cout<<*data[1];
    std::cout << "\nThe nth object :" << *NthCustomer(data, 1);

    std::cout << "\n Age of the Customer :" << AgeOfGivenCustomerID(data, 111);
    std::cout << "\n CVV of the Customer :" << FindCvvofCustomer(data, 111);
    std::cout << "\n Expiry data of the debit card :" << FindExpirydateofCustomer(data, 103);
    std::cout << "\n Debit card :" << *Retrun_debitCard(data, 111);

    try
    {
        Container ans = CustomerAbove50(data);
        
        for (const Pointer &ptr : data)
        {
            std::cout << *ptr << "\n";
        }
    }
    catch (const std::runtime_error &ex)
    {
        std::cout << ex.what() << "\n";
    }

    return 0;
    // base adddress +size*i
    // iterator are abstaction over pointers so that we can traverse over the elemets in the containters
    // without knowing the formula
}