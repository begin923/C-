////
//// Created by JM on 2021-11-21.
//// �鲢�㷨ʵ��
//
//
//
//#include <cstdio>
//#include <cstring>
//
//void mergeSort(int arr[], int len);
//
//void merge(int *arr, int *tmp ,int start, int len);
//
//int main(){
//
//    int arr[] = {44,3,38,5,47,15,36,26,27,2,46,4,19,50,48};
//    int len = sizeof(arr)/sizeof(int);
//    mergeSort(arr,len);
//    for (int i = 0; i < len; ++i) {
//        printf("%d ",arr[i]);
//    }
//
//    return 0;
//}
//
//void mergeSort(int arr[], int len) {
//    if(len < 2)
//        return;
//    int tmp[len];
//    merge(arr,tmp,0,len-1);
//}
//
///**
// * ��������Ϊ���������б��ֱ�ݹ�������ٺϲ����µ�������
// * @param arr
// * @param tmp
// * @param len
// */
//void merge(int *arr, int *tmp,int low, int high) {
//    if(low >= high)  // �ݹ����
//        return;
//    int mid = low + (high - low)/2;
//    int start1 = low;
//    int end1 = mid;
//    int start2 = mid + 1;
//    int end2 = high;
//    merge(arr,tmp,start1,end1);
//    merge(arr,tmp,start2,end2);
//
//    int i = low;  // ��¼������ʼ���±�
//    // �ݹ�������Ӵ˴�ִ��
//    while (start1 <= end1 && start2 <= end2){
//        tmp[low++] = arr[start1] < arr[start2]?arr[start1++]:arr[start2++];
//    }
//    while (start1 <= end1 ){
//        tmp[low++] = arr[start1++];
//    }
//    while (start2 <= end2){
//        tmp[low++] = arr[start2++];
//    }
//
//    // �� tmp ���������ݸ��Ƶ� arr ������
//    for (i ; i <= high; i++) {
//        arr[i] = tmp[i];
//    }
//
//}
//
//
//
