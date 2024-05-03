#include<iostream>
#include<memory>
#include"Employee.h"

using emp_pointer =std::shared_ptr<Employee>;
void Magain(const emp_pointer& emp)
//magic function take one constant l value reference of type emp pointers and return one in this function the emp pointer is the standard shared pointer to employee

{
    emp->setId(100);

}

// Employee* Magic(Employee * emp)
// {
//     emp->setId(100);
//     return emp;

// }

int main()
{
    // Employee * e1=new Employee(111);
    // Employee * modfied_e1 = Magic(e1);
    //no need to return the employee pointer in the magin function it can be defined as void
    // delete e1;
    // delete modfied_e1;//error the object is already deleted in delete e1 so now the  delete keyword dont have the address to delete the object as the object is already deleted

    emp_pointer e1= std::make_shared<Employee>(100);
    Magain(e1);

}