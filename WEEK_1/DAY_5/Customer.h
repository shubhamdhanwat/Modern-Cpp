#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include"CustomerType.h"
#include"DebitCard.h"
#include<memory>

class Customer
{
private:
    int _Customer_id {0};
    std::string _Customer_name {""};
    int _age {18};
    CustomerType _type{CustomerType::REGULAR};
    std::shared_ptr<DebitCard>_card;

public:
    
    //default constructor
    Customer() = delete;

    //copy constructor
    Customer(const Customer &) = delete;

    //copy assignment
    Customer &operator=(const Customer &) = delete;

    //move constructor
    Customer(Customer &&) = delete;

    //default destructor
    ~Customer() = default;

    //move assignment
    Customer &operator=(Customer &&) = delete;

    Customer(int id, std::string name, int age, CustomerType type,std::shared_ptr<DebitCard> card);

    int customerId() const { return _Customer_id; }

    std::string customerName() const { return _Customer_name; }

    int age() const { return _age; }

    CustomerType type() const { return _type; }

    std::shared_ptr<DebitCard>card() const { return _card; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
};

#endif // CUSTOMER_H
