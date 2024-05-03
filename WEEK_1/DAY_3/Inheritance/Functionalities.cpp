#include"Functionalities.h"
#include"PetrolCar.h"
#include"DiselCar.h"
#include"EvCar.h"
#include"HybridCar.h"

void CreateObjects(Container &data)
{
    //step 1 : make a constructor call to petrotcar
 
    // std::shared_ptr<PetrolCar>(101, "city", 140000.0f, VehicleType :: PERSONAL, 43);
 
    //step 2:
    // std :: shared_ptr<Vehicle> ptr = std::make_shared<PetrolCar>(101, "city", 140000.0f, VehicleType :: PERSONAL, 43);
 
    // data.emplace_back(
    //    ptr
    //);
   // PetrolCar(101,"city",1490000.0f,VechicleType::PERSONAL,42);

   // std::shared_ptr<Vehicle> ptr=std::make_shared<PetrolCar>(101,"city",1490000.0f,VechicleType::PERSONAL,42);

    // data.emplace_back(
    //     ptr
    // );

    data.emplace_back(
        std::make_shared<PetrolCar>(103,"tata",920000.0f,VechicleType::SECURITY,34)
    );

    data.emplace_back(
        std::make_shared<DiselCar>(104,"NEXON",1200000.0f,VechicleType::PERSONAL,36)
    );

    data.emplace_back(
        std::make_shared<EvCar>(105,"Mahindra_SUV_400_EV",VechicleType::PERSONAL,69)
    );
    data.emplace_back(
        std::make_shared<HybridCar>(106,"kiaa",VechicleType::PERSONAL,26,60)
    );

    data.emplace_back(std::make_shared<EvCar>(107,"tata_ev",13003330.0f,VechicleType::PERSONAL,70));

    data.emplace_back(
        std::make_shared<HybridCar>(108,"tata_hybrid",14000000.0f,VechicleType::PERSONAL,50,40)
    );
}

float AveragePrice(Container &data)
{
    float total=0.0f;

    for(int i=0; i< data.size();i++)
    {
        total=total+data[i]->price();
    }

    return total/data.size();
}

void display(Container &data)
{
    if(data.empty())
    {
        throw std::runtime_error("Data container is empty ");
    }

    for(const Pointer &ptr:data)
    {
        if(std::shared_ptr<PetrolCar> petrol =std::dynamic_pointer_cast<PetrolCar>(ptr))
        {
            std::cout<<*petrol<<std::endl;
        }
        else if( auto diesel =std::dynamic_pointer_cast<DiselCar>(ptr))
        {
                std::cout<<*diesel<<std::endl;
        }
        else if( std::shared_ptr<EvCar> ev=std::dynamic_pointer_cast<EvCar>(ptr))
        {
            std::cout<<*ev<<std::endl;
        }
        else if( auto hybrid =std::dynamic_pointer_cast<HybridCar>(ptr))
        {
            std::cout<<*hybrid<<std::endl;
        }

        //std::cout<<*data[i]<<"\n";
    }
}

void AllRegistration(Container &data)
{
    for(int i=0;i<data.size();i++)
    {
        data[i]->CalculateRegistrationCharge();

    }
} 