#include "DebitCard.h"
#include<iostream>
#include"DebitCardType.h"


std::ostream &operator<<(std::ostream &os, const DebitCard &rhs) {
    os << "_cvv: " << rhs._cvv
       << " _Card_name: " << rhs._Card_name
       << " _expiry: " << rhs._expiry
       << " _type: " << static_cast<int>(rhs._Card_type);
    return os;
}

DebitCard::DebitCard(int cvv, std::string name, std::string expiry, DebitCardType __type)
:_cvv(cvv),_Card_name(name),_expiry(expiry),_Card_type(__type)
{
}
