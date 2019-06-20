//
// Created by 王茂林 on 2019/6/20.
//

#include "Topic.h"


// 默认构造函数
Topic::Topic()
{
    answers = 3;
    default_random_engine randomEngine;
    // 获取两个50以内的随机数
    if (randomEngine()%2==0)
    {
        // 为偶数时运算为加法，奇数时为减法
        operation = "+";
        operationType = true;
    }
    else{
        operation = "-";
        operationType = false;
    }
    if(operationType)
    {
        int getX = randomEngine()%50;
        int getY = randomEngine()%50;
        // 两数之和大于50或小于0时不跳出循环
        // 随机数生成器可以保证数字非负
        // 取余可以保证数字小于50
        while (getX+getY > 50) {
            getX = randomEngine() % 50;
            getY = randomEngine() % 50;
        }
        x=getX;
        y=getY;
        result = getX + getY;
    }
    else {
        int getX = randomEngine() % 50;
        int getY = randomEngine() % 50;
        // 两数相减不为负时跳出循环
        while (getX - getY < 0){
            getX = randomEngine() % 50;
            getY = randomEngine() % 50;
        }
        x=getX;
        y=getY;
        result = getX - getY;
    }
}

ostream & operator << (ostream &ostream1, Topic &topic) {
    cout << topic.x << topic.operation << topic.y << "=";
    return ostream1;
}

bool Topic::checkAnswer(int answer)
{
    bool checkResult;
    answer == result?checkResult=true:checkResult=false;
    return checkResult;
}

int Topic::getScore() {
    switch (answers){
        case 3:
            return 10;
        case 2:
            return 7;
        case 1:
            return 5;
        case 0:
            return 0;
    }
}

int Topic::getAnswer() {
    while (answers > 0){
        cout<<"您还有"<<answers<<"作答机会！"<<endl;
        cout<< *this;
        int getMyAnswer;
        cin>>getMyAnswer;
        if (checkAnswer(getMyAnswer)){
            cout<<"恭喜您回答正确！"<<"本题得分为："<<getScore();
            return getScore();
        }
        else{
            --answers;
            if (answers == 0){
                cout<<"您没有能回答对此题！"<<endl;
                return getScore();
            } else{
                cout<<"回答错误！您还有"<<answers<<"次回答机会,请继续作答！"<<endl;
            }
        }
    }
}