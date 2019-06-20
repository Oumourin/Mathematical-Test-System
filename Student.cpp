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
    cout<<student.studentName<<"您好！"<<"您的得分为："<<student.getScore<<"成绩等级为："<<student.getMyLevel()<<endl;
}

void Student::recordScore() {
    auto time = chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    fstream file;
    file.open("Score.txt", ios::app);
    file<<"姓名："<<studentName<<"  "<<"获得成绩："<<getScore<<"  "<<"成绩等级："<<getMyLevel()<<"  "<<"记录时间:"<<std::put_time(std::localtime(&time), "%Y-%m-%d %H.%M.%S")<<endl;
    file.close();
}

string Student::getMyLevel() {
    string myLevel;
    getScore>=90?myLevel="SMART":
            getScore>=80?myLevel="GOOD":
                    getScore>=70?myLevel="OK":
                            getScore>=60?myLevel="PASS":
                                    myLevel="TRY AGAIN";
    return myLevel;
}