////
//// Created by chenjiahong on 2022/1/18.
////
//
///**
// * 函数
// * 1、函数调用：函数要先声明，后定义;或定义+声明
// * 2、值传递：修改形参不影响实参的值
// * @return
// */
//#include <iostream>
//using namespace std;
//void swap(int a, int b);  // 函数要先声明，后定义;或定义+声明
//
//int main(){
//    int a = 10 , b = 20;
//    swap(a,b);
//    cout << "函数执行后 a:" << a << "\tb:" << b << endl;
//
//}
//
//void swap(int a, int b){
//    cout << "交换前 a:" << a << "\tb:" << b << endl;
//    int temp = a;
//    a = b;
//    b = temp;
//    cout << "交换后 a:" << a << "\tb:" << b << endl;
//}