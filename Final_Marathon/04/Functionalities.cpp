#include "Functionalities.h"

void CreateObjects(PassengerContainer &data)
{
    data.emplace_back(std::make_shared<Passenger>(
        101,
        "rahul",
        24,
        PassengerType::PREMIUM,
        500.0f));

    data.emplace_back(std::make_shared<Passenger>(
        "102",
        "rakesh",
        22,
        PassengerType::VIP,
        1000.0f));

    data.emplace_back(std::make_shared<Passenger>(
        103,
        "ketan",
        20,
        PassengerType::REGULAR,
        300.0f));
}

void FindAverageAge(PassengerContainer &data, PassengerType type)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }
    int total_age = 0;
    int count = 0;

    for (PassengePtr &ptr : data)
    {
        if (ptr->passengerType() == type)
        {
            total_age += ptr->passengerAge();
            count++;
        }
    }
    std::cout << total_age / count;
}

void DisplayTheInstance(PassengerContainer &data, Vtypeid id)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }
    PassengePtr ptr;
    for (PassengePtr &ptr : data)
    {
        if (ptr->passengerId() == id)
        {
            std::cout << *ptr << std::endl;
        }
    }
}

void DisplayInstanceWIthMinFare(PassengerContainer &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }

    PassengePtr ptr1;
    float minfare{0};
    for (PassengePtr &ptr : data)
    {
        minfare = ptr->passengerFare();
        break;
    }
    for (PassengePtr &ptr : data)
    {
        if (ptr->passengerFare() < minfare)
        {
            minfare = ptr->passengerFare();
            ptr1 = ptr;
        }
    }
    std::cout << "The instance with minimum fare is :\n"
              << *ptr1;
}

void StoreAndDisplayNinstance(PassengerContainer &data, int N)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }
    if (N < 0 || N > data.size())
    {
        throw std::runtime_error("N is not in range .");
    }
    PassengerContainer res;
    int count = N;
    while (count > 0)
    {
        res.push_back(data[N - count]);
        count--;
    }

    std::cout << "\nTHe first N instance are :\n";
    for (PassengePtr &ptr1 : res)
    {
        std::cout << *ptr1 << std::endl;
    }
}

void DisplayTheInstancewithpassengerNameGiveninfuture(PassengerContainer &data, std::future<std::string> &ft)
{
    std::string pasname = ft.get();
    PassengerContainer res;
    for (PassengePtr &ptr : data)
    {
        if (ptr->passengerName() == pasname)
        {
            res.emplace_back(ptr);
        }
    }
}
