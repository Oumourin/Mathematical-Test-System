//
// Created by 王茂林 on 2019/6/20.
//

#ifndef MATHEMATICAL_TEST_SYSTEM_STUDENT_H
#define MATHEMATICAL_TEST_SYSTEM_STUDENT_H

#include "Topic.h"
#include <fstream>
#include <chrono>
#include <ctime>
#include <iomanip>



class Student {
public:
    string studentName;
    int getScore;
    // 获得的题目
    vector<Topic> topics;
    // 默认构造函数
    Student(string studentName);
    // 答题方法
    void answerQuestion();
    void recordScore();
    friend ostream & operator << (ostream &ostream1, Student &student);
};


#endif //MATHEMATICAL_TEST_SYSTEM_STUDENT_H
