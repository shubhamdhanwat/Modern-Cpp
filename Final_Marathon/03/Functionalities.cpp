#include "Functionalities.h"

void CreateObjects(OnlineExam *data[5])
{
    data[0] = new OnlineExam(ExamType::UNIT_TEST,
                             "101",
                             60,
                             ExamPlatform::TEAMS);

    data[1] = new OnlineExam(ExamType::MID_TERM,
                             "102",
                             00,
                             ExamPlatform::ZOOM);

    data[2] = new OnlineExam(ExamType::END_SEM,
                             "103",
                             120,
                             ExamPlatform::TEAMS);

    data[3] = new OnlineExam(ExamType::UNIT_TEST,
                             "104",
                             60,
                             ExamPlatform::ZOOM);

    data[4] = new OnlineExam(ExamType::MID_TERM,
                             "105",
                             90,
                             ExamPlatform::TEAMS);
}

ExamPlatform DisplayExamPlatform(OnlineExam *data[5], std::string code)
{
    for (int i = 0; i < 5; i++)
    {
        if (data[i]->examcode() == code)
        {
            return data[i]->examPlatform();
        }
        std::cout << " ";
    }
    std::cout << std::endl;
    return ExamPlatform::MEET;
}

void PrintTimeDurationOfFirstNobjects(OnlineExam *data[5], int N)
{
    if (N > 5 && N < 0)
    {
        throw std::runtime_error("The N is above the bound of the container .\n");
    }
    std::cout << "The time duration of first N instance is :";
    for (int i = 0; i < N; i++)
    {

        std::cout << data[i]->timeDuration() << " \n";
    }
    std::cout << std::endl;
}

bool CheckifAllInstanceHaveTimeDurationAbove60(OnlineExam *data[5])
{
    int count = 0;
    bool flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (data[i]->timeDuration() > 60)
        {
            count++;
        }
    }
    if (count == 5)
    {
        flag = 1;
    }

    return flag;
}

void Instancewithtimedurationabovethreshold(OnlineExam *data[5], int threshold)
{
    OnlineExam *result[5] = {nullptr};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (data[i]->timeDuration() > threshold)
        {
            result[count] = data[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        std::cout << *result[i] << std::endl;
    }
}

container Instancewithtimedurationabovethreshold1(OnlineExam *data[5], int threshold)
{
    container result;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (data[i]->timeDuration() > threshold)
        {
            // result[count]=data[i];
            count++;
        }
    }

    return result;
}

int functiontodisplaysumoftimeduration(OnlineExam data[0], OnlineExam data1[1])
{
    int total_time_Duration;

    total_time_Duration = data[0].timeDuration() + data[1].timeDuration();
    return total_time_Duration;
}

void Deallocate_the_memory(OnlineExam *data[5])
{
    delete[] data;
}
