#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"BankLoan.h"
#include<array>
#include<memory>
#include<algorithm>
#include<numeric>
#include<set>
#include<vector>

using BankPointer=std::shared_ptr<BankLoan>;
using Container= std::array<BankPointer,10>;

void CreateObjects(Container & data);

void AverageLoanAmount(Container & data);

void ShowUniqueLoanIntentions(Container & data);

void LowestInterestRateFOrAcceptedLoans(Container & data);

void MInMaxLoanAmount(Container & data);

std::vector<BankPointer> InstanceWhichSatisfyTheConditions(Container & data);

float HIghestloanint_Rate(Container & data,Loan_intent intent);

#endif // FUNCTIONALITIES_H
