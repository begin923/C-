////
//// Created by chenjiahong on 2022/1/25.
////
///**
// * 结构体创建方式：有三种
// * 1、struct 结构体名 变量名
// * 2、struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
// * 3、定义结构体时顺便创建变量
// *
// * 常用方式3
// */
//
//#include <iostream>
//using namespace std;
//// 结构体定义
//struct student {
//    string name ; // 姓名
//    int age ; // 年龄
//    int score ; // 分数
//} stu3; // 创建方式3
//
//int main(){
//    student stu1; // struct 关键字可以省略（创建方式1）
//    stu1.name = "张三";
//    stu1.age = 18;
//    stu1.score = 100;
//    cout << "姓名：" << stu1.name << "\t年龄：" << stu1.age << "\t分数: " << stu1.score << endl;
//
//    cout << "================" << endl;
//    student stu2 = {"李四",19,60};
//    cout << "姓名：" << stu2.name << "\t年龄：" << stu2.age << "\t分数: " << stu2.score << endl;
//
//    cout << "================" << endl;
//    stu3.name = "王五";
//    stu3.age = 18;
//    stu3.score = 80;
//    cout << "姓名：" << stu3.name << "\t年龄：" << stu3.age << "\t分数: " << stu3.score << endl;
//
//    return 0;
//}
