////
//// Created by chenjiahong on 2022/2/10.
//// 构造函数的使用
////
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
//// 括号法
//void test01(){
//    Person p; // 调用无参构造
//    // 注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
////     Person p();
//    Person p1(10); // 调用有参构造
//    Person p2(p1);  // 调用拷贝构造函数
//}
//
//// 显示法
//void test02(){
//    Person p = Person(); // 调用无参构造
//    Person p1 = Person(10); // 调用有参构造
//    Person p2 = Person(p1);  // 调用拷贝构造函数
//    Person(10); // 单独这么写是匿名对象，当前行结束后，马上析构
//    // 注意事项2 ：不要利用拷贝构造函数初始化匿名对象，编译器认为：Person p = Person p;
////    Person p3(p);
//}
//
//// 隐式转换法
//void test03(){
//    Person p1 = 10; // Person p1 = Person(10); 调用有参构造
//    Person p2 = p1; // Person p2 = Person(p1); 调用拷贝构造函数
//}
//
///**
// * 构造函数的调用时机
// * 1、使用一个已经创建完毕的对象来初始化一个新对象
// * 2、值传递的方式给函数参数传值
// * 3、以值方式返回局部对象
// * @return
// */
//// 用一个已经创建完毕的对象来初始化一个新对象
//void invoke01(){
//    Person p1;
//    Person p2(10);
//    Person p3(p2);
//    Person p4 = p3;  // 调用拷贝构造函数
//    cout << "p4.age :" << p4.age << endl;
//    p4 = p1; // 赋值操作,不会调用构造和析构函数
//    cout << "对象赋值" << endl;
//    cout << "p4.age :" << p4.age << endl;
//}
//// 值传递的方式给函数参数传值,形参会创建临时对象
//void doWork01(Person p ){}
//void invoke02(){
//    Person p1;
//    doWork01(p1);
//}
//
//// 以值方式返回局部对象
//Person doWork01(){
//    Person p1;
//    cout << (int*)&p1 << endl;
//    return p1;
//}
//void invoke03(){
//    // 两次打印地址相同，VS打印不同，原因未知
//    Person p2 = doWork01();
//    cout << (int*)&p2 << endl;
//}
//
//int main(){
//    invoke03();
//
//    return 0;
//}
//
