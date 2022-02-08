////
//// Created by chenjiahong on 2022/1/26.
////
///**
// * 结构体作为参数传递
// * 1、作为值传递 : 不修改实参的数据
// * 2、作为地址传递 ： 修改实参的数据
// * @return
// */
//
//#include <iostream>
//using namespace std;
//
//// 结构体定义
//struct student {
//    string name;
//    int age;
//    int score;
//};
//
//// 函数声明与定义
//// 值传递
//void printStudent(student stu){
//    stu.age = 28;
//    cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age  << " 分数：" << stu.score << endl;
//}
//
//// 地址传递
//void printStudent2(student *stu ){
//    stu->age = 28;
//    cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age  << " 分数：" << stu->score << endl;
//}
//
//int main(){
//    student stu = {"张三",18,100};
//    printStudent(stu);
//    cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//    printStudent2(&stu);
//    cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age  << " 分数：" << stu.score << endl;
//
//    return 0;
//}