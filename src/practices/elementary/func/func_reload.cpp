////
//// Created by JM on 2022-02-05.
////
//
//#include <iostream>
//using namespace std;
//
///**
// * 函数重载：函数名相同，形参不同，提高函数的复用性
// * 1、满足条件：
// *      1、同一个作用域下
// *      2、函数名相同
// *      3、函数参数类型不同或参数个数不同或参数顺序不同
// * 2、注意事项：
// *      1、函数的返回值不可以作为函数重载的条件
// *      2、引用作为函数参数的情况(有无 const 修饰)
// *      3、函数重载碰到参数有默认值{要避免出现}
// * @return
// */
//
//// 函数重载都在统一作用域下
//void func(){
//   cout << "func 的调用！" << endl;
//}
//void func(int a){
//    cout << "func (int a) 的调用！" << endl;
//}
//void func(double a)
//{
//    cout << "func (double a)的调用！" << endl;
//}
//void func(int a ,double b)
//{
//    cout << "func (int a ,double b) 的调用！" << endl;
//}
//void func(double a ,int b)
//{
//    cout << "func (double a ,int b)的调用！" << endl;
//}
////函数返回值不可以作为函数重载条件
////int func(double a, int b)
////{
////	cout << "func (double a ,int b)的调用！" << endl;
////    return 0;
////}
//
//void func1(int &a){
//    cout << "func(int &a) 调用" << endl;
//}
//void func1(const int &a){
//    cout << "func(const int &a) 调用" << endl;
//}
//
//// 有参数默认值的函数重载，要尽量避免
//void func2(int a , int b = 20){
//    cout << "func2(int a , int b = 20) 调用" << endl;
//}
//void func2(int a ){
//    cout << "func2(int a) 调用" << endl;
//}
//
//int main(){
//    // 基本函数重载
////    func();
////    func(10);
////    func(3.14);
////    func(10,3.14);
////    func(3.14 , 10);
//
//    // 函数形参是引用或有默认值
//    int a = 10;
//    func1(a);
//    func1(10);
//
//    func2(10,30);
//
//
//    return 0;
//}