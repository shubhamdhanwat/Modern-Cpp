/*
    I am creating a funtion magic
    It Needs to accept one interger data
    scenario 1:
    copy and create duplicated data value to preserve original 
    value inside data and yet perform operation on the copy inside magin
    :we can use call by value sementics


    scenario 2:
    i have "temporary" interger which needs to be passed to magic.
    Magic would perform operations like modification on the integer and return 
    the modified value

    A]-pass integer r value reference and returns modified data by value

    // this overload of magic accepts one integer by rvalue reference and returns one integer by value

    int magic(int && data)
    {

    }
    Employee Magic(Employee && data)
    {

    }
    std::shared_ptr<Employee> Magic(std::Shared_ptr<Employee>&& data)
    {

    }
    int main()
    {
        magaic(10);
        magin(Employee(101));
        magic(std::make_shared<Employee> (102));
    }


    B] -pass integer by value and return by value
    int magic(int data)
    {

    }
    Employee Magic(Employee data)
    {

    }
    std::shared_ptr<Employee> Magic(std::Shared_ptr<Employee> data)
    {

    }
    int main()
    {
        magaic(10);
        int n1=50;
        magic(n1);// n1 is passed by value

        magin(Employee(101));
        magic(std::make_shared<Employee> (102));
        std::shard_ptr<Employee> ptr =std::make_shared<Emplyee>(100);
        magic(ptr);
    }


*/