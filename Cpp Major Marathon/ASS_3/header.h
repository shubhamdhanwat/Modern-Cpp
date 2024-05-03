#ifndef HEADER_H
#define HEADER_H
class Customer
{
private:
    char *customername;
public:
    Customer();
    Customer(char *);
    Customer(const Customer &);
    void accept();
    ~Customer();


    char *getCustomername() ;
    void setCustomername(char *customername_) ;
    char *getCustomername() const { return customername; }
    friend std::ostream & operator<<(std::ostream &, const Customer &);
};




#endif // HEADER_H
