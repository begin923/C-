////
//// Created by chenjiahong on 2022/2/10.
//// 对象的初始化和清理 - 构造函数和析构函数
//// 构造函数解决对象没有初始化问题；主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用。
//// 析构函数解决对象初始化后没有回收问题；主要作用在于对象销毁前系统自动调用，执行一些清理工作
//
//#include <iostream>
//using namespace std;
//
//class Person{
//    friend void test();
//private:
//    int m_num;
//public:
//    // 构造函数
//    Person(int num){
//        this->m_num = num;
//        cout << "调用构造函数"<< endl;
//    }
//    // 析构函数
//    ~Person(){
//        cout << "调用析构函数"<< endl;
//    }
//};
//
//void test(){
//    Person p1(10);
//    Person p2(20);
//    cout << p1.m_num << endl;
//    cout << p2.m_num << endl;
//    p2 = p1;
//    cout << p1.m_num << endl;
//    cout << p2.m_num << endl;
//    cout << "test 0000011111 " << endl;
//}
//
///**
// * 构造函数与析构函数使用
// * @return
// */
//int main(){
//    test();
//    return 0;
//}
