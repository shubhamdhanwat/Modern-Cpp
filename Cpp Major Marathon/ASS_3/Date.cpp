#include "Date.h"
#include<iostream>
Date::Date()
{
    day=10;
    month=6;
    year=2005;

}

Date::Date(int d, int m, int y)
{
    day=d;
    month=m;
    year=y;

}

void Date::accept()
{

    std::cout<<"\nEnter the month :";
    std::cout<<"\nThe month should be from 1-12 .";
    std::cin>>month;
    if(month>=1 && month <=12)
    {
        if(month==2)
        {
            std::cout<<"\nEnter the days :";
            std::cout<<"\nThe month is february so the days can be from 1-28 .";
            std::cin>>day;
            if(day<1 && day>29)
            {
                std::cout<<"\nThe day is invalid .\n Enter the new  day";
                std::cin>>day;
            }


        }
        else
        {
            std::cout<<"Enter the day which can be between 1-30.";
            std::cin>>day;
            if(day<1 && day>30)
            {
                std::cout<<"\nThe day is invalid .\n Enter the new  day";
                std::cin>>day;
            }
        }
    }
    else
    {
        std::cout<<"\nThe month is invalid \n Enter the new month.";
        std::cin>>month;
    }

 
    std::cout<<"\nEnter the year :";
    std::cin>>year;



}

std::ostream &operator<<(std::ostream & os, const Date & d)
{
    std::cout<<"\nThe day:";
    os<<d.day;
    std::cout<<"\nThe month:";
    os<<d.month;
    std::cout<<"\nThe year:";
    os<<d.year;
    return os;
}
