#ifndef PRODUCT_H
#define PRODUCT_H
#include<string>
#include <ostream>
#include"ProductType.h"
#include"ProductOrigin.h"

class Product
{
private:
    std::string _productId {""};
    ProductType _pro_type{ProductType::APPLIANCE};
    float _productPrice {0.0f};
    std::string _productBrand {""};
    ProductOrigin _pro_origin {ProductOrigin::DOMESTIC};
    float _productTaxAmount {0.0f};

    
public:

    Product()=default;

    Product(const Product &)=delete;

    Product &operator=(const Product &)=delete;

    Product(Product &&)=delete;

    Product & operator=(Product &&)=delete;

    ~Product() =default;

    Product(std::string productID,ProductType pro_type,float productprice,std::string productbrand,ProductOrigin pro_origin,float producttaxamount);

    std::string productId() const { return _productId; }

    ProductType proType() const { return _pro_type; }

    float productPrice() const { return _productPrice; }

    std::string productBrand() const { return _productBrand; }

    ProductOrigin proOrigin() const { return _pro_origin; }

    float productTaxAmount() const { return _productTaxAmount; }

    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);

};

#endif // PRODUCT_H
