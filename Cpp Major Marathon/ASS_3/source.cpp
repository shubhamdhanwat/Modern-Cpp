#include <iostream>
#include <cstring>
#include "header.h"


Customer::Customer()
{
    customername = new char[20];
    strcpy(customername, "raj");
}
Customer::Customer(char *nm)
{
    customername = new char[sizeof(nm)+1];
    strcpy(customername, nm);
}

Customer::Customer(const Customer &c)
{
    strcpy(customername,c.customername);
}

void Customer::accept()
{
    std::cout << "\nEnter the customer name :";
    char temp[50];
    std::cin >> temp;
    customername = new char[sizeof(temp)+1];
    strcpy(customername,temp);

}

Customer::~Customer()
{
    delete customername;
}

char *Customer::getCustomername()
{
    return customername;
}
void Customer::setCustomername(char *customername_) { customername = customername_; };


std::ostream &operator<<(std::ostream & os, const Customer & v)
{
    std::cout<<"\nCustomer_Name"<<" ";
    os<<v.customername;
    return os;
       
}


