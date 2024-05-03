#include"Functionalities.h"

int main()
{

std::array<std::array<int,2>,2> newarray2d={10,20,30,40};
    
    std::cout<<"\nThe sum of the row of the array elements are :";
    SumOfRows(newarray2d);
    std::cout<<"THe highest value in the array is :";
    HighestValue(newarray2d);
    std::cout<<"\nThe square of the last element in the array is :";
    SquareofLastNum(newarray2d);
    std::cout<<"\nThe max number in the columns are :";
    MaxInColumn(newarray2d);
    return 0;



}