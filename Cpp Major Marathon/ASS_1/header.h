#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<string.h>
class Iventory
{
    std::string description_of_product;
    int Balancestock;
    int Productcode;
    public:
    Iventory();
    Iventory(std::string, int ,int);
    void purchase(Iventory arr[],int index);
    void sale(Iventory arr[] ,int);
    
    void display();

    std::string get_descriptionOfProduct() const { return description_of_product; }
    void set_DescriptionOfProduct(const std::string &descriptionOfProduct) { description_of_product = descriptionOfProduct; }

    int get_balancestock() const { return Balancestock; }
    void set_Balancestock(int balancestock) { Balancestock = balancestock; }

    int get_productcode() const { return Productcode; }
    void set_Productcode(int productcode) { Productcode = productcode; }
    


};
void search(Iventory arr[],int pro_code);

#endif // HEADER_H
