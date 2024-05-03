#include "Car.h"

Car::Car(std::string car_id, std::string car_brand, CarType car_type, std::shared_ptr<Engine> car_engine, float car_price)
:_carid(car_id),_carBrand(car_brand),_carType(car_type),_carEngine(car_engine),_carPrice(car_price)
{
}
std::ostream &operator<<(std::ostream &os, const Car &rhs) 
{
    std::string type;
    switch (static_cast<int>(rhs._carType))
    {
    case 0:
        type="SEDAN" ;
        break;
    case 1:
        type="SUV" ;
        break;
    case 2:
        type="SPORTS" ;
        break;
    case 4:
        type="HATCHBACK";
        break;
    
    default:
        break;
    }
    os << "_carid: " << rhs._carid
       << "\n_carBrand: " << rhs._carBrand
       //<< "\n_carType: " <<static_cast<int>(rhs._carType) 
       << "\n_carType: "<< type
       << "\n_carEngine: " << *rhs._carEngine
       << "\n_carPrice: " << rhs._carPrice<<"\n";

    std::cout<<"\n--------------------------------"   ;
    return os;
}
