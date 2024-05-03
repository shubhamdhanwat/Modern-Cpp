#include <iostream>
#include "header.h"

Iventory::Iventory()
{
    description_of_product = "product";
    Balancestock = 21;
    Productcode = 10;
}

Iventory::Iventory(std::string des_pro, int bal_stock, int pro_code)
{
    description_of_product = des_pro;
    if (bal_stock > 20)
    {
        Balancestock = bal_stock;
    }
    else
    {
        std::cout << "\nEnter the stock is greater than 20";
    }
    Productcode = pro_code;

}

void Iventory::purchase(Iventory arr[],  int index)
{
    int new_Stock;
    std::cout<<"\nEnter the no of socks you want to add :";
    std::cin>>new_Stock;
    arr[index].Balancestock+=new_Stock;
}



void Iventory::sale(Iventory arr[],  int index)
{
    int red_Stock;
    std::cout<<"\nEnter the no of socks you want to add :";
    std::cin>>red_Stock;
    if(arr[index].Balancestock>20)
    {
        arr[index].Balancestock-=red_Stock;

    }
    else
    {
        std::cout<<"\nThe stock size is at minimum stock leverl .";
    }
    
}


void search(Iventory arr[], int pro_code)
{
    int flag=1;
    for(int i=0;i<3;i++)
    {
        if(arr[i].get_productcode()==pro_code)
        {
            std::cout<<"\nThe Product is found .";
            flag=0;
        }

    }
    if(flag==1)
    {
               
        
            std::cout<<"\nThe product is not found .";
        
    }
}

void Iventory::display()
{
    std::cout<<"\nThe description_of_product = ";
    std::cout<<description_of_product;
    std::cout<<"\nThe Balancestock =";
    std::cout<<Balancestock;
    std::cout<<"\nThe product code =";
    std::cout<<Productcode<<"\n";
}
