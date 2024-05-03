#include<iostream>
#include"Bill.h"
#include"header.h"
#include"Date.h"
std::ostream &operator<<(std::ostream & os, const Bill & b)
{
    std::cout<<"\nBill Number :";
    os<<b.billnumber;
    os<<b.cus;
    os<<b.d;
    std::cout<<"\nBill Amount :";
    os<<b.billamount;
    std::cout<<"\n-------";
    return os;
}

Bill::Bill()
{
    billnumber=0;
    billamount=0;

}

Bill::Bill(int b_n, char * nm, int da, int mn, int ye, int b_a):cus(nm),d(da,mn,ye)
{
    billnumber=b_n;
    billamount=b_a;


}

void Bill::accept()
{
    std::cout<<"\nEnter the bill number :";
    std::cin>>billnumber;
    cus.accept();
    d.accept();
    std::cout<<"\nEnter the bill amount :";
    std::cin>>billamount;
}

Bill::~Bill()
{
    
}

void Bill_Serach(Bill b[],char *name )
{
    

    int flag=0;
    for(int i=0;i<3;i++)
    {
        if(b[i].getCus().getCustomername()==name)
        {
            flag=1;
           // std::cout<<"Bill Number "<<b[i].getBillnumber();
            //std::cout<<"Bil Amount"<<b[i].getBillamount();
            
            std::cout<<b[i];
            break;
        }
    }
    if(flag==0)
    {
        std::cout<<"\nThe account not found .";
    }
    
}

