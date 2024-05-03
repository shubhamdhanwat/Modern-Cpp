#include <iostream>
enum class Rank
{
    FIRST,
    SECOND,
    THIRD

};

enum class Gear
{
    FIRST,
    SECOND,
    THIRD
};

void Magic(int data)
{
}

int main()
{
    // enum Rank r1 = FIRST;// error
    enum Rank r1 = Rank::FIRST;
    // enum Gear g1= FIRST;
    enum Gear g1 = Gear::FIRST;

    // two variabel of two differnt dataypes sould not be compared
    // error after using the enum class
    // if(r1== g1)
    // {
    //     std::cout<<"OPPPS\n";
    // }

    // Magic(r1);// typecasting automatically of the enum
    // error after using the enum class

    // so we use the enum  class
    // we havet to use the following syntax  enum Rank r1 = Rank::FIRST;
    // the comparision of the same type of enum is allowed 
    
}
