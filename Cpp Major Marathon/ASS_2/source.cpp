#include <iostream>
#include "header.h"
Conversion::Conversion()
{
    xdistance = 0;
    ydistance = 0;
    for(int i=0;i<5;i++)
    {
        arr[i]=0;
    }
}

Conversion::Conversion(float x_Dis, float y_Dis, int *ar)
{
    xdistance = x_Dis;
    ydistance = y_Dis;
     for(int i=0;i<5;i++)
    {
        arr[i]=ar[i];
    }
}

Conversion::~Conversion()
{
    delete[] arr;
}

Conversion::Conversion(const Conversion &cv)
{
    xdistance = cv.xdistance;
    ydistance = cv.ydistance;
     for(int i=0;i<5;i++)
    {
        arr[i]=cv.arr[i];
    }
}

Conversion Conversion::operator+(Conversion &v)
{
    Conversion tempobj;
    tempobj.xdistance=xdistance+v.xdistance;
    tempobj.ydistance=ydistance+v.ydistance;
    for(int i=0;i<5;i++)
    {
        tempobj.arr[i]=tempobj.arr[i]+v.arr[i];
    }
    return tempobj;
}

Conversion& Conversion::operator++()
{
    ++this->xdistance;
    ++this->ydistance;
    return *this;
}

Conversion Conversion::operator++(int)
{
    Conversion tempobj=*this;
    this->xdistance++;
    this->ydistance++;
    return *this;
}

float Conversion::operator[](int index)
{
    std::cout<<"\nThe element return at "<<index<<" is :";
    return arr[index]*0.01;
}

int Conversion::operator==(Conversion & v)
{
    int flag=0;
    if(this->xdistance==v.xdistance && this->ydistance==v.ydistance)
    {
        flag=1;
        std::cout<<"\nThe objects are same ";
    }
    else
    {
        std::cout<<"\nThe objecta are not equal .";

    }
    
}

float Conversion::operator()()
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=this->arr[i];

    }
    std::cout<<"\nThe average is :";
    return sum/5;
}

void Conversion::display() const
{
    std::cout<<"\nThe x distance :"<<xdistance;
    std::cout<<"\nThe y distance :"<<ydistance<<"\n";
    for(int i=0;i<5;i++)
    {
        std::cout<<arr[i]<<", ";
    }
}

Conversion operator+(Conversion & v, int num)
{
    Conversion tempobj;
    tempobj.xdistance=v.xdistance+num;
    tempobj.ydistance=v.ydistance+num;
    for(int i=0;i<5;i++)
    {
        tempobj.arr[i]=v.arr[i]+num;
    }
    return tempobj;
}

 


float Conversion::getXdistance() const { return xdistance; }
void Conversion::setXdistance(float xdistance_) { xdistance = xdistance_; }

float Conversion::getYdistance() const { return ydistance; }
void Conversion::setYdistance(float ydistance_) { ydistance = ydistance_; }

