////
//// Created by JM on 2022-02-02.
////
//
//#include <iostream>
//using namespace std;
//
///**
// * 栈区内存的使用
// * 1、由编译器分配释放， 存放函数的参数值、局部变量等
// * 2、注意事项：不要返回局部变量的地址， 栈区开辟的数据由编译器自动释放
// * @return
// */
//
//int * func(){
//    int a = 10;
//    return &a;
//}
//int main(){
//    int *p = func();
//    cout << p << endl; // 第一次调用栈区内存数据会缓存，之后就会被释放
//    cout << p << endl;  // 第二次调用失败，数据已经变脏（编译器释放了）
//    return 0;
//}
