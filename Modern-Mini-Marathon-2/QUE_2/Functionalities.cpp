#include "Functionalities.h"
#include <memory>
#include <string.h>
#include <set>

void CreateObject(Container &data)
{
    data.emplace_back(std::make_shared<Product>(
        "100",
        ProductType::APPLIANCE,
        5000.0f,
        "tata",
        ProductOrigin::IMPORTED,
        100.0f));
    data.emplace_back(std::make_shared<Product>(
        "101",
        ProductType::FOOD,
        50000.0f,
        "chichen",
        ProductOrigin::DOMESTIC,
        100.0f));
    data.emplace_back(std::make_shared<Product>(
        "102",
        ProductType::APPLIANCE,
        5000.0f,
        "birla",
        ProductOrigin::IMPORTED,
        100.0f));
}

std::function<float(Container &, ProductType)> FindProductPrice = [](Container &data, ProductType p)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty ");
    }
    float pro_price = 0.0f;
    int count = 0;
    for (poiner &ptr : data)
    {
        if (ptr->proType() == p)
        {
            pro_price += ptr->productPrice();
            count++;
        }
    }

    std::cout << "The Average Product price of product with product type APPLICATION is :";
    return pro_price / count;
};

std::function<float(Container &)> FindProductTaxAmount = [](Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty ");
    }
    float max_prodct_price = data[0]->productPrice();
    float prod_tax = data[0]->productTaxAmount();
    for (poiner &ptr : data)
    {
        if (ptr->productPrice() > max_prodct_price)
        {
            max_prodct_price = ptr->productPrice();
            prod_tax = ptr->productTaxAmount();
        }
    }

    std::cout << "THe tax amount with max product price is : ";
    //<<prod_tax<<"\n";
    return prod_tax;
};

std::function<Container(Container &, int)> ReturnLastNInstances = [](Container &data, int N)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty ");
    }

    Container result;

    auto itr = data.end();

    while (N > 0)
    {
        itr--;
        N--;
        result.emplace_back(*itr);
    }

    if (result.empty())
    {
        throw std::runtime_error("Result Container is empty ");
    }

    return result;
};

std::function<Container1(Container &)> ReturnUniqueInstances = [](Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty ");
    }

    Container1 result;

    for (auto res : data)
    {
     result.emplace(res);
    }

    if (result.empty())
    {
        throw std::runtime_error("Result Container is empty ");
    }

    return result;
};

std::function<std::array<int, 2>(Container &)> ReturnArray = [](Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty ");
    }
    std::array<int, 2> arr;
    int prodttypecount = 0;
    int prodtorigcount = 0;
    for (poiner &ptr : data)
    {
        if (ptr->proType() == ProductType::FOOD)
        {
            prodttypecount++;
        }

        if (ptr->proOrigin() == ProductOrigin::DOMESTIC)
        {
            prodtorigcount++;
        }
    }
    arr[0] = prodttypecount;
    arr[1] = prodtorigcount;
    return arr;
};

std::function<Container(Container &, std::string)> ReturnContainerWithSameProductBrand = [](Container &data, std::string br)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty ");
    }

    Container result;
    for (auto ptr : data)
    {
        if (ptr->productBrand() == br)
        {
            result.emplace_back(ptr);
        }
    }

    if (result.empty())
    {
        throw std::runtime_error("Result Container is empty ");
    }

    return result;
};