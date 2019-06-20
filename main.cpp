#include "Student.h"
#include "UI.h"
#include <stdlib.h>

// 跨平台控制清屏控制
#ifdef linux
#define CLEAR system("clear")
#endif

#ifdef __WINDOWS_
#define CLEAR system("cls")
#endif


int main(int args, char * argv[]){
    UI::startUI();
    getchar();
    CLEAR;
    while (true){
        UI::functionUI();
        UI::choiceFunction();
        CLEAR;
    }
}