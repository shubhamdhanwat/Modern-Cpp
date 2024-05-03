#include "Functionality.h"

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<TouristVehicle>(
        "100",
        VehiceType::BUS,
        10,
        std::make_shared<Permit>(
            "1",
            PermitType::LEASE,
            10,
            1500.0f
        )
    ));

    data.emplace_back(std::make_shared<TouristVehicle>(
        "101",
        VehiceType::BIKE,
        1,
        std::make_shared<Permit>(
            "2",
            PermitType::OWNED,
            2,
            150.0f
        )
    ));


    data.emplace_back(std::make_shared<TouristVehicle>(
        "103",
        VehiceType::CAB,
        3,
        std::make_shared<Permit>(
            "3",
            PermitType::LEASE,
            3,
            700.0f
        )
    ));        
}

Container FindAllInstance(Container &data)
{
    if(data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }
    Container res;
    for(Pointer & ptr:data)
    {
        if(ptr->seatCount()>=4 && ptr->permit()->permitType()==PermitType::LEASE)
        {
            res.emplace_back(ptr);
        }

    }
    if(res.empty())
    {
        throw std::runtime_error("NO instance matches the seat count and teh permit type .");
    }
    return res;
}

float FindAverage(Container &data)
{
    if(data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }

    float ans = 0.0f;
    int count = 0;
    if(data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }
    for(Pointer & ptr:data)
    {
        if(ptr->type()==VehiceType::CAB)
        {
         ans+=ptr->permit()->permitDurationLeft();
         count++;
        }
        

    }
    if(ans==0.0f)
    {
        throw std::runtime_error("NO data instance is of VEHICELE type CAB.");
    }
    return ans/count;
}

PermitType FindTouristVehicleInstance(Container &data)
{
    if(data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }

    float mim_renewal_charge=data[0].get()->permit()->permitRenewalCharge();
    PermitType ans=data[0].get()->permit()->permitType();
    
    for(Pointer & ptr:data)
    {
        if(ptr->permit()->permitRenewalCharge()<mim_renewal_charge)
        {
            mim_renewal_charge=ptr->permit()->permitRenewalCharge();
            ans=ptr->permit()->permitType();
        }
    }
    return ans;
}

Container LastNInstance(Container &data, int N)
{

    if(data.empty())
    {
        throw std::runtime_error("Data container is empty.");
    }

    Container res;
    int count =N;
    if(N<0 || N>data.size())
    {
        throw std::runtime_error ("N is not in range .");
    }
    auto itr=data.crbegin();
    while (count>0)
    {
        res.emplace_back(itr);
        count--;
    }
    
    if(res.empty())
    {
        throw std::runtime_error("Data conatainer is empty.");
    }
      
    return res;
}
