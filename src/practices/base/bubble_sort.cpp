////
//// Created by chenjiahong on 2022/1/13.
////
//
///**
// * ð��������ʾ
// * 1���Ƚ�����Ԫ�أ� ��һ�ȵڶ����󣬾ͽ���
// * 2����ÿ�����ڵ�Ԫ���ظ���1�����ҵ����ֵ
// * 3���ظ����ϲ��裬ÿ�αȽϴ���-1 �� ֱ������Ҫ�Ƚ�
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
