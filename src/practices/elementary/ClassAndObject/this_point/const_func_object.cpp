////
//// Created by JM on 2022-02-19.
//// const 修饰的成员函数与对象
////
//
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Person{
//public:
//    string m_name = "张三";
//    mutable int m_age;  // 想要在const 修饰的成员函数或对象中修饰成员变量的值，要加 mutable(可变的)
//
//    /**
//     * const 修饰成员函数
//     * 1、this 的本质是：指针常量（Person * const this） ,this 指针指向（this->m_name）不能修改， 指针的值可以修改
//     * 2、在成员函数后面加上 const , 相当于是修改this ； 即 const Person * this; this 指针指向和this值都不能修改
//     */
//    void func1() const {
////        this->m_name = "张三";
//        cout << this->m_name << endl;
//        this->m_age = 21; // 要在const 修饰的成员函数或对象中修饰成员变量的值，要加 mutable(可变的)
//    }
//
//    void func2(){
//        this->m_age = 20;
//    }
//};
//
//void test01(){
//    // const 修饰对象
//    const Person p = Person(); // 常对象
//    cout << p.m_name << endl;// 常对象不能修改成员变量的值，但是可以访问
//    p.func1();
////    p.func2(); // 常对象只能调用常函数,不能调用非常函数
//    Person p2;
//    p2.func1();  // 普通对象可以调用const 修饰的函数
//    p2.m_name = "王宇";
//    cout << p2.m_name << "\t\t"<< p2.m_age << endl;
//}
//
//int main(){
//    test01();
//}
//
