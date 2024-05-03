#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"OnlineExam.h"
#include<algorithm>
#include<array>
#include<memory>
using pointer =std::shared_ptr<OnlineExam>;
using container =std::array<pointer,5>;


OnlineExam *data[5] = {nullptr};

void CreateObjects(OnlineExam *data[5]); 

ExamPlatform DisplayExamPlatform(OnlineExam *data[5],std::string code);

void PrintTimeDurationOfFirstNobjects(OnlineExam *data[5],int N);

bool CheckifAllInstanceHaveTimeDurationAbove60(OnlineExam *data[5]);

void Instancewithtimedurationabovethreshold(OnlineExam *data[5], int threshold);

container Instancewithtimedurationabovethreshold1(OnlineExam *data[5], int threshold);

int functiontodisplaysumoftimeduration(OnlineExam   data[0],OnlineExam data1[1]);

void Deallocate_the_memory(OnlineExam *data[5]);

#endif // FUNCTIONALITIES_H
