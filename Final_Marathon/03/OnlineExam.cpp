#include "OnlineExam.h"

OnlineExam::OnlineExam(ExamType examtype, std::string examcode, int timeDuration, ExamPlatform examplatform)
    : Exam(examtype, examcode, timeDuration), _examPlatform(examplatform)
{
}

int OnlineExam::operator+(OnlineExam &p)
{
    int total_time_Duration;

    total_time_Duration = this->timeDuration() + p.timeDuration();
    std::cout << "\nAfter add function the total time duration is :";
    return total_time_Duration;
}

std::ostream &operator<<(std::ostream &os, const OnlineExam &rhs)
{
    os << static_cast<const Exam &>(rhs)
       << " _examPlatform: " << static_cast<int>(rhs._examPlatform);
    return os;
}

void OnlineExam::DisplayAttributes()
{
    std::cout << "ExamType :" << static_cast<int>(examTYpe());
    std::cout << "ExamCode :" << examcode();
    std::cout << "TimeDuration :" << timeDuration();
    std::cout << "ExamPlatform :" << static_cast<int>(_examPlatform);
}
