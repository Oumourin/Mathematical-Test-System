//
// Created by ��ï�� on 2019/6/20.
//
#include <random>
#include <iostream>

using namespace std;

#ifndef MATHEMATICAL_TEST_SYSTEM_TOPIC_H
#define MATHEMATICAL_TEST_SYSTEM_TOPIC_H

class Topic{
public:
    int x;
    int y;
    string operation;
    bool operationType;
private:
    int result;

public:
    friend ostream & operator << (ostream &ostream1, Topic &topic);
    // Ĭ�Ϲ��캯��
    Topic()
    {
        result = 0;
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

    bool checkAnswer(int answer)
    {
        bool checkResult;
        answer == result?checkResult=true:checkResult=false;
        return checkResult;
    }
};

#endif //MATHEMATICAL_TEST_SYSTEM_TOPIC_H

ostream & operator << (ostream &ostream1, Topic &topic){
    cout<<topic.x<<topic.operation<<topic.y<<"=";
    return ostream1;
}