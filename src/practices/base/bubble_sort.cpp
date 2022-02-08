////
//// Created by chenjiahong on 2022/1/13.
////
//
///**
// * 冒泡排序演示
// * 1、比较相邻元素， 第一比第二个大，就交换
// * 2、对每个相邻的元素重复第1步，找到最大值
// * 3、重复以上步骤，每次比较次数-1 ， 直到不需要比较
// * @return
// */
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int arr[9] = {4,2,8,0,5,7,1,3,9};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    cout << "len : " << len << endl;
//    for (int i = 0; i < len - 1 ; ++i) {
//        for (int j = 0; j < len - i - 1 ; ++j) {
//            if(arr[j] > arr[j+1]){
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//
//    for (int k = 0; k < len; ++k) {
//        cout << "arr[" << k << "] : " << arr[k] << endl;
//
//    }
//
//    return 0;
//
//}
