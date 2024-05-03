#include "Functionality.h"

void CreateObjets(Contianer &data)
{

    data.emplace_back(std::make_shared<Sensor>(
        101,
        "temp",
        SensorType::TEMPERATURE,
        500));

    data.emplace_back(std::make_shared<Sensor>(
        102,
        "pressure",
        SensorType::TYRE_PRESSURE,
        200));

    data.emplace_back(std::make_shared<Sensor>(
        103,
        "cabin_pressure",
        SensorType::CABIN_PRESSURE,
        20));

    data.emplace_back(std::make_shared<Sensor>(
        104,
        "tyre_pressure",
        SensorType::TYRE_PRESSURE,
        150));

    data.emplace_back(std::make_shared<Sensor>(
        105,
        "temperature",
        SensorType::TEMPERATURE,
        200));
}

bool FindInstanceReadingbelow_25(Contianer &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data Container is empty.");
    }

    for (Pointer ptr : data)
    {
        if (ptr->reading() < 25)
        {
            return false;
        }
    }
    return true;
}

int FindCountOfInstance(Contianer &data, SensorType type)
{
    if (data.empty())
    {
        throw std::runtime_error("Data Container is empty.");
    }

    int count = 0;

    for (Pointer &ptr : data)
    {
        if (ptr->type() == type)
        {
            count++;
        }
    }

    if (count == 0)
    {
        throw std::runtime_error("NO data found.");
    }

    return count;
}

std::string FindInstanceName(Contianer &data, int id, SensorType type)
{
    if (data.empty())
    {
        throw std::runtime_error("Data Container is empty.");
    }

    for (Pointer &ptr : data)
    {
        if (ptr->id() == id && ptr->type() == type)
        {
            return ptr->name();
        }
    }

    throw std::runtime_error("NO data found of specific type and id.");
}

Contianer FindtheInstance(Contianer &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data Container is empty.");
    }
    Contianer res;

    for (Pointer &ptr : data)
    {
        if (ptr->reading() >= 15 && ptr->type() == SensorType::TYRE_PRESSURE)
        {
            res.emplace_back(ptr);
        }
    }
    if (res.empty())
    {
        throw std::runtime_error("NO data found .");
    }
    return res;
}
