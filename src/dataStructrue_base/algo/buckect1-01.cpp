////
//// Created by JM on 2021-11-22.
//// Ͱ����ʵ��
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
//    printf("����ǰ��");
//    for (int i = 0; i < len; ++i) {
//        printf("%d ",arr[i]);
//    }
//
//    bucketSort(arr,len);
//
//    printf("\n�����");
//    for (int j = 0; j < len; ++j) {
//        printf("%d ",arr[j]);
//    }
//}
//
//void bucketSort(int arr[], int len) {
//    if(len < 2)
//        return;
//    // ����Ͱ������ÿ��Ͱ�Ĵ�С
//    int buckets[5][5];
//    int bucketsize[5]; // ��¼ͰԪ������
//
//    // 1��Ͱ��ʼ��
//    memset(buckets,0, sizeof(buckets));
//    memset(bucketsize,0, sizeof(bucketsize));
//
//    // 2�����ݷֱ�ŵ���ͬ��Ͱ���棬�Ҽ�¼Ͱ��Ԫ�ظ���
//    for (int i = 0; i < len; ++i) {
//        buckets[arr[i]/10][bucketsize[arr[i]/10]++] = arr[i];  // ʹ������ʵ��
//    }
//
//    // 3��Ͱ��Ԫ������
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
//    for (int i = len-1; i > 0 ; --i) {  // ע��˴���i = len-1�����������ɴ�С
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
