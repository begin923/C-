////
//// Created by chenjiahong on 2022/1/13.
////
///**
// * ������ʾ
// * @return
// */
//#include <iostream>
//
//using namespace std;
//
//int main(){
//    /**
//     * ���巽ʽ 1
//     */
////    int score[10];
////    // ��ֵ
////    score[0] = 100;
////    score[1] = 99;
////    score[2] = 98;
////
////    // ���
////    for (int i = 0; i < 3; ++i) {
////        cout << "score[" << i << "] : " << score[i] << endl;
////    }
//
//    /**
//     * ���巽ʽ 2
//     */
//    int score2[10] = {100,99,98,70,60,50,40,30,20,10};
//    int len = sizeof(score2)/sizeof(score2[0]);  // �������鳤�ȣ�����Ԫ�ظ�����
//    cout << len << endl;
//    for (int i = 0; i < len ; ++i) {
//        cout << "score2[" << i << "] : " << score2[i] << endl;
//    }
//
//    /**
//     * һά�������Ƶ���;
//     * 1��ͳ�����鳤��
//     * 2����ȡ�����׵�ַ
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
