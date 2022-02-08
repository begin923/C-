////
//// Created by chenjiahong on 2022/1/6.
////
///**
// * 运算符操作
// */
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    /**
//     * 算术运算符:  加、减、乘、除
//     */
////     int a1 = 10,b1 = 3;
////     cout << a1 + b1 << endl;
////     cout << a1 - b1 << endl;
////     cout << a1 * b1 << endl;
////     cout << a1/b1 << endl;
//
////    cout << "=====================" << endl;
////    int a2 = 10 , b2 = 20;
////    cout << a2/b2 << endl;  // 两个整数相除 = 整数
//////    cout << a2 / 0 << endl;  // 会报错， 除数不能为 0
//
////    double d1 = 0.5;
////    double d2 = 0.25;
////    cout << "d1/d2 : " << d1/d2 << endl;  // 浮点数相除
////
////    cout << "a2%b2:" << a2 % b2 << endl;  // 取模(b2 不能为 0 ; 只有整数才能取模)
////    // cout << d1 % d2 << endl;  // invalid operands of types 'double' and 'double' to binary 'operator%' (只有整数才能取模)
//
//    cout << "=====================" << endl;
//
////     // 前置递增
////    int a3 = 10;
////    ++a3;
////    cout << "a3 :" << a3 << endl;
////    // 后置递增
////    int b3 = 10;
////    b3++;
////    cout << "a3 :" << b3 << endl;
////
////    /**
////     * 前置与后置的区别
////     * 前置：先++ ， 再参与计算
////     * 后置：先计算，再++
////     */
////     int a4 = 10;
////     int b4 = ++a4 * 10;
////     cout << "pre b4 : " << b4 << endl;
////
////     int a5 = 10;
////     int b5 = a5++ * 10;
////     cout << "back b5 : " << b5 << endl;
//
//
//    // 赋值运算符
//    // 略
//
//    // 比较运算符 ： 返回true(1) or false(0)
//    // 略
//
//    // 逻辑运算符
//    int a6 = 10;
//    cout << "======== not ==========" << endl;
//    cout << "!a6 : " << !a6 << endl;
//    cout << "!!a6 : " << !!a6 << endl;
//
//    cout << "========= and =========" << endl;
//    int a7 = 10;
//    int b7 = 10;
//    cout << "(a7 && b7): "  << (a7 && b7) << endl; // 1
//
//    int a8 = 10;
//    int b8 = 0;
//    cout << "(a8 && b8): "  << (a8 && b8) << endl; // 0
//
//    int a9 = 0;
//    int b9 = 0;
//    cout << "(a9 && b9): "  << (a9 && b9) << endl; // 0
//
//    cout << "========= or =========" << endl;
//    int a10 = 10;
//    int b10 = 10;
//    cout << "(a10 || b10) : " << (a10 || b10) << endl;
//
//    int a11 = 10;
//    int b11 = 0;
//    cout << "(a11 || b11) : " << (a11 || b11) << endl;
//
//    int a12 = 0;
//    int b12 = 0;
//    cout << "(a12 || b12) : " << (a12 || b12) << endl;
//
//    return EXIT_SUCCESS;
//}
