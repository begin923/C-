////
//// Created by chenjiahong on 2022/1/18.
////
//
///**
// * ��ϰ������ˮ�ɻ���
// * ����������ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
// * ������do...while��䣬�������3λ���е�ˮ�ɻ���
// * @return
// */
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int start = 100,end = 1000;
//    for (int i = start; i < end; ++i) {
//        // 1����ȡ��λ���ݵ�ֵ
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