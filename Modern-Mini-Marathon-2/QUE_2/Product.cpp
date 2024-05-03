#include "Product.h"

Product::Product(std::string productID, ProductType pro_type, float productprice, std::string productbrand, ProductOrigin pro_origin, float producttaxamount)
:_productId(productID),_pro_type(pro_type),_productPrice(productprice),_productBrand(productbrand),_pro_origin(pro_origin),_productTaxAmount(producttaxamount)
{

    producttaxamount=0.5*productprice;
}
std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_productId: " << rhs._productId
       << " _pro_type: " << static_cast<int>(rhs._pro_type)
       << " _productPrice: " << rhs._productPrice
       << " _productBrand: " << rhs._productBrand
       << " _pro_origin: " << static_cast<int>(rhs._pro_origin)
       << " _productTaxAmount: " << rhs._productTaxAmount;
    return os;
}
