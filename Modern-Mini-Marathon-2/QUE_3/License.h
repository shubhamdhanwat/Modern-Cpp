#ifndef LICENSE_H
#define LICENSE_H
#include<string.h>
#include<iostream>
#include"LicenseCategory.h"

class License
{
private:
    std::string _licenseNumber;
    int _licenseValidityYear;
    LicenseCategory _licensecategory;
    std::string _licenselssuingRTO;
    std::string _licenselussingState;
    
public:
    License() = default;

    License(const License &) = delete;

    License &operator=(const License &) = delete;

    License(License &&) = delete;

    License &operator=(License &&) = delete;

    ~License() = default;

    License(std::string licenseNumber ,int licenseValidityYear, LicenseCategory licesecategory,std::string liceselssuingrto, std::string licenselssuingstate);

    std::string licenseNumber() const { return _licenseNumber; }

    int licenseValidityYear() const { return _licenseValidityYear; }

    LicenseCategory licensecategory() const { return _licensecategory; }

    std::string licenselssuingRTO() const { return _licenselssuingRTO; }

    std::string licenselussingState() const { return _licenselussingState; }

    friend std::ostream &operator<<(std::ostream &os, const License &rhs);
};

#endif // LICENSE_H
