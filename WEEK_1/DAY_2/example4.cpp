#include<iostream>
#include<memory>

int main(){
    int* ptr = (int*) malloc(16); // normal way to write dynamic
    std :: shared_ptr<int[4]> ptr; // we need array of 4 integer
    // sharded ptr heap memory keliye hi hota hai.
}