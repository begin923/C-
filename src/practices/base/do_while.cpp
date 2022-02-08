////
//// Created by chenjiahong on 2022/1/18.
////
//
///**
// * 练习案例：水仙花数
// * 案例描述：水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
// * 请利用do...while语句，求出所有3位数中的水仙花数
// * @return
// */
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int start = 100,end = 1000;
//    for (int i = start; i < end; ++i) {
//        // 1、获取三位数据的值
//        int hundred_num = i / 100;
//        int decade_num = i / 10 % 10;
//        int unit_num = i % 10;
////        cout << "i :" << i << "\thundred_num:" << hundred_num << "\tdecade_num:" << decade_num << "\tunit_num : " << unit_num << endl;
//        int sum = hundred_num * hundred_num * hundred_num +  decade_num * decade_num * decade_num + unit_num * unit_num * unit_num;
//        if(sum == i){
//            cout << "i :" << i << endl;
//        }
//    }
//}