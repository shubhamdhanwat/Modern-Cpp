#include "Functionalities.h"

void creteObject(Container_list &  l1, Vectorcontainter & v1)
{
    l1.emplace_back(
        std::make_shared<Employee>(103)
    );

    l1.emplace_back(
        std::make_shared<Employee>(104)
    );

    l1.emplace_back(
        std::make_shared<Employee>(10)
    );

    v1.emplace_back(
        std::make_shared<Employee>(103)
    );
}

