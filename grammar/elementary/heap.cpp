////
//// Created by JM on 2022-02-02.
////
//
//#include <iostream>
//using namespace std;
//
///**
// * 堆区的使用
// * 1、由程序员管理和释放
// * 2、利用new关键字进行开辟堆内存
// * @return
// */
//
//int * func()
//{
//    // 利用new关键字，可以将数据开辟带堆区，返回的是内存地址
//    int *p = new int(10);  // p 指针是局部变量，是放在栈区，指针指向的数据放在堆区
//    cout << p << endl;
//    return p;
//}
//int main(){
//    // 在堆区开辟数据
//    int *p = func();
//    cout << p << endl;
//    cout << p << endl;
//    cout << p << endl;
//    return 0;
//}