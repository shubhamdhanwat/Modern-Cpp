#include<iostream>
#include<array>
#include<functional>


void DisplayArray();
extern std::function<void(std::array<std::array<int,2>,2> &)> SumOfRows;
extern std::function<void(std::array<std::array<int,2>,2> &)> HighestValue;
extern std::function<void(std::array<std::array<int,2>,2> &)> SquareofLastNum;
extern std::function<void(std::array<std::array<int,2>,2> &)> MaxInColumn;

