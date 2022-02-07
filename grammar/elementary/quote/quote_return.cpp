////
//// Created by JM on 2022-02-05.
////
//
//#include <iostream>
//using namespace std;
///**
// * 引用做函数返回值
// * 1、不要返回局部变量引用
// * 2、函数调用可以作为左值
// * @return
// */
//
//// 返回局部变量引用
//int & test01(){
//    int a = 10;
//    return a;
//}
//
//// 函数调用做左值
//int & test02(){
//    static int a = 100;
//    return a;
//}
//
//int main(){
//    int &ref01 = test01();
//    cout << "ref01:" << ref01 << endl;  // 编译器仅保留局部变量一次
//    cout << "ref01:" << ref01 << endl; // 第二次调用失败
//
//    cout << "=========================" << endl;
//
//    int &ref02 = test02();
//    cout << "ref02 :" << ref02 << endl;
//    cout << "ref02 :" << ref02 << endl;
//
//    // 函数调用做左值;test02() 相当于 a 的引用
//    test02() = 1000;
//    cout << "ref02 :" << ref02 << endl;
//    cout << "ref02 :" << ref02 << endl;
//
//    return 0;
//
//}