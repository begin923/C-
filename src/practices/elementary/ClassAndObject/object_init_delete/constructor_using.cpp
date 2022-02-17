////
//// Created by chenjiahong on 2022/2/10.
//// 构造函数的使用
////
//
///**
// * 两种分类方式：
// * 按参数分为： 有参构造和无参构造
// * 按类型分为： 普通构造和拷贝构造
// * 三种调用方式：
// *  括号法
// *  显示法
// *  隐式转换法
// */
//
//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    int age;
//
//public:  // 构造函数定义
//    // 无参构造函数
//    Person(){
//        cout << "调用无参构造函数"<< endl;
//    }
//    // 有参构造函数
//    Person(int a){
//        age = a;
//        cout << "调用有参构造函数"<< endl;
//    }
//    // 拷贝构造函数
//    Person(const Person &p){
//        cout << "调用拷贝构造函数"<< endl;
//    }
//    // 析构函数
//    ~Person(){
//        cout << "调用析构函数"<< endl;
//    }
//};
//
//int main(){
//    // 括号法
////    Person p; // 调用无参构造
//    // 注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
////    Person p();
////    Person p1(10); // 调用有参构造
////    Person p2(p1);  // 调用拷贝构造函数
//
//    // 显示法
////    Person p = Person(); // 调用无参构造
////    Person p1 = Person(10); // 调用有参构造
////    Person p2 = Person(p1);  // 调用拷贝构造函数
////    Person(10); // 单独这么写是匿名对象，当前行结束后，马上析构
//    // 注意事项2 ：不要利用拷贝构造函数初始化匿名对象，编译器认为：Person p = Person p;
////    Person(p);
//
//    // 隐式转换法
//    Person p1 = 10; // Person p1 = Person(10); 调用有参构造
//    Person p2 = p1; // Person p2 = Person(p1); 调用拷贝构造函数
//
//
//}
//
