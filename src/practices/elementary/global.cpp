////
//// Created by JM on 2022-01-31.
////
//
///**
// * 程序执行前，内存不同区域的存储情况
// * @return
// */
//
//#include <iostream>
//using namespace std;
//
//// 全局变量
//int g_a = 10;
//int g_b = 10;
//
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main(){
//    // 局部变量
//    int a = 10;
//    int b = 10;
//
//    // 打印地址
//    cout << "局部变量a地址：" << (int)&a << endl;
//    cout << "局部变量b地址：" << (int)&b << endl;
//
//    cout << "全局变量g_a地址:" << (int)&g_a << endl;
//    cout << "全局变量g_b地址：" << (int)&g_b << endl;
//
//    static int s_a = 10;
//    static int s_b = 10;
//
//    cout << "静态变量s_a：" << (int)&s_a << endl;
//    cout << "静态变量s_b：" << (int)&s_b << endl;
//
//    cout << "局部字符串常量地址为： " << (int)&"hello world" << endl;
//    cout << "局部字符串常量地址为： " << (int)&"hello world1" << endl;
//
//    cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
//    cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;
//
//    const int c_l_a = 10;
//    const int c_l_b = 10;
//    cout << "局部常量c_l_a :" << (int)&c_l_a << endl;
//    cout << "局部常量c_l_b :" << (int)&c_l_b << endl;
//
//}