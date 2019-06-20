//
// Created by 王茂林 on 2019/6/20.
//

#include "Student.h"

Student::Student(string studentName):topics(10) {
    this->studentName=studentName;
    getScore=0;
}

void Student::answerQuestion() {
    for (int i = 0; i < topics.size(); ++i) {
        getScore += topics[i].getAnswer();
    }
}

ostream & operator << (ostream &ostream1, Student &student){
    cout<<student.studentName<<"您好！"<<"您的得分为："<<student.getScoer<<endl;
}