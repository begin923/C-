////
//// Created by JM on 2022-02-17.
//// 成员变量与成员函数分开存储
////
//
///**
// *  静态成员变量，存储在全局区,不占对象空间
// *  函数也不占对象空间，所有函数共享一个函数实例
// *  只有非静态成员变量才属于类对象上，才占用存储空间
// */
//
//#include <iostream>
//using  namespace std;
//
//class Person{
//public:
//    int m_a = 0;
//    static int m_b;
//    Person(int a){
//        this->m_a = a;
//    }
//    // 函数也不占对象空间，所有函数共享一个函数实例
//    void func01(){
//        cout << "m_a :" << m_a << endl;
//    }
//
//    static void func02(){
//        cout << "m_b :" << m_b << endl;
//    }
//};
//
//int Person::m_b = 100;
//
//
//int main(){
//    cout << sizeof(Person) << endl;
//
//    return 0;
//}
//
