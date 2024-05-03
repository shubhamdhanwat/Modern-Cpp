#include<iostream>
#include"header.h"


int main()
{
    Iventory *inv=new Iventory[3];
    for(int i=0;i<3;i++)
    {
        inv[i].display();

    }

    inv[0].purchase(inv,0);
    inv[0].display();
    inv[0].sale(inv,0);
    inv[0].display();

    search(inv,123);
    


}