////
//// Created by JM on 2022-02-03.
////
//
//
//#include <iostream>
//using namespace std;
//
///**
// * 引用-函数传参，修改实参数据：相当于是指针的简化版
// * @return
// */
//
//// 指针版数据交换
//void mySwap01(int *a , int *b){
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// 引用版-数据交换
//void mySwap02(int &a , int &b){
//    int temp = a;
//    a = b;
//    b = temp;
//}
//int main(){
//    int a = 10 , b = 20;
//    mySwap01(&a,&b);
//    cout<< "a:" << a << "\t b:" << b << endl;
//    int a1 = 10 , b1 = 20;
//    mySwap02(a1,b1);
//    cout<< "a:" << a << "\t b:" << b << endl;
//
//    return 0;
//}
