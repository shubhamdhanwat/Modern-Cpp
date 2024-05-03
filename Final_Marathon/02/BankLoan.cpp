#include "BankLoan.h"

BankLoan::BankLoan(int person_Age, float person_income, Loan_intent loan_intent, float loan_amnt, float int_Rate, Status status)
:_person_age(person_Age),_person_income(person_income),_loan_intent(loan_intent),_loan_amnt(loan_amnt),_int_Rate(int_Rate),_status(status)
{
}
std::ostream &operator<<(std::ostream &os, const BankLoan &rhs) {
    os << "_person_age: " << rhs._person_age
       << " _person_income: " << rhs._person_income
       << " _loan_intent: " <<static_cast<int>(rhs._loan_intent) 
       << " _loan_amnt: " << rhs._loan_amnt
       << " _int_Rate: " << rhs._int_Rate
       << " _status: " << static_cast<int>(rhs._status);
    return os;
}
