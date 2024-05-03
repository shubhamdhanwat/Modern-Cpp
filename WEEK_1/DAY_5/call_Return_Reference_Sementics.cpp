#include<iostream>
// if there  is a data type to the left of & , it indicates references ofthat data type.
//reference is alies or alternates name
//reference to the local vairable is not allowed so the solution is just to return int
int& Magic(int& n1)//lvalue reference// 
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
    // if the function is returninig something then it is the rvalue we have to save it 

    //,/app harddisk to ram memory transper

    //returning the reference from the local variable can lead to the undefine behaviour
}