#include "Student.h"

int main(int args, char * argv[]){
    Student Stu("HatsuneMiku");
    Stu.answerQuestion();
    cout<<Stu;
    Stu.recordScore();
    return 0;
}