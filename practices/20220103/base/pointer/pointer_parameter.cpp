////
//// Created by chenjiahong on 2022/1/24.
////
//
///**
// * 需要看视频学习
// */
//
//#include <iostream>
//using namespace std;
//
//void swap1(int a , int b){
//    int temp = a;
//    a = b;
//    b = temp;
////    cout << "普通传参 a:" << a << "\tb:" << b << endl;
//}
//
//void swap2(int *a , int *b){
////    cout << "a : " << a << "\tb :" << b << endl;
//    a = b;
//    cout << "a : " << a << "\t*a :" << *a << endl;
//    cout << "a : " << *a << "\tb :" << *b << endl;
//    int temp = *a;
//    cout << "temp :" << temp << endl;
//    *a = *b;
//    *b = temp;
////    cout << "普通传参 a:" << *a << "\tb:" << *b << endl;
//}
//
//int main(){
//    int a = 10, b = 20;
//    cout << "交换前 a:" << a << "\tb:" << b << endl;
//    swap1(a,b);
//    cout << "普通传参交换 a:" << a << "\tb:" << b << endl;
//    swap2(&a,&b);
//    cout << "指针传参交换 a:" << a << "\tb:" << b << endl;
//
//    return 0;
//}