////
//// Created by JM on 2022-03-01.
//// 关系运算符重载
////
//
//#include <iostream>
//using namespace std;
//
//class Person{
//private:
//    string m_name;
//    int m_age;
//public:
//    Person(string name , int age){
//        this->m_age = age;
//        this->m_name = name;
//    }
//
//    // 重载 == 运算符
//    bool operator==(Person &person){
//        if(this->m_name == person.m_name && this->m_age == person.m_age){
//            return true;
//        }
//        return false;
//    }
//
//    // 重载 == 运算符
//    bool operator!=(Person &person){
//        if(this->m_name == person.m_name && this->m_age == person.m_age){
//            return false;
//        }
//        return true;
//    }
//};
//
//void test01(){
//    Person p1("孙悟空",100);
//    Person p2("孙悟空1",100);
//    if(p1 != p2){
//        cout << "p1 和 p2 不相等" << endl;
//    }else {
//        cout << "p1 和 p2 相等" << endl;
//    }
//}
//
//int main(){
//    test01();
//    return 0;
//}
//
