#include<iostream>
#include<list>
#include<vector>
/*

    Uniform Initalization syntax;

*/
struct Employee
{
    int id;
    std::string name;
};

class Car
{
private:
    int _id;
    std::string _name;
public:
    Car(/* args */);
    ~Car();
};

Car::Car(/* args */)
{
}

Car::~Car()
{
}


int main()
{
   // int n1=10;
    int n1{10};
    //int *ptr=&n1;
    int *ptr{&n1};

    struct Employee e1{10,"ram"};
    Car c1{};
    //Car c2{101,"dzire"};
    int arr[3] {10,20,30};
    std::list <int> data{1,2,3};
    std::vector <int> values {1,2,3};
    //std::shared_ptr




}