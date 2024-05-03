#include "Functionalities.h"
#include"Engine.h"

// void CreateObject(Container &data)
// {
//     data.emplace_back(std::make_shared<Car>(
//         "100",
//         "Tata",
//         CarType::SUV,
//         std::make_shared<Engine>(
//             "111",
//             EngineType::HYBRID,
//             200,
//             40
//         ),
//         1100000.0f
//     ));

//     data.emplace_back(std::make_shared<Car>(
//         "101",
//         "Mahindra",
//         CarType::SEDAN,
//         std::make_shared<Engine>
//         (
//             "222",
//             EngineType::ICT,
//             250,
//             3500
//         ),
//         1200000.f
//     ));

//     data.emplace_back(std::make_shared<Car>(
//         "103",
//         "Honda",
//         CarType::SUV,
//         std::make_shared<Engine>(
//             "333",
//             EngineType::ICT,
//             150,
//             4500
//         ),
//         1300000.f
//     ));
    

// }

void CreateObject(Container & data)
{
    std::string _carid;
    std::string _carBrand;
    int choice;
    float _carPrice;
    std::string _engineNumber ;
    int choice2;
    int _engineHorsepower;
    int _engineTorque ;
    int num;
    CarType _carType;
    EngineType _engineType;

    std::cout << "\nHow many objects you want to create : ";
    std::cin >> num;
    for (int i = 0; i < num; i++)
    {

        std::cout << "\nEnter Id : ";
        std::cin >> _carid;

        std::cout << "\nEnter Carbrand : ";
        std::cin >>_carBrand;

        std::cout << "\nChoose one of them\n1.SEDAN\n2.SUV\n3.SPORTS\n4.HATCHBACK"<<std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            _carType = CarType::SEDAN;
            break;

        case 2:
            _carType = CarType::SUV;
            break;

        case 3:
            _carType = CarType::SPORTS;
            break;

        case 4:
            _carType = CarType::HATCHBACK;
            break;
        }

        std::cout << "\nEnter Engine number : ";
        std::cin >> _engineNumber;

        std::cout << "\nChoose one of them\n1.ICT\n2.HYBRID\n"<<std::endl;
        std::cin >> choice2;

        switch (choice2)
        {
        case 1:
            _engineType = EngineType::ICT;
            break;

        case 2:
            _engineType = EngineType::HYBRID;
            break;
        default:
            break;
        }

        std::cout << "\nEnter Engine horsepoSUVwer : ";
        std::cin >> _engineHorsepower;

        std::cout << "\nEnter Engine torque : ";
        std::cin >> _engineTorque;

        std::cout << "\nEnter Carprice : ";
        std::cin >> _carPrice;

        data.emplace_back(
            std::make_shared<Car>(
                _carid,
                _carBrand,
                _carType,
                std::make_shared<Engine>(
                    _engineNumber,
                    _engineType,
                    _engineHorsepower,
                    _engineTorque),
                _carPrice));
    }
}

void Display(Container &data)
{
    for(auto ptr: data)
    {
        std::cout<<*ptr;
        
    }
    // for(int i=0;i< data.size();i++)
    // {
    //     std::cout<<*data[i];

    // }
}

int FindEngineHorsePower(Container &data, std::string id)
{
    if(data.empty())
    {
        throw std::runtime_error("Data is empty");
    }
    for(Pointer & ptr:data)
    {
        if(ptr->carid()==id)
        {
            return ptr->carEngine()->engineHorsepower();
        }
    }
    throw std::runtime_error("id is not present! ");

}

Container CarEngineTorqueAbove80(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("The data is empty");
    }

    Container result;

    for (const Pointer &ptr : data)
    {
        if (ptr-> carEngine()->engineTorque() >80)
        {
            result.emplace_back(ptr);
        }
    }
    if (result.empty())
    {
        throw std::runtime_error("NO car torque is  above 80");
    }
    return result;
}

Container_eng FindCarEngine(Container &data, CarType car_type)
{
    if (data.empty())
    {
        throw std::runtime_error("The data is empty");
    }
    Container_eng res;
    for(const Pointer &ptr : data)
    {
        if(ptr->carType()==car_type)
        {
            res.emplace_back(ptr->carEngine());
        }

    }
    return res;
}

float AverageOfCarHorsePower(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("The data is empty");
    }
    int total_hp=0.0f;
    EngineType etype=EngineType::ICT;
    int count=0;
    for(Pointer & ptr:data)
    {
        
        if(ptr->carPrice()>1000000 && ptr->carEngine()->engineType()==etype) 
        {
            count++;
            total_hp+=ptr->carEngine()->engineHorsepower();

        }
    }
    if (total_hp == 0.0f)
    {
        throw std::runtime_error("No ICT Enginetype found");
    }
    return total_hp/count;
}

std::string FindCarid(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("The data is empty");
    }
    float initial_price=data[0]->carPrice();
    std::string ans="null";
    for(Pointer & ptr:data)
    {
        if(ptr->carPrice()<=initial_price)
        {
            initial_price=ptr->carPrice();
            ans=ptr->carid();
        }
    }
    
    return ans;
}
// std::shared_ptr<Car> is defined as alias as pointer so we can use pointer & c
float FindCombinedPriceOfInstanceofcar(std::shared_ptr<Car> c1, std::shared_ptr<Car> c2)
{
    float total_price=0.0f;
    total_price=c1->carPrice()+c2->carPrice();
    return total_price;
}


// float FindComibinedPriceOfCar(Container &data, int size)
// {
//     if (data.empty())
//     {
//         throw std::runtime_error("The data is empty");
//     }
//     float total_price=0.0f;
   
//         for(Pointer & ptr: data)
//         {
//             while (size)
//             {
//                 total_price+=ptr->carPrice();
//                 size--;
//             }

//         }
//     return total_price;
// }

// Container FindNinstances(Container &data, int N)
// {
//     if (data.empty())
//     {
//         throw std::runtime_error("NO DATA FOUND\n");
//     }

//     if (N < 0 || N > data.size())
//     {
//         throw std::runtime_error(" N is in valid ");
//     }
//     Container result;
//     int count = N;
//     while (count > 0)
//     {
//         result.push_back(data[N - count]);
//         count--;
//     }
//     return result;
// }