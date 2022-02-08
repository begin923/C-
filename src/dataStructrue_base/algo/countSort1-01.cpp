////
//// Created by JM on 2021-11-22.
//// 计数排序算法实现
//
//#include <cstdio>
//
//// 返回数组最大值
//int getArrMax(int *arr, int len) {
//    int tmp = arr[0];
//    for (int i = 1; i < len; ++i) {
//        if(tmp < arr[i])
//            tmp = arr[i];
//    }
//    return tmp;
//}
//void countSort(int arr[], int len ){
//    if(len < 2)
//        return;
//    int max = getArrMax(arr,len);
//    int tmp[max];
//    // 临时数组初始化
//    for (int i = 0; i < max; ++i) {
//        tmp[i] = 0;
//    }
//    for (int j = 0; j < len; ++j) {
//        tmp[arr[j]]++;
//    }
//    for (int k = 0,l = 0; k < max,l < len; ++k) {
//        while (tmp[k] > 0){
//            arr[l++] = k;
//            tmp[k]--;
//        }
//    }
//}
//
//
//
//int main(){
//    int arr[] = {2,3,8,7,1,2,2,2,7,3,9,8,2,1,4,2,4,6,9,2};
//    int len = sizeof(arr)/ sizeof(int);
//    countSort(arr,len);
//    for (int i = 0; i < len; ++i) {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
//
