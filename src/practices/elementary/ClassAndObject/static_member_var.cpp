////
//// Created by chenjiahong on 2022/2/17.
//// 静态成员变量演示
////
//
///**
// * 静态成员变量特点
// * 1、在编译阶段分配内存
// * 2、类内声明，类外初始化
// * 3、所有对象共用一份数据
// * 4、静态成员变量也有访问权限
// */
//
//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    static int m_a;
//private:
//    static int m_b;
//};
//
//int Person::m_a = 10;
//int Person::m_b = 10;
//
//void test01(){
//    /**
//     * 静态成员变量访问方式：
//     * 1、通过对象访问
//     * 2、通过类访问
//     */
//
//    Person p1;
//    p1.m_a = 100;
//    cout << "p1.m_a :" << p1.m_a << endl;
//    Person p2;
//    p2.m_a = 200;
//    cout << "p1.m_a :" << p1.m_a << endl; // 所有对象共享一份数据
//    cout << "p2.m_a :" << p2.m_a << endl;
//
//    cout << "m_a :" << Person::m_a << endl;
//
//}
//
//int main(){
//    test01();
//
//    return 0;
//}