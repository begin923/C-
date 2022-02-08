////
//// Created by JM on 2021-11-22.
//// 桶排序实现
//
//
//
//
//#include <cstdio>
//#include <cstring>
//
//void bucketSort(int arr[], int len);
//
//void bubblesort(int *arr, int len);
//
//void swap(int &x, int &y);
//
//int main(){
//    int arr[] = {21,3,30,44,15,36,6,10,9,19,25,48,5,23,47};
//    int len = sizeof(arr)/ sizeof(int);
//    printf("排序前：");
//    for (int i = 0; i < len; ++i) {
//        printf("%d ",arr[i]);
//    }
//
//    bucketSort(arr,len);
//
//    printf("\n排序后：");
//    for (int j = 0; j < len; ++j) {
//        printf("%d ",arr[j]);
//    }
//}
//
//void bucketSort(int arr[], int len) {
//    if(len < 2)
//        return;
//    // 设置桶数量即每个桶的大小
//    int buckets[5][5];
//    int bucketsize[5]; // 记录桶元素数量
//
//    // 1、桶初始化
//    memset(buckets,0, sizeof(buckets));
//    memset(bucketsize,0, sizeof(bucketsize));
//
//    // 2、数据分别放到不同的桶里面，且记录桶中元素个数
//    for (int i = 0; i < len; ++i) {
//        buckets[arr[i]/10][bucketsize[arr[i]/10]++] = arr[i];  // 使用链表实现
//    }
//
//    // 3、桶内元素排序
//    for (int j = 0; j < 5; ++j) {
//        bubblesort(buckets[j],bucketsize[j]);
//    }
//
//    int l = 0;
//    for (int k = 0; k < 5; ++k) {
//        for (int i = 0; i < bucketsize[k]; ++i) {
//            arr[l++] = buckets[k][i];
//        }
//    }
//
//}
//
//void bubblesort(int *arr, int len) {
//    if(len < 2)
//        return;
//    for (int i = len-1; i > 0 ; --i) {  // 注意此处：i = len-1，遍历次数由大到小
//        for (int j = 0; j < i ; ++j) {
//            if(arr[j] > arr[j+1])
//                swap(arr[j],arr[j+1]);
//        }
//    }
//}
//
//void swap(int &x, int &y) {
//    int tmp = x;
//    x = y;
//    y = tmp;
//}
//
//
//
