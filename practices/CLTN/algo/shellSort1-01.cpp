////
//// Created by JM on 2021-11-21.
//// 希尔排序
//
//#include <cstdio>
//
//void swap(int &x, int &y){
//    int tmp = x;
//    x = y;
//    y = tmp;
//}
//
//void groupSort(int arr[],int len,int ipos,int istep){
//
//    int i;
//    int j;
//    int tmp;
//    for (i = ipos+istep; i < len; i += istep) {
//        tmp = arr[i];  // 待排元素，在数组尾部
//        /**
//         * 原理
//         * 1、插入排序的优化：利用增量序列
//         * 2、每次排序，前面的元素组成一个已排序的数组，后面的元素对已排序数组进行插入排序
//         */
//        for (j = i - istep; j >= 0 ; j = j - istep) {
//            if (tmp >= arr[j])
//                break;
//            arr[j + istep] = arr[j]; // 元素后移
//        }
//        arr[j + istep] = tmp;
//    }
//}
//
//void shellSort(int arr[],int len){
//    if(len < 2)
//        return;
//    int istep;
//    for (int i = 0; i < len; ++i) {  // 分组排序的起始地址
//        for (istep = len/2; istep > 0; istep = istep/2) {
//            groupSort(arr,len,i,istep);
//        }
//    }
//}
//
//int main(){
//    int arr[] = {44,3,38,5,47,15,36,26,27,2,46,4,19,50,48};
//    int len = sizeof(arr)/ sizeof(int);
//    shellSort(arr,len);
//    for (int i = 0; i < len; ++i) {
//        printf("%d ",arr[i]);
//    }
//}
//
