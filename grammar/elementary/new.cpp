////
//// Created by JM on 2022-02-02.
////
//
//#include <iostream>
//using namespace std;
//
///**
// * 1、new 操作符的使用
// * 2、堆区内存释放：delete
// * @return
// */
//
//int * func(){
//    int *a = new int(10);
//    return a;
//}
//int main(){
//    // 创建与释放基本数据类型
//    int *p = func();
//    cout << *p << endl;
//    cout << *p << endl;
//    delete p; // 释放基本数据类型内存
//    cout << *p << endl;
//
//    // 创建与释放数组
//    int *arr = new int[10];
//    for (int i = 0; i < 10; ++i) {
//        arr[i] = i + 100;
//    }
//    for (int j = 0; j < 10; ++j) {
//        cout << arr[j] << endl;
//    }
//    delete[] arr;  // 释放数据内存
//    cout << "===================delete===================" << endl;
//    for (int k = 0; k < 10; ++k) {
//        cout << arr[k] << endl;
//    }
//    return 0;
//}
