#include "License.h"
#include<iostream>
#include"LicenseCategory.h"

License::License(std::string licenseNumber, int licenseValidityYear, LicenseCategory licesecategory, std::string liceselssuingrto, std::string licenselssuingstate)
:_licenseNumber(licenseNumber),_licenseValidityYear(licenseValidityYear),_licensecategory(licesecategory),_licenselssuingRTO(liceselssuingrto),_licenselussingState(licenselssuingstate)
{

    if(licenseValidityYear>0 && licenseValidityYear<15)
    {
        std::cout<<"wrong vaildity ";
    }
    
    
}
std::ostream &operator<<(std::ostream &os, const License &rhs) {
    os << "_licenseNumber: " << rhs._licenseNumber
       << " _licenseValidityYear: " << rhs._licenseValidityYear
       << " _licensecategory: " << static_cast<int>(rhs._licensecategory)
       << " _licenselssuingRTO: " << rhs._licenselssuingRTO
       << " _licenselussingState: " << rhs._licenselussingState;
    return os;
}
