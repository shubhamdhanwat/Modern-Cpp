#ifndef DEBITCARD_H
#define DEBITCARD_H
#include<iostream>
#include "DebitCardType.h"
class DebitCard
{
private:
    int _cvv {000};
    std::string _Card_name{"user_name"};
    std::string _expiry {"9/12/23"};
    DebitCardType _Card_type{DebitCardType::DOMESTIC};
public:

    DebitCard() = delete;

    //copy constructor
    DebitCard(const DebitCard &) = delete;

    //copy assignment
    DebitCard &operator=(const DebitCard &) = delete;

    //move symentics
    DebitCard(DebitCard &&) = delete;

    //default destructor
    ~DebitCard() = default;

    //move assignment
    DebitCard &operator=(DebitCard &&) = delete;
    DebitCard(int cvv, std::string name,std::string expiry ,DebitCardType _type );

    friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs);
};
#endif // DEBITCARD_H
