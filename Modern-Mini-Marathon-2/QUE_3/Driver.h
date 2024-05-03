#ifndef DRIVER_H
#define DRIVER_H
#include"DriverCategory.h"
#include<string.h>
#include<iostream>
#include<memory>
#include"License.h"
using Pointer =std::shared_ptr<License>;
using ref_license = std::reference_wrapper<Pointer>;

class Driver
{
private:
    std::string _drivername;
    DriveCategory _driverCategory;
    int  _driverBirthYear;
    ref_license  _ref_lc;
    


public:
    Driver(std::string drivername, DriveCategory driverCategory,int driverbirthyear,ref_license ref_lc);
    Driver() = default;

    Driver(const Driver &) = delete;

    Driver &operator=(const Driver &) = delete;

    Driver(Driver &&) = delete;

    Driver &operator=(Driver &&) = delete;

    ~Driver() = default;

    ref_license refLc() const { return _ref_lc; }

    std::string drivername() const { return _drivername; }

    DriveCategory driverCategory() const { return _driverCategory; }

    int driverBirthYear() const { return _driverBirthYear; }

    friend std::ostream &operator<<(std::ostream &os, const Driver &rhs);
};

#endif // DRIVER_H
