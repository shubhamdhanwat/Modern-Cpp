#include<iostream>
#include"header.h"
#include"Bill.h"
#include"Date.h"


int main()
{
    
    Bill objB[3];
    for(int i=0;i<3;i++)
    {
        objB[i].accept();

    }
    for(int i=0;i<3;i++)
    {
        std::cout<<objB[i];

    }
    int total_bill=0;
    for(int i=0;i<3;i++)
    {
       total_bill+= objB[i].getBillamount();
    }
    std::cout<<"The toatal bill is :"<<total_bill;
    std::cout<<"\nEnter the name ; ";
    char* new_name;
    std::cin>>new_name;
    Bill_Serach(objB,new_name);
    return 0;
}