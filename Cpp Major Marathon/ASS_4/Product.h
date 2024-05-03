#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>
enum ProductType
{
    MobilePhone,Laptop,TV
};
class Product
{
private:
    long int productid;
    std::string name;
    char brand[10];
    float price;
    ProductType typeofproduct ;
    float taxamount;


public:
    Product();
    void accept();
    ~Product();
    friend std::ostream &operator<<(std::ostream & os, const Product & v);
    char operator[](int index);
    bool operator==(const Product &);

    ProductType getTypeofproduct() const { return typeofproduct; }

    char* getBrand()  { return brand; }

    long int getProductid() const { return productid; }

    float getPrice() const { return price; }

    float getTaxamount() const { return taxamount; }

    
};

void searchproductbytype(Product arr[],ProductType p);
void serachproductbybrand(Product arr[],char* b);   
void searchproductbyid(Product arr[],long int);
void displayproductwithhighestprice(Product arr[]);
float calcualteaverageprice(Product arr[]);
float calculatetoataltaxamount(Product arr[]);

#endif // PRODUCT_H
