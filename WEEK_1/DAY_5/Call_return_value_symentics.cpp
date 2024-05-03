#include<iostream>

int Magic(int n1)
{
    std::cout<<"Address of the n1 in magic :"<<&n1<<" \n";
    int ans = n1*100;
    return ans;
}

int main()
{// data variable initliazed with value 20
    int data=20;

    //address of data can be determined becaue data is lvalues
    std::cout<<"Address of the data in main :"<<&data<<" \n";

    //result stores the return "value" from magic called with "data" passed by values
    int result =Magic(data);

    //,/app harddisk to ram memory transper
}