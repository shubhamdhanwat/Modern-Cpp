#include "Functionalities.h"

void CreateObject(Container &data)
{
    data.emplace_back(
        std::make_shared<Customer>(
            111,
            "Shub",
            27,
            CustomerType::REGULAR,
            std::make_shared<DebitCard>(
                102,
                "SHUBHAM DHANWAT",
                "11/21",
                DebitCardType::DOMESTIC)));

    data.emplace_back(
        std::make_shared<Customer>(
            111,
            "Shubham Dhnawat",
            25,
            CustomerType::REGULAR,
            std::make_shared<DebitCard>(
                103,
                "rahul",
                "4/32",
                DebitCardType::INTERNATIONAL)

            ));
};