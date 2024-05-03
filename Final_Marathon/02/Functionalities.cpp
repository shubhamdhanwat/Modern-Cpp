#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data[0] = std::make_shared<BankLoan>(22,
                                         59000,
                                         Loan_intent::PERSONAL,
                                         35000,
                                         16.02,
                                         Status::YES);

    data[1] = std::make_shared<BankLoan>(25,
                                         9600,
                                         Loan_intent::MEDICAL,
                                         5500,
                                         12.87,
                                         Status::YES);

    data[2] = std::make_shared<BankLoan>(23,
                                         65500,
                                         Loan_intent::MEDICAL,
                                         35000,
                                         15.23,
                                         Status::YES);

    data[3] = std::make_shared<BankLoan>(24,
                                         54400,
                                         Loan_intent::MEDICAL,
                                         35000,
                                         14.27,
                                         Status::YES);

    data[4] = std::make_shared<BankLoan>(21,
                                         9900,
                                         Loan_intent::VENTURE,
                                         2500,
                                         7.14,
                                         Status::YES);

    data[5] = std::make_shared<BankLoan>(26,
                                         77100,
                                         Loan_intent::EDUCATION,
                                         35000,
                                         12.42,
                                         Status::YES);

    data[6] = std::make_shared<BankLoan>(24,
                                         78954,
                                         Loan_intent::MEDICAL,
                                         35000,
                                         11.11,
                                         Status::YES);

    data[7] = std::make_shared<BankLoan>(24,
                                         83000,
                                         Loan_intent::PERSONAL,
                                         35000,
                                         8.9,
                                         Status::YES);

    data[8] = std::make_shared<BankLoan>(21,
                                         10000,
                                         Loan_intent::VENTURE,
                                         1600,
                                         14.72,
                                         Status::YES);

    data[9] = std::make_shared<BankLoan>(22,
                                         85000,
                                         Loan_intent::VENTURE,
                                         35000,
                                         10.37,
                                         Status::YES);
}

void AverageLoanAmount(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is Empty!");
    }
    float totalloan = std::accumulate(data.begin(), data.end(), 0.0f,
                                      [&](float sum, const auto &entry)
                                      {
                                          {
                                              return sum + entry->loanAmnt();
                                          }
                                          return sum;
                                      });
    std::cout << "The AverageLoanAmount :" << totalloan / data.size();
}

void ShowUniqueLoanIntentions(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is Empty!");
    }

    std::set<Loan_intent> uniqueloanIntent;

    for (auto &id : data)
    {

        uniqueloanIntent.insert(id->loanIntent());
    }

    std::cout << "\nUnique Loan Intent  :\n";
    std::string type;
    for (auto &loanintent : uniqueloanIntent)
    {
        if (static_cast<int>(loanintent) == 0)
        {
            type = "PERSONAL";
        }
        else if (static_cast<int>(loanintent) == 1)
        {
            type = "MEDICAL";
        }
        else if (static_cast<int>(loanintent) == 2)
        {
            type = "VENTURE";
        }
        else if (static_cast<int>(loanintent) == 3)
        {
            type = "EDUCATION";
        }

        std::cout << type << std::endl;
    }
}

void LowestInterestRateFOrAcceptedLoans(Container &data)
{

    if (data.empty())
    {
        throw std::runtime_error("Data is Empty!");
    }

    float low_int_rate = data[0]->intRate();
    for (auto &ptr : data)
    {
        if (ptr->status() == Status::YES && ptr->intRate() < low_int_rate)
        {
            low_int_rate = ptr->intRate();
        }
    }

    std::cout << "The Lowest interest rate for accepted loans is :" << low_int_rate << std::endl;
}

void MInMaxLoanAmount(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is Empty!");
    }

    float min_loan = data[0]->loanAmnt();
    float max_loan = data[0]->loanAmnt();
    for (auto &ptr : data)
    {
        if (ptr->loanAmnt() < min_loan)
        {
            min_loan = ptr->loanAmnt();
        }
        if (ptr->loanAmnt() > max_loan)
        {
            max_loan = ptr->loanAmnt();
        }
    }

    std::cout << "\nTHe min loan Amount is :" << min_loan;
    std::cout << "\nThe max loan amount is :" << max_loan << std::endl;
}

std::vector<BankPointer> InstanceWhichSatisfyTheConditions(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is Empty!");
    }

    std::vector<BankPointer> result;
    for (auto &ptr : data)
    {
        if (ptr->loanAmnt() < 30000 && ptr->status() == Status::NO && ptr->personAge() < 23)
        {
            result.emplace_back(ptr);
        }
    }
    if (result.empty())
    {
        throw std::runtime_error("No such instance found .\n");
    }

    return result;
}

float HIghestloanint_Rate(Container &data, Loan_intent intent)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is Empty!");
    }

    float highloanintrate;
    for(auto & ptr:data)
    {
        if(ptr->loanIntent()==intent)
        {
            highloanintrate=ptr->intRate();
            break;
        }
    }

    for(auto & ptr:data)
    {
        if(ptr->loanIntent()==intent && ptr->intRate()>highloanintrate)
        {
            highloanintrate=ptr->intRate();
            
        }
    }

    return highloanintrate;
}
