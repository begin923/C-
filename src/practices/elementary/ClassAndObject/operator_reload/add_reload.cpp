////
//// Created by chenjiahong on 2022/2/23.
//// 加号运算符重载
////
//
//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    int m_a;
//    int m_b;
//
//    Person(){};
//    Person(int a , int b){
//        this->m_a = a;
//        this->m_b = b;
//    }
//
//    // 成员函数实现 + 运算符重载
//    Person operator+(const Person &p1){  // 优化 Person p1 -> const Person &p1
//        Person tmp;
//        tmp.m_a = this->m_a + p1.m_a;
//        tmp.m_b = this->m_a + p1.m_b;
//        return tmp;
//    }
//};
//
//// 全局函数实现 + 运算符重载
////Person operator+(const Person &p1,const Person &p2){  // 优化 Person p1 -> const Person &p1
////    Person tmp;
////    tmp.m_a = p1.m_a + p2.m_a;
////    tmp.m_b = p1.m_a + p2.m_b;
////    return tmp;
////}
//
//void test01(){
//    Person p1(10,10);
//    Person p2(10,10);
//    Person p3 = p1 + p2;
//    cout << p3.m_a << "\t" << p3.m_b << endl;
//}
//
//int main(){
//    test01();
//    return 0;
//
//}