////
//// Created by JM on 2022-02-17.
//// this 指针的概念与使用
////
//
//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    int m_age;
//    Person(int age){
//        this->m_age = age;
//    }
//    Person & PersonAddPerson(Person p){
//        this->m_age += p.m_age;
//        return *this;
//    }
//};
//
//void test01(){
//    Person p1(10);
//    cout << p1.m_age << endl;
//    Person p2(10);
//    Person p3 = p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);  // 要独立一行，不能写到cout << << endl; 里面
//    cout << p2.m_age << "\t" << p3.m_age << endl;
//}
//
//int main(){
//    test01();
//
//    return 0;
//}
//
