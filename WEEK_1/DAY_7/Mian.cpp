#include<iostream>
#include"Functionalities.h"

int main()
{
    Vectorcontainter v1;
    Container_list l1;
    creteObject(l1,v1);
    std::cout<<sizeof(Pointer);
}

/*
    scenario to  include the data in the list before and after the modern cpp

    scenario 1;
        make a lvalue data object. allocatae a new node in  the list 
        copy data into the list (Unoptimized)


    better we make the data lvalue reference :

    std::list<employee> data;
    employee e1(100)    ;//object in main
    data.push_back(e1) ; take  a reference of e1 and store the data is the solution of the scenario 1
    // this is not allowed  as it will create the double free error 
    // so it is always cretes the copy of the e1 and store in the container



    scenario 2:
        maek a temporary object . allocate a new node in the list 
        move the temporary data into the new node allocated
         std::list<employee> data;
         data.push_back(employee (100)  ) ; 

    scenario 3:
THE Better solution to all this is using the  emplace back instead of the push-back
in the emplace back the object is directly creted in the node of the list list
it creates the object in place
emplace back works on the rvlaue it doesnt work with the lvalue

instead of using the input and taking it in the main funciton create the function and use it

std::list<employee> data;
data.emplace_back(employee(input_from_user()));

int input_from_uesr()
{
    int id=0;
    std::Cin>>id;
    return id;
    
}
*/