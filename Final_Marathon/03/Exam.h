#ifndef EXAM_H
#define EXAM_H
#include"ExamType.h"
#include<iostream>
#include<string.h>


class Exam
{
private:
    ExamType _examTYpe;
    std::string _examcode;
    int _timeDuration;

public:
    Exam(ExamType examtype,std::string examcode, int timeDuration);
    // default constructor
    Exam() = default;
    // copy constructor
    Exam(const Exam &) = delete;
    // copy assignment
    Exam &operator=(Exam &) = delete;
    // move constructor
    Exam(Exam &&) = delete;
    // move assignment
    Exam &operator=(Exam &&) = delete;
    // deafault destructor
    ~Exam() = default;

   virtual void DisplayAttributes()=0;

   ExamType examTYpe() const { return _examTYpe; }

   std::string examcode() const { return _examcode; }

   int timeDuration() const { return _timeDuration; }

   friend std::ostream &operator<<(std::ostream &os, const Exam &rhs);
};

#endif // EXAM_H
