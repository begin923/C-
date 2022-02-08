////
//// Created by chenjiahong on 2022/1/21.
////
//
//#include <iostream>
//using namespace std;
//int main() {
//    int a = 10, b = 20;
//
//    // const 修饰指针，指针指向可以改,指针指向的值不能改
//    cout << "=======const 修饰指针=========" << endl;
//    const int *p1 = &a;
//    cout << "*p1 : " << *p1 << endl;
//    p1 = &b;
//    cout << "*p1 : " << *p1 << endl;
////    *p1 = a + b; // 编译报错
//
//    // const 修饰常量，指针指向不能修改，指针指向的内存空间数值可以修改
//    cout << "========const 修饰常量========" << endl;
//    int *const p2 = &a;
////    p2 = &b;  // 编译失败
//    cout << "*p2 : " << *p2 << "\tp2 : " << p2 << "\t&a : " << &a << endl;
//    *p2 = b;  // p2 指向的内存空间数值发生变更，内存地址不变
//    cout << "*p2 : " << *p2 << "\tp2 : " << p2 << "\t&b : " << &b << "\ta :" << a << "\t&a : " << &a << endl;
//
//    // const 修饰常量也修饰指针
//    const int * const p3 = &a;
////    p3 = &b; // 编译失败
////    *p3 = 100; // 编译失败
//    cout << "*p3 :" << *p3 << endl;
//    return 0;
//}