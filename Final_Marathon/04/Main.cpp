#include "Functionalities.h"

int main()
{
    PassengerContainer data;
    CreateObjects(data);
    for (auto &ptr : data)
    {
        std::cout << *ptr << std::endl;
    }
    try
    {

        std::cout << "The average of the passenger is :";
        FindAverageAge(data, PassengerType::VIP);
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "\nThe function to display the instance with passenger type "
                  << "102 :";
        DisplayTheInstance(data, "102");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
         DisplayInstanceWIthMinFare(data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   try
   {
    StoreAndDisplayNinstance(data, 2);
   }
   catch(const std::exception& e)
   {
    std::cerr << e.what() << '\n';
   }
   

    

    // std::promise<std::string> pr;

    // std::future<std::string> ft = pr.get_future();

    // std::future<void> result_ft = std::async(std::launch::async,& DisplayTheInstancewithpassengerNameGiveninfuture, std::ref(data), std::ref(ft));
    // pr.set_value("101");

    // result_ft.get();
}
