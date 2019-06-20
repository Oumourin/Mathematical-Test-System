//
// Created by toumakazusa on 19-6-21.
//

#include "UI.h"

void UI::startUI() {
    cout<<"============================================"<<endl;
    cout<<"=                          欢迎使用数学练习系统                         ="<<endl;
    cout<<"=                          Copyright2019[Name]                          ="<<endl;
    cout<<"=                              按任意键进入系统                             ="<<endl;
    cout<<"============================================"<<endl;
}

void UI::functionUI() {
    cout<<"============================================"<<endl;
    cout<<"=                                     功 能 菜 单                                   ="<<endl;
    cout<<"=                                   1、题目练习                                  ="<<endl;
    cout<<"=                                   2、错题回顾                                  ="<<endl;
    cout<<"=                                   3、历史成绩查询                          ="<<endl;
    cout<<"=                                   4、退出系统                                  ="<<endl;
    cout<<"============================================"<<endl;
}

void UI::startPracticing() {
    cout<<"输入您的名字：";
    string getName;
    cin>>getName;
    Student stu(getName);
    stu.answerQuestion();
    stu.recordScore();
    cout<<stu;
}

void UI::getHistoryRecord() {
    fstream file;
    file.open("Score.txt", ios::in);
    if(file.is_open())
    {
        string getLine;
        while (getline(file,getLine))
        {
            cout<<getLine<<endl;
        }
    } else{
        cout<<"没有历史记录！"<<endl;
    }
}

void UI::practiceErroe() {
    fstream file;
    file.open("Error.txt", ios::in);
    if(file.is_open())
    {
        string getLine;
        while(getline(file, getLine))
        {
            cout<<getLine<<endl;
        }
    } else{
        cout<<"没有错题！"<<endl;
    }
}

void UI::exitSystem() {
    cout<<"============================================"<<endl;
    cout<<"=                                 感谢您的使用!!!                               ="<<endl;
    cout<<"============================================"<<endl;
}

void UI::chioceFunction() {
    cout<<"选择所需要的功能：";
    int getInput;
    cin>>getInput;
    switch (getInput){
        case 1:
            startPracticing();
            break;
        case 2:
            practiceErroe();
            break;
        case 3:
            getHistoryRecord();
            break;
        case 4:
            exitSystem();
            exit(0);
            break;
        default:
            cout<<"输入错误，请重新输入。。。。"<<endl;
    }
}