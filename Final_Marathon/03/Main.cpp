#include "Functionalities.h"
#include <iostream>

int main()
{
    OnlineExam *data[5] = {nullptr}; // array of 5  pointers

    CreateObjects(data);
    for (auto &ptr : data)
    {

        std::cout << *ptr << std::endl;
    }

    std::cout << "THe exam platform for the instance with the exam code 101:";
    auto ans = DisplayExamPlatform(data, "101");
    std::string type;
    if (static_cast<int>(ans) == 0)
    {
        type = "MEET";
    }
    else if (static_cast<int>(ans) == 1)
    {
        type = "TEAMS";
    }
    else if (static_cast<int>(ans) == 2)
    {
        type = "ZOOM";
    }
    std::cout << type << "\n";

    try
    {
        PrintTimeDurationOfFirstNobjects(data, 3);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Function to check if all instace have time duration above 60:";
    bool ans1 = CheckifAllInstanceHaveTimeDurationAbove60(data);
    std::cout << std::boolalpha << ans1<<std::endl;

    std::cout<<"The fucntion to display the total using + operator :";
    std::cout<<functiontodisplaysumoftimeduration(data[0],data[1]);

    std::cout<<"\nThe instances with the timeduration above the threshold :\n";
    Instancewithtimedurationabovethreshold(data,60);

    std::cout<<"\nFunction to deallocate the memory ";
    Deallocate_the_memory(data);

}