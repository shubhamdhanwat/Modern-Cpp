#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include"Passenger.h"
#include<memory>
#include<vector>
#include<future>


using PassengePtr= std::shared_ptr<Passenger>;

using PassengerContainer =std::vector<PassengePtr>;

void CreateObjects( PassengerContainer & data);

void FindAverageAge(PassengerContainer & data, PassengerType type);

void DisplayTheInstance(PassengerContainer & data, Vtypeid id);

void DisplayInstanceWIthMinFare(PassengerContainer & data);

void StoreAndDisplayNinstance(PassengerContainer & data, int N);

void DisplayTheInstancewithpassengerNameGiveninfuture(PassengerContainer & data, std::future<std::string> &ft);

#endif // FUNCTIONALITIES_H
