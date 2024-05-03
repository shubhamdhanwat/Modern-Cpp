#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <vector>
#include <memory>
#include "Customer.h"
using Pointer = std::shared_ptr<Customer>;
//using alias Pointer for standard shared ptr of customer
using Container = std::vector<Pointer>;
//using alias Containter for standard vector of pointer

void CreateObject(Container &data) noexcept;
// cotainer is the shared ptr to standard vector


/*
    A Function to find average age of all customers

*/

float AverageAge(Container &data);

/*
    a funtion to return the nth  object of the container
*/

/*
   a function to return the nth object from thr container

*/

Pointer NthCustomer(Container &data, int N);

// we had taken the reference as we are not modifying the origninal data
// dont use byreferece for the premitive datatype

/*
      a function to find the age of the customer whose id is provided as a parameter

*/

int AgeOfGivenCustomerID(Container &data, int id);

/*
    A funtion to find the cvv of debit card for customer whose id is provided as a parameter
*/

int FindCvvofCustomer(const Container & data,const int id);

/*
    a function to return the expiry of debit card whose cvv number matches
    with the value given by the user
*/

std::string FindExpirydateofCustomer(Container & data, int cvv);

/*
    a function to return a container of all pointer which point to customer with age above 50
*/
Pointer Return_Customer(Container & data);

/*
    a function to return the debit card pointer for a customer whose id is given as input parameter
*/

Pointer Retrun_debitCard(Container & data, int id);
Container CustomerAbove50(const Container &data);
#endif // FUNCTIONALITIES_H
