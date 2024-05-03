#include"Functionalities.h"

int main()
{
    Container data;
    CreateObjects(data);

    for(auto & ptr:data)
    {
        std::cout<<*ptr<<std::endl;
    }
    try
    {
        AverageLoanAmount(data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        ShowUniqueLoanIntentions(data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        LowestInterestRateFOrAcceptedLoans(data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        MInMaxLoanAmount(data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::cout<<"Instance with unique condionts :\n";
        std::vector<BankPointer> ans=InstanceWhichSatisfyTheConditions(data);
        for(auto & ptr:data)
        {
            std::cout<<*ptr;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        
        float ans=HIghestloanint_Rate(data,Loan_intent::MEDICAL);
        std::cout<<"HIghest loan int rate with intent medical is :"<<ans;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}