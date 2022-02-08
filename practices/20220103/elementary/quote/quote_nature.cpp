////
//// Created by JM on 2022-02-05.
////
//
//#include <iostream>
//using namespace std;
//
///**
// * 引用的本质：c++内部实现是指针常量（int * const ref）
// * @return
// */
//
//// 发现是引用，转换为 int* const ref = &a;  // 初始化
//void func(int &ref){
//    ref = 100; // rerf 是引用，会转换为 *ref = 100;
//}
//int main(){
//    int a = 10;
//    // 自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
//    int &ref = a;
//    ref = 20; // 内部发现 ref 是引用，自动帮助转换为 *ref = 20;
//
//    cout << "a :" << a << endl;
//    cout << "ref :" << ref << endl;
//
//    func(a);
//
//    return 0;
//}