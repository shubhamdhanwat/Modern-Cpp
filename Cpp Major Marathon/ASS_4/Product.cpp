#include "Product.h"
#include <iostream>
#include <cstring>
Product::Product()
{
    productid = 0;
    name = "kamal";
    strcpy(brand, "apple");
    price = 100;
    typeofproduct = MobilePhone;
    taxamount = 0;
}

void Product::accept()
{
    std::cout << "\nEnter the producnt id: ";
    std::cin >> productid;
    std::cout << "\nEnter the product name :";
    std::cin >> name;
    std::cout << "\nEnter the brand name :";
    std::cin >> brand;
    std::cout << "\nEnter the price :";
    std::cin >> price;
    std::cout << "\nEnter the producnt type :";
    std::cout << "\n1.MOBILEPHONE \n2.Laptop \n3.TV";
    int choice;
    std::cout << "\nEnter the choice :";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        typeofproduct = MobilePhone;
        break;
    case 2:
        typeofproduct = Laptop;
        break;
    case 3:
        typeofproduct = TV;
        break;

    default:
        std::cout << "\nEnter the valid choice .";
        break;
    }
}

Product::~Product()
{

}

char Product::operator[](int index)
{

    return brand[index];
}

bool Product::operator==(const Product &p)
{
    int flag = 0;
    if (this->productid == p.productid)
    {
        flag = 1;
        std::cout << "\nThe product is found";
        return true;
    }
    if (flag == 0)
    {
        std::cout << "\nThe product not found ";
    }

    return false;
}

std::ostream &operator<<(std::ostream &os, const Product &v)
{
    std::cout << "\nThe product id";
    os << v.productid;
    std::cout << "\nThe Producnt name";
    os << v.name;
    std::cout << "\nThe brand name";
    os << v.brand;
    std::cout << "\nThe Price";
    os << v.price;
    std::cout << "\nThe type of product ";
    os << v.typeofproduct;
    std::cout << "\nThe tax amount ";
    os << v.taxamount;
    return os;
}

void searchproductbytype(Product arr[], ProductType p)
{
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i].getTypeofproduct() == p)
        {
            flag = 1;
            std::cout << arr[i];
            break;
        }
    }
    if (flag == 0)
    {
        std::cout << "\nThe product is not found.";
    }
}

void serachproductbybrand(Product arr[], char *b)
{
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(arr[i].getBrand(), b))
        {
            flag = 1;
            std::cout << arr[i];
            break;
        }
    }
    if (flag == 0)
    {
        std::cout << "\nThe product is not found.";
    }
}

void searchproductbyid(Product arr[], long int id)
{
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i].getProductid() == id)
        {
            flag = 1;
            std::cout << arr[i];
            break;
        }
    }
    if (flag == 0)
    {
        std::cout << "\nThe product is not found.";
    }
}

void displayproductwithhighestprice(Product arr[])
{
    int highest_price = 0;
    for (int i = 0; i < 3; i++)
    {
        if (highest_price < arr[i].getPrice())
        {
            highest_price = arr[i].getPrice();
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int flag = 0;
        for (int i = 0; i < 3; i++)
        {
            if (arr[i].getPrice() == highest_price)
            {
                flag = 1;
                std::cout << arr[i];
                break;
            }
        }
        if (flag == 0)
        {
            std::cout << "\nThe product is not found.";
        }
    }
}

float calcualteaverageprice(Product arr[])
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=arr[i].getPrice();
    }
    return sum/3;
}

float calculatetoataltaxamount(Product arr[])
{
    int tax=0;
    for(int i=0;i<3;i++)
    {
        if(arr[i].getPrice()>10000)
        {
            tax+=arr[i].getTaxamount();
        }
    }
    return tax;
}
