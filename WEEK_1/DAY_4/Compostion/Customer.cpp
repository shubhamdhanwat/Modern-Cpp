#include "Customer.h"
#include<iostream>
#include"CustomerType.h"

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_Customer_id: " << rhs._Customer_id
       << "\n _Customer_name: " << rhs._Customer_name
       << "\n _age: " << rhs._age
       << " \n_type: " << static_cast<int>(rhs._type)
       <<"\n_card " <<*rhs._card;

    return os;
}

Customer::Customer(int id, std::string name, int age, CustomerType type, std::shared_ptr<DebitCard> card)
:_Customer_id(id),_Customer_name(name),_age(age),_type(type),_card(card)
{
}
