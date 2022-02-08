////
//// Created by JM on 2022-02-05.
////
//
//#include <iostream>
//using namespace std;
//
///**
// * 常量引用的使用
// * @return
// */
//
///**
// * 1、常量引用使用场景：通常用来修饰形参
// * 2、为什么不用值传递呢？
// *      减少额外的数据拷贝时间和减少内存的损耗
// */
//void showValue(const int &val){
//    //    val = 1000;
//    cout << val << endl;
//}
//
//int main(){
////    int &ref = 10; // 引用本身需要一个合法的内存空间，因此直接赋值10会报错{10是自变量，自变量是什么东西，不存储在内存？}
//
//    // 加入const 就可以了， 编译器优化代码：int temp = 10; const int& ref = temp;
//    const int& ref = 10;
////    ref = 100; // 加入 const 后不能修改变量
//
//    // 函数中利用常量引用反之吴操作修改实参
//    int a = 10;
//    showValue(a);
//    cout << "a :" << a << endl;
//
//    return 0;
//}
