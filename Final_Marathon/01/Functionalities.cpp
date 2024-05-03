#include "Functionalities.h"

void CreateObject(Container &data)
{
    data.emplace_back(std::make_shared<ElectricVehicle>(
        VehicleType::DIESEL,
        1000000.0f,
        "Tata",
        4));

    data.emplace_back(std::make_shared<ElectricVehicle>(
        VehicleType::PETROL_HYBRID,
        1500000.0f,
        "Mahindra",
        5));

    data.emplace_back(std::make_shared<ICEngineVehicle>(
        VehicleType::PETROL,
        1200000.0f,
        "kia",
        4));

    data.emplace_back(std::make_shared<ICEngineVehicle>(
        VehicleType::DIESEL,
        1200000.0f,
        "harrier",
        5));
}

void AveragePrice(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty data");
    }
    float totalPrice = 0.0f;


    for (const VType &v : data)
    {
        std::visit(
            [&](auto &&val)
            {
                totalPrice = totalPrice + val->Price();
            },
            v);
    }

    std::cout << "The average price is :" << totalPrice / data.size() << std::endl;
}

void FindBrandName(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty data");
    }

    float minprice{0};
    std::string brand_name{"null"};
    auto itr = data.begin();
    std::visit(
        [&](auto &&ptr)
        {
            minprice = ptr->Price();
            brand_name = ptr->Brand();
        },
        *itr);

    for (const VType &v : data)
    {
        std::visit(
            [&](auto &&val)
            {
                if (minprice > val->Price())
                {
                    minprice = val->Price();
                    brand_name = val->Brand();
                }
            },
            v);
    }
    std::cout << "The Brand with lowest price :" << brand_name << std::endl;
}

void FindIfAllInstanceAreBelowThresholdPrice(Container &data, float threshold)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty data");
    }
    int count = 0;
    for (const VType &v : data)
    {
        std::visit(
            [&](auto &&val)
            {
                if (val->Price() < threshold)
                {
                    count++;
                }
            },
            v);
    }
    if (count == data.size())
    {
        std::cout << "All the instance have the price lower than the threshold .\n";
    }
    else
    {
        std::cout << "All the instance dont have the price lower than the threshold .\n";
    }
}

void CheckInstance(Container &data, VehicleType vec, int N)
{
    if (data.empty())
    {
        throw std::runtime_error("Empty data");
    }
    int count = 0;
    for (const VType &v : data)
    {
        std::visit(
            [&](auto &&val)
            {
                if (val->Type() == vec && val->SeatCount() == 4)
                {
                    count++;
                }
            },
            v);
    }
    if (count == N)
    {
        std::cout << "The N instances in the container matches the conditions.\n";
    }
    else
    {
        std::cout << "THe N instances in the container does not matches the condtions.\n";
    }
}

 