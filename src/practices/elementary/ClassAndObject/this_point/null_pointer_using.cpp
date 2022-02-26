////
//// Created by JM on 2022-02-19.
//// 空指针调用成员函数演示
////
//
//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    int m_age;
//
//    void showClassName(){
//        cout << " 我是Person类" << endl;
//    }
//
//    void showPerson(){
//        if (this == NULL){  // 如果用到this指针，需要加以判断保证代码的健壮性
//            return;
//        }
//        // C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
//        cout << "m_age :" << m_age << endl;  // 相当于 this->m_age , this = NULL 时会调用出错
//    }
//};
//
//void test01(){
//    Person *p = NULL;
//    p->showClassName();
//    p->showPerson();
//
//}
//
//int main(){
//    test01();
//
//    return 0;
//}
//
