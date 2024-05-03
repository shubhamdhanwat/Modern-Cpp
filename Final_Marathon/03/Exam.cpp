#include "Exam.h"

Exam::Exam(ExamType examtype, std::string examcode, int timeDuration)
:_examTYpe(examtype),_examcode(examcode),_timeDuration(timeDuration)
{
}
std::ostream &operator<<(std::ostream &os, const Exam &rhs) {
    os << "_examTYpe: " <<static_cast<int>(rhs._examTYpe) 
       << " _examcode: " << rhs._examcode
       << " _timeDuration: " << rhs._timeDuration;
    return os;
}
