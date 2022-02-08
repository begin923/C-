////
//// Created by chenjiahong on 2022/1/14.
////
//
///**
// * 多维数组
// * 1、二维数组
// * @return
// */
//#include <iostream>
//using namespace std;
//
//int main(){
//    /**
//     * 数组定义
//     */
//     // 方式 1 :
////     int arr[2][3];
////     arr[0][0] = 1;
////     arr[0][1] = 2;
////     arr[0][2] = 3;
////     arr[1][0] = 4;
////     arr[1][1] = 5;
////     arr[1][2] = 6;
//
//    // 方式 2 :
////    int arr[2][3] = {{1,2,3},{4,5,6}};
//
//    // 方式3 : 在定义二维数组时，如果初始化了数据，可以省略行数
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
//     * 练习：
//     * 1、考试成绩统计：案例描述：有三名同学（张三，李四，王五），在一次考试中的成绩分别如下表，请分别输出三名同学的总成绩
//     */
//    int arr_score[3][3] = {{100,100,100},{90,50,100},{60,70,80}};
//    string names[3] = {"张三","李四","王五"};
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
//        cout <<"同学的总成绩:" << sum <<  endl;
//    }
//
//
//
//}
