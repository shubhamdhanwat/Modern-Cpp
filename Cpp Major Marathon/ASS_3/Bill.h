#ifndef BILL_H
#define BILL_H
#include"Date.h"
#include"header.h"

class Bill
{
private:
    int billnumber;
    Customer cus;
    Date d;
    int billamount;
public:
    Bill();
    Bill(int,char *,int,int,int,int);
    void accept();
    friend std::ostream & operator<<(std::ostream &, const Bill &);
    ~Bill();
    

    int getBillamount() const { return billamount; }

    int getBillnumber() const { return billnumber; }

    Customer getCus() const { return cus; }
    void setCus(const Customer &cus_) { cus = cus_; }

    
};

void Bill_Serach(Bill [], char * );

#endif // BILL_H
