//
// Created by ��ï�� on 2019/6/20.
//

#ifndef MATHEMATICAL_TEST_SYSTEM_STUDENT_H
#define MATHEMATICAL_TEST_SYSTEM_STUDENT_H

#include "Topic.h"


class Student {
public:
    string studentName;
    int getScoer;
    // ��õ���Ŀ
    vector<Topic> topics;
    // Ĭ�Ϲ��캯��
    Student(string studentName);
    // ���ⷽ��
    void answerQuestion();
    friend ostream & operator << (ostream &ostream1, Student &student);
};


#endif //MATHEMATICAL_TEST_SYSTEM_STUDENT_H
