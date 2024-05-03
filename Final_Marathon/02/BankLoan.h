#ifndef BANKLOAN_H
#define BANKLOAN_H
#include<iostream>
#include<string.h>
#include"StatusType.h"
#include"Loan_Intent_Type.h"
class BankLoan
{
private:
    int _person_age;
    float _person_income;
    Loan_intent _loan_intent;
    float _loan_amnt;
    float _int_Rate;
    Status _status ;
public:
    BankLoan(int person_Age, float person_income,Loan_intent loan_intent, float loan_amnt,float int_Rate,Status status);
    // default constructor
    BankLoan() = default;
    // copy constructor
    BankLoan(const BankLoan &) = delete;
    // copy assignment
    BankLoan &operator=(BankLoan &) = delete;
    // move constructor
    BankLoan(BankLoan &&) = delete;
    // move assignment
    BankLoan &operator=(BankLoan &&) = delete;
    // deafault destructor
    ~BankLoan() = default;

    int personAge() const { return _person_age; }

    float personIncome() const { return _person_income; }

    Loan_intent loanIntent() const { return _loan_intent; }

    float loanAmnt() const { return _loan_amnt; }

    float intRate() const { return _int_Rate; }

    Status status() const { return _status; }

    friend std::ostream &operator<<(std::ostream &os, const BankLoan &rhs);

};

#endif // BANKLOAN_H
