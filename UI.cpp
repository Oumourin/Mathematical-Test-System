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

void UI::chioceFunction() {
    cout<<"选择所需要的功能：";
    int getInput;
    cin>>getInput;
    switch (getInput){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
    }
}