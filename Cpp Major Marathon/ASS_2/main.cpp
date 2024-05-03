#include<iostream>
#include"header.h"

int main()
{

    int ar[5]={10,10,10,10,10};
    Conversion obj1={10,12,ar};
    
    obj1.display();
    std::cout<<"\nOverload the + operator :";
    Conversion obj2;
    obj2=obj2+obj1;
    obj2.display();
    std::cout<<"\nOverload the + operator with value :";
     Conversion obj3;
    obj3=obj2+5;
    obj3.display();
    std::cout<<obj1();
    std::cout<<"\n Overloading the + operator :";
     obj1++;
    obj1.display();

    std::cout<<"\nOverloading [] operator "
    Conversion obj2;
    std::cout<<obj1[2];

    std::cout<<"\nOverloading () operator :";
    std::cout<<obj2();

//    // obj2=obj1++;
    
//     int c=obj2==obj1;

//     obj2.display();




    // Conversion obj2;

    // obj2= obj1+obj2;
    // obj2=obj1+10;
    // obj2++;

    
}