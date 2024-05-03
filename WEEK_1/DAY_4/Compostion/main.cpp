#include<iostream>
#include"Functionalities.h"
#include<iostream>
int main()
{
    Container data;
    CreateObject(data);
    std::cout<<*data[0];
    std::cout<<" \n";
    std::cout<<*data[1];

}