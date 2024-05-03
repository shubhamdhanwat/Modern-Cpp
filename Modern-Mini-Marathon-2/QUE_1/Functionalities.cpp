#include "Functionalities.h"

void DisplayArray()
{
    std::array<std::array<int,2>,2> newarray2d={10,20,30,40};
    

        for (std::array<int, 2> row : newarray2d)
        {
            for (int element : row)
            {
                std::cout << element << "\t";
            }
        }
    
}


std::function<void(std::array<std::array<int,2>,2>&)> SumOfRows=[](std::array<std::array<int,2>,2> &newarray2d)
{

    for (std::array<int, 2> row : newarray2d)
        {
            int sum=0;
            for (int i=0;i<row.size();i++)
            {
                sum+=row[i];
            }
            std::cout<<sum<<"\n";
        }

};

std::function<void(std::array<std::array<int,2>,2>&)> HighestValue=[](std::array<std::array<int,2>,2> &newarray2d)
{
    int maxnumm=newarray2d[0][0];
        for (std::array<int, 2> row : newarray2d)
        {
            for (int element : row)
            {
                if(maxnumm<element)
                {
                    maxnumm=element;
                }
            }
        }
        std::cout<<maxnumm;

};

 std::function<void(std::array<std::array<int,2>,2> &)> SquareofLastNum=[](std::array<std::array<int,2>,2> &newarray2d)
{

        int size = 4;
        int count =0;

        for (std::array<int, 2> row : newarray2d)
        {
            for (int element : row)
            {
                count++;
                if(count==size)
                {
                    std::cout<<element*element<<"\n";
                }
                
            }
        }


};


//  std::function<void(std::array<std::array<int,2>,2> &)> MaxInColumn=[](std::array<std::array<int,2>,2> &newarray2d)
// {
    
//         for (std::array<int, 2> row : newarray2d)
//         {
//             int maxnumm=newarray2d[0][0];
//             for (int element : row)
//             {
//                 if(maxnumm<element)
//                 {
//                     maxnumm=element;
//                 }
//             }
//             std::cout<<maxnumm<<"\n";
//         }
        


// };



 std::function<void(std::array<std::array<int,2>,2> &)> MaxInColumn=[](std::array<std::array<int,2>,2> &newarray2d)
{
    
    
        for (int i=0;i<newarray2d.size();i++)
        {
            int maxnumm=newarray2d[i][0];

            for(int j=0;j<newarray2d.size();j++)
            {
                if(maxnumm<newarray2d[i][j])
                {
                    maxnumm=newarray2d[i][j];
                }
            }
            std::cout<<maxnumm<<"\n";
           
        }
        


};