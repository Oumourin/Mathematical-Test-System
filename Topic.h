//
// Created by Õı√Ø¡÷ on 2019/6/20.
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
    int answers;

    friend ostream & operator << (ostream &ostream1, Topic &topic);
    bool checkAnswer(int answer);
    Topic();
    int getAnswer();
    int getScore();
private:
    int result;
};


#endif //MATHEMATICAL_TEST_SYSTEM_TOPIC_H

