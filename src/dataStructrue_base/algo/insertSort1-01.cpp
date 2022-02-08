////
//// Created by JM on 2021-11-21.
//// 插入排序实现
//
//#include <cstdio>
//
//
//// 非递归算法
//void insertSort1(int arr[],int len){
//    if(len < 2)
//        return;
//    int k;
//    int tmp;
//    for (int i = 0; i < len -1; ++i) {
//        k = i + 1;
//        for (int j = 0; j <= i; ++j) {
//            if(arr[k] < arr[j]){
//                tmp = arr[k];
//                // 元素后移
//                for (int l = k; l >= j; --l) {
//                    arr[l] = arr[l-1];
//                }
//                arr[j] = tmp;
//                break;
//            }
//        }
//    }
//}
//
//// 优化
//void insertSort2(int arr[],int len){
//    if(len < 2)
//        return;
//
//    int tmp;
//    int j;
//
//    for (int i = 1; i < len -1; ++i) {
//        tmp = arr[i];// 带待排元素
//        for (j = i-1; j >= 0; --j) {  // 后移右边已知元素
//            if(arr[j] <= tmp)
//                break;
//            // 元素后移
//            arr[j+1] = arr[j];
//        }
//        arr[j+1] = tmp;
//    }
//}
//
//
//
//int main(){
//    int arr[] = {44,3,38,5,47,15,36,26,27,2,46,4,19,50,48};
//    int len = sizeof(arr)/ sizeof(int);
////    printf("%d\n",len);
//    insertSort2(arr,len);
//    for (int i = 0; i < len; ++i) {
//        printf("%d ",arr[i]);
//    }
//}
//
