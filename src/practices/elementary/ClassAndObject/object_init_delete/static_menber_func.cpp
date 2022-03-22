////
//// Created by chenjiahong on 2022/2/17.
//// 静态成员函数
////
//
///**
// * 静态成员函数特定说明
// * 1、程序共享一个函数
// * 2、静态成员函数只能访问静态成员变量 , 非静态成员函数可以调用静态成员变量
// * 3、静态成员函数也是有访问权限的
// */
//
//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    static int m_a;
//    int m_b;
//
//    static void func1(){
//        cout << "调用 func1 " << endl;
//        cout << m_a << endl;
////        cout << m_b << endl; // 编译报错，静态成员函数不能访问非静态成员变量
//    }
//
//    void func3(){
//        cout << "调用func3" << endl;
//        cout << m_a << endl;
//    };
//
//    void func4(){
//        func3();
//    }
//
//private:
//    static void func2(){
//        cout << "调用 func2" << endl;
//    }
//};
//
//int Person::m_a = 100;
//
//void check(){
//    Person p1;
//    p1.func1();
//
//    Person::func1();
////    Person::func2(); // 编译失败，类外不能调用私有权限的静态成员函数
//
//    p1.func3();
//}
//
//int main(){
//    check();
//
//    return 0;
//}