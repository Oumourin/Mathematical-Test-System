//
// Created by ��ï�� on 2019/6/20.
//

#include "Topic.h"


// Ĭ�Ϲ��캯��
Topic::Topic()
{
    answers = 3;
    default_random_engine randomEngine;
    // ��ȡ����50���ڵ������
    if (randomEngine()%2==0)
    {
        // Ϊż��ʱ����Ϊ�ӷ�������ʱΪ����
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
        // ����֮�ʹ���50��С��0ʱ������ѭ��
        // ��������������Ա�֤���ַǸ�
        // ȡ����Ա�֤����С��50
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
        // ���������Ϊ��ʱ����ѭ��
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
        cout<<"������"<<answers<<"������ᣡ"<<endl;
        cout<< *this;
        int getMyAnswer;
        cin>>getMyAnswer;
        if (checkAnswer(getMyAnswer)){
            cout<<"��ϲ���ش���ȷ��"<<"����÷�Ϊ��"<<getScore();
            return getScore();
        }
        else{
            --answers;
            if (answers == 0){
                cout<<"��û���ܻش�Դ��⣡"<<endl;
                return getScore();
            } else{
                cout<<"�ش����������"<<answers<<"�λش����,���������"<<endl;
            }
        }
    }
}