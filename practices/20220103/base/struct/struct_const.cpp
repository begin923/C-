////
//// Created by chenjiahong on 2022/1/26.
////
//
///**
// * 结构体中 const 的使用场景
// * @return
// */
//
//#include <iostream>
//using namespace std;
//
////学生结构体定义
//struct student
//{
//    //成员列表
//    string name;  //姓名
//    int age;      //年龄
//    int score;    //分数
//};
//
//// const 使用场景
//void printStudent(const student *stu){  // 加const防止函数体中的误操作
////    stu->age = 100; // 编译失败 ， const 修饰的变量不能修改
//    cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
//}
//
//int main(){
//    student stu = {"张三",18,100};
//    printStudent(&stu);
//}