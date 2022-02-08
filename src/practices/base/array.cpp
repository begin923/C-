////
//// Created by chenjiahong on 2022/1/13.
////
///**
// * 数组演示
// * @return
// */
//#include <iostream>
//
//using namespace std;
//
//int main(){
//    /**
//     * 定义方式 1
//     */
////    int score[10];
////    // 赋值
////    score[0] = 100;
////    score[1] = 99;
////    score[2] = 98;
////
////    // 输出
////    for (int i = 0; i < 3; ++i) {
////        cout << "score[" << i << "] : " << score[i] << endl;
////    }
//
//    /**
//     * 定义方式 2
//     */
//    int score2[10] = {100,99,98,70,60,50,40,30,20,10};
//    int len = sizeof(score2)/sizeof(score2[0]);  // 计算数组长度（数组元素个数）
//    cout << len << endl;
//    for (int i = 0; i < len ; ++i) {
//        cout << "score2[" << i << "] : " << score2[i] << endl;
//    }
//
//    /**
//     * 一维数组名称的用途
//     * 1、统计数组长度
//     * 2、获取数组首地址
//     */
//    int length = sizeof(score2)/sizeof(score2[0]);
//    cout << "============= array's using ===============" << endl;
//    cout << "length : " << length << endl;
//    cout << "addr of array first : " << &score2[0] << endl;
//    cout << "addr of array first : " << score2 << endl;
//
//
//    cout << "============= array reverse ===============" << endl;
//    int arr1[5] = {1,3,2,5,4};
//    for (int j = sizeof(arr1)/ sizeof(arr1[0]) - 1; j >= 0  ; j--) {
//        cout << "arr1[" << j+1 << "] :" << arr1[j] << endl;
//    }
//
//    return 0;
//}
