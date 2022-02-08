////
//// Created by chenjiahong on 2022/1/20.
////
//
///**
// * 1、空指针和野指针都不是我们申请的空间，因此不要访问
// */
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int *p = NULL;
//    cout << "\tp:" << p << endl;
////    cout << "*p : " << *p << endl;  // 空指针
//
//    int *p1 = (int *)0x1100;
////    cout << "*p1 : " << *p1 << endl;  // 野指针
//    return 0;
//}
