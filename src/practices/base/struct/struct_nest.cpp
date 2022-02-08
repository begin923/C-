////
//// Created by chenjiahong on 2022/1/26.
////
///**
// * 结构体嵌套：是用来解决实际问题
// */
//
//#include <iostream>
//using namespace std;
//
//struct student{
//    // 成员列表
//    string name;
//    int age;
//    int score;
//};
//
//struct teacher{
//    int id;
//    string name;
//    int age;
//    student stu;  // 子结构，学生
//};
//
//int main(){
//    teacher t1 = {10000,"老王",40,{"张三",18,100}};
//    cout << "教师职工编号： " << t1.id << " ,姓名： " << t1.name << " ,年龄： " << t1.age << endl;
//    cout << "辅导学生姓名：" << t1.stu.name << ",学生年龄：" << t1.stu.age << "，学生分数：" << t1.stu.score << endl;
//    return 0;
//}