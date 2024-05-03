#include "Functionalities.h"
#include "DebitCard.h"

void CreateObject(Container &data) noexcept // no exception will be thrown by this function
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
            112,
            "Shubham Dhnawat",
            25,
            CustomerType::REGULAR,
            std::make_shared<DebitCard>(
                103,
                "rahul",
                "4/32",
                DebitCardType::INTERNATIONAL)

                ));
}

float AverageAge(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("errror");
    }
    float total = 0.0f;
    /*
    FOR -Each loop (range based for loop)[modern cpp]
    for every pointer called ptr present in data,
    do the following
    // what we had put in the container,here we had pointer
    //iterator are abstraction for the pointers
    // stack and queue dont have iteatros

    */
    for (Pointer &ptr : data)
    {
        // In asmart pointer used as a regular pointer
        total += ptr->age();
    }

    return total / data.size();
}
Pointer NthCustomer(Container &data, int N)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }
    if (N > data.size() || N < 1)
    {
        throw std::runtime_error("N is beyound available items");
    }

    auto itr = data.begin();

    while (N > 1)
    {
        itr++;
        N--;
    }

    return *itr;
}
int AgeOfGivenCustomerID(Container &data, int id)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }
    for (Pointer &ptr : data)
    {
        if (ptr->customerId() == id)
        {
            return ptr->age();
        }
    }
    throw std::runtime_error("Id not found");
}

// A funtion to find the cvv of debit card for customer whose id is provided as a parameter
int FindCvvofCustomer(const Container &data, const int id)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty");
    }
    for (const Pointer &ptr : data)
    {
        if (ptr->customerId() == id)
        {
            return ptr->card()->cvv();
        }
    }
    throw std::runtime_error("Id not found");
}
// findexpiryforgivencardcvv
std::string FindExpirydateofCustomer(Container &data, int cvv)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty.");
    }
    for (Pointer &ptr : data)
    {
        if (ptr->card()->cvv() == cvv)
        {
            return ptr->card()->expiry();
        }
    }
    throw std::runtime_error("CVV not found");
}
///
Container CustomerAbove50(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("The data is empty");
    }

    Container result;

    // we can use the return value optimization

    for (const Pointer &ptr : data)
    {
        if (ptr->age() > 50)
        {
            result.emplace_back(ptr);
        }
    }
    if (result.empty())
    {
        throw std::runtime_error("NO customer above 50");
    }
    return result;
}

Pointer Return_Customer(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("The data is empty");
    }

    for (Pointer &ptr : data)
    {
        if (ptr->age() > 50)
        {
            return ptr;
        }
    }
    throw std::runtime_error("afd");
}

// a function to return the debit card pointer for a customer whose id is given as input parameter
Pointer Retrun_debitCard(Container &data, int id)
{
    if (data.empty())
    {
        throw std::runtime_error("The data is empty");
    }
    for (Pointer &ptr : data)
    {
        if (ptr->customerId() == id)
        {
            return ptr;
        }
    }
    throw std::runtime_error("ID is not present ");
}

std::shared_ptr<DebitCard> DebitCardFOrGivenID(const Container &data, int id)
{
    // for constant l value  reference of type poiter with name ptr in data
    if (data.empty())
    {
        throw std::runtime_error("The data is empty");
    }
    for (const Pointer &ptr : data)
    {
        if (ptr->customerId() == id)
        {
            return ptr->card();
        }
    }
    throw std::runtime_error("ID is not present ");
}
// demo code for the noexcept
// float AveragePrice(Container & data)  noexcept(false)//no exception can not happen
// {
//     if(data.empty())
//     {
//         throw std::runtime_error("errror");
//     }
// }

// debitcardforgivenid is a function takes 2 parameterer one parameter is as constant container passed as a reference
// and one non constant integer
//  the funtion return one starndard shared ptr  debit card returns by values.