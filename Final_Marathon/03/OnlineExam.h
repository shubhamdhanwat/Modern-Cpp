#ifndef ONLINEEXAM_H
#define ONLINEEXAM_H
#include"Exam.h"
#include"ExamPlatform.h"
#include <ostream>

class OnlineExam :public Exam
{
private:
    ExamPlatform _examPlatform;

public:
    OnlineExam(ExamType examtype,std::string examcode, int timeDuration,ExamPlatform examplatform);
    // default constructor
    OnlineExam() = default;
    // copy constructor
    OnlineExam( OnlineExam &) = default;
    // copy assignment
    OnlineExam &operator=(OnlineExam &) = delete;
    // move constructor
    OnlineExam(OnlineExam &&) = delete;
    // move assignment
    OnlineExam &operator=(OnlineExam &&) = delete;
    // deafault destructor
    ~OnlineExam() = default;
    //a function that returns the count of 2 instances
    int operator+(OnlineExam &p);

    void DisplayAttributes() override;

    ExamPlatform examPlatform() const { return _examPlatform; }

    friend std::ostream &operator<<(std::ostream &os, const OnlineExam &rhs);
};


#endif // ONLINEEXAM_H
