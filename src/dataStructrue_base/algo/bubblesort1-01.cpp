////
//// Created by JM on 2021-11-21.
////  冒泡排序实现：非递归与递归实现
//
//#include <cstdio>
//
//// 非递归实现
//void bubblesort1(int arr[],int len){
//    if(len < 2)
//        return;
//    int tmp;
//    for (int i = len-1; i > 0 ; i--) {
//        for (int j = 0; j < i; ++j) {
//            if(arr[j] > arr[j+1]){
//                tmp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = tmp;
//            }
//        }
//    }
//}
//
//// 递归实现
//void bubblesort2(int arr[],int len){
//    if(len < 2)
//        return;
//    int tmp;
//    for (int j = 0; j < len-1; ++j) {
//        if(arr[j] > arr[j+1]){
//            tmp = arr[j];
//            arr[j] = arr[j+1];
//            arr[j+1] = tmp;
//        }
//    }
//    bubblesort2(arr,--len);
//}
//
//int main(){
//    int arr[]={44,3,38,5,47,15,36,26,27,2,46,4,19,50,48};
//    int len=sizeof(arr)/sizeof(int);
//
////    bubblesort1(arr,len);
//
//    bubblesort2(arr,len);
//    // 显示排序结果。
//    int ii;
//    for (ii=0;ii<len;ii++)
//        printf("%2d ",arr[ii]);
//
//    printf("\n");
//
//    return 0;
//}
//
