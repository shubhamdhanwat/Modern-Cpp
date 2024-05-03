#ifndef CAR_H
#define CAR_H
#include <iostream>
#include<memory>
#include "CarType.h"
#include"Engine.h"

class Car
{
private:
    std::string _carid{"000"};
    std::string _carBrand{"brand"};
    CarType _carType{CarType::HATCHBACK};
    std::shared_ptr<Engine> _carEngine ;
    float _carPrice{0.0f};

public:

    Car() = default;

    Car(const Car &) = delete;

    Car &operator=(const Car &) = delete;

    Car(Car &&) = delete;
    
    Car &operator=(Car &&) = delete;

    Car(std::string car_id,std::string car_brand,CarType car_type,std::shared_ptr<Engine> car_engine, float car_price);

    ~Car() = default;

    std::string carid() const { return _carid; }

    std::string carBrand() const { return _carBrand; }

    CarType carType() const { return _carType; }

    float carPrice() const { return _carPrice; }

    std::shared_ptr<Engine> carEngine() const { return _carEngine; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};

#endif // CAR_H
