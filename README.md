# Mathematical-Test-System
小学数学测验 面向小学1~2年级学生，随机选择两个整数和加减运算符组成算式要求学生解答。


**本项目准守GPLV3协议**


**Windows下随机数生成会出现问题！！！**


##  开发环境
>  OS:Windows 10 1903 && Manjaro 18.0.4
>
>  IDE：Clion 2018.1.4
>
>  C++版本 C++11
>
>  CMAKE Version 3.14
>
>  编码：UTF-8

##  学生类(Student)
定义在头文件:Student.h中
类包含成员：
*  用户姓名
*  用户获得分数
*  对应题目(Topic类型容器)

类包含方法：
*  默认构造函数
    
    ```c++
    Student(string studentName);
   ```
   
   *  传递一个string对象，将会构造10道题目（调用Topic默认构造函数）,同时对对象的名字赋值和将成绩初始化为０
   
*  回答问题方法:
    
    ```c++
    void answerQuestion();
    ```
    
    *  循环调用Topic类的getAnswer()方法，直到完成作答
    
*  记录成绩方法：
    
    ```c++
    void recordScore();
    ```
    
    *  利用文件流实现对于Score.txt的写入，记录每次练习成绩
    
*  获取等级方法:
    
    ```c++
    string getMyLevel();
    ```
    
    *  利用逻辑表达式嵌套实现对于成绩对应等级的获取
    
*  ostream重载
    
    ```c++
    friend ostream & operator << (ostream &ostream1, Student &student);
    ```
    
    *  实现对于输出流的重载，实现Student类的toString方法
##  题目类(Topic)
定义在头文件:Topic.h中

类成员

公有成员：
*  加数/被减数 x
*  加数/减数 y
*  运算符 operation
*  运算符类型 operationType
*  可以作答次数 answers

类私有成员：
*  答案 result

类方法：

*  检查答案方法

  ```c++
   bool checkAnswer(int answer);
  ```

  实现对于输入答案的检查

* 默认构造函数

  ```c++
  Topic();
  ```

  *   利用随机数生成题目

*  答题方法

  ```c++
   int getAnswer();
  ```

  *  学生回答问题的方法

* 　计算最后得分方法

  ```c++
  int getScore();
  ```

  * 计算回答问题最后得分

* 　记录错题方法

  ```c++
  void recordError();
  ```

  *  将错题输出到文件中

##  UI类(UI)

定义在头文件UI.h中

类方法:

*  欢迎界面

   ```c++
  static void startUI();
   ```

  * 静态方法，实现开始欢迎界面的打印

*  功能选择UI

  ```c++
  static void functionUI();
  ```

  *  静态方法，实现选择菜单UI

*  功能选择逻辑

  ```c++
  static void choiceFunction();
  ```

  * 　静态方法，实现功能选择的逻辑

*  做题逻辑

  ```c++
  static void startPracticing();
  ```

  *   实现做题的逻辑

* 获取历史成绩

  ```c++
  static void getHistoryRecord();
  ```

  *  实现对历史成绩的读取

*  错题练习逻辑

  ```c++
  static void practiceError();
  ```
  *  实现对于错题的复习

*  退出界面

  ```c++
  static void exitSystem();
  ```

  *   实现界面退出
