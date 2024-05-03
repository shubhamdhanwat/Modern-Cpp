#include<iostream>
#include"Customer.h"
#include"CustomerType.h"
#include"DebitCard.h"
#include"DebitCardType.h"
#include"memory"
std::shared_ptr<Customer> dummy()
{
   std::shared_ptr<Customer> ptr = std::make_shared<Customer>(
        101,
        "Shubham",
        12,
        CustomerType::ELITE,
        std::make_shared<DebitCard>(
            233,
            "ram",
            "23/33",
            DebitCardType::DOMESTIC
        )
    );

    return ptr;
}
//auto keyword is used to infer(gess the datatype of a vairable )based on the initailization values
//it life span is increased till the scope of the dummy function 


int main()
{
   std::shared_ptr<Customer> ans= dummy();
   //dummy function returns shared ptr to customer.
}