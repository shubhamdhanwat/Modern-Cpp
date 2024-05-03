#include "Functionalities.h"

void createObjct(licence_container &data1, driver_container &data2)
{
    data1.emplace_back(std::make_shared<License>
    ("100",
    2000,
    LicenseCategory::COMMERCIAL,
    "nashik",
    "maharashtra"));

    data1.emplace_back(std::make_shared<License>
    ("101",
    2001,
    LicenseCategory::COMMERCIAL,
    "nashik",
    "maharashtra"));

    data2.emplace_back(std::make_shared<Driver>(
        "rahul",
        DriveCategory::COMMERCIAL,
        1855,
        data1[0]

    ));

    data2.emplace_back(std::make_shared<Driver>(
        "rahul",
        DriveCategory::COMMERCIAL,
        1855,
        data1[1]
        
    ));    
}

std::function<licence_container( driver_container & data2)> REturn2licenseInstance
 =[](driver_container & data2)
 {
    licence_container ans;
    int count =0;
    if(data2.empty())
    {
        throw std::runtime_error("driver data container is empty");
    }
    for(auto ptr:data2)
    {
        if(ptr->driverBirthYear()<=1960 && count !=1)
        {
            ans.emplace_back(ptr->refLc().get());
            count++;
        }
    }
    if(ans.empty())
    {
        throw std::runtime_error("driver data container is empty");

    }
    return ans;

 };