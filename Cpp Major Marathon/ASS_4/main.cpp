#include <iostream>
#include "Product.h"
int main()
{
    Product objp[3];
    for (int i = 0; i < 3; i++)
    {
        objp[i].accept();
    }

    do
    {

        std::cout << "Menu";
        std::cout << "\n1.display";
        std::cout << "\n2.search by product type";
        std::cout << "\n3.search by product brand";
        std::cout << "\n4.search by product id";
        std::cout << "\n5.display producnt whose price is highest ";
        std::cout << "\n6.display average price ";
        std::cout << "\n7.display total tax ";
        int choice;
        std::cout << "\nEnter the choice :";
        std::cin >> choice;
        switch(choice)
        {
        case 1:
           
            for (int i = 0; i < 3; i++)
            {
                std::cout << objp[i];
            }
            break;
        case 2:
            std::cout << "\nEnter the producnt type :";
            std::cout << "\n1.MOBILEPHONE \n2.Laptop \n3.TV";
            int ch;
            std::cin >> ch;
            searchproductbyid(objp, ch);
            break;
        case 3:
            std::cout << "\nEnter the producnt brand :";
            char *p_brand;
            std::cin >> p_brand;
            serachproductbybrand(objp, p_brand);
            break;
        case 4:
            std::cout << "\nEnter the producnt id :";
            long int n_id;
            std::cin >> n_id;
            searchproductbyid(objp, n_id);
            break;
        case 5:
            displayproductwithhighestprice(objp);
            break;
        case 6:
            calcualteaverageprice(objp);
            break;
        case 7:
            calculatetoataltaxamount(objp);
        default:
            std::cout << "\nEnter the valid choice .";
            break;
        }
    } while (1);

    return 0;
}