////
//// Created by chenjiahong on 2022/1/14.
////
//
///**
// * ��ά����
// * 1����ά����
// * @return
// */
//#include <iostream>
//using namespace std;
//
//int main(){
//    /**
//     * ���鶨��
//     */
//     // ��ʽ 1 :
////     int arr[2][3];
////     arr[0][0] = 1;
////     arr[0][1] = 2;
////     arr[0][2] = 3;
////     arr[1][0] = 4;
////     arr[1][1] = 5;
////     arr[1][2] = 6;
//
//    // ��ʽ 2 :
////    int arr[2][3] = {{1,2,3},{4,5,6}};
//
//    // ��ʽ3 : �ڶ����ά����ʱ�������ʼ�������ݣ�����ʡ������
////    int arr[][3] = {1,2,3,4,5,6};
////
////    int len_row = sizeof(arr)/ sizeof(arr[0]);
////     int len_col = sizeof(arr[0])/sizeof(arr[0][0]);
////     cout << "len1 : " << len_row << "\n" << "len2 : " << len_col  << endl;
////    for (int i = 0; i < len_row; ++i) {
////        for (int j = 0; j < len_col; ++j) {
////            cout << "arr[" << i << "][" << j << "]:" << arr[i][j] << endl;
////        }
////    }
//
//    /**
//     * ��ϰ��
//     * 1�����Գɼ�ͳ�ƣ�����������������ͬѧ�����������ģ����壩����һ�ο����еĳɼ��ֱ����±���ֱ��������ͬѧ���ܳɼ�
//     */
//    int arr_score[3][3] = {{100,100,100},{90,50,100},{60,70,80}};
//    string names[3] = {"����","����","����"};
//    int len_row = sizeof(arr_score)/ sizeof(arr_score[0]);
//    int len_col = sizeof(arr_score)[0]/ sizeof(arr_score[0][0]);
//    for (int i = 0; i < len_row; ++i) {
//        cout << names[i] << ": ";
//        int sum = 0;
//        for (int j = 0; j < len_col; ++j) {
//            sum += arr_score[i][j];
////            cout << arr_score[i][j] << "\t";
////            cout << "arr_score["<< i <<"]["<< j <<"] :" << arr_score[i][j] << "\t";
//        }
//        cout <<"ͬѧ���ܳɼ�:" << sum <<  endl;
//    }
//
//
//
//}
