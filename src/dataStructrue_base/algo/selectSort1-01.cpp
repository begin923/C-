////
//// Created by JM on 2021-11-21.
////  选择排序算法实现
//
//#include <cstdio>
//
//void swap(int &x,int &y){
//    int tmp = x;
//    x = y;
//    y = tmp;
//}
//
//// 非递归
//void selectSort1(int arr[], int len){
//    if(len < 2)
//        return;
//    int i;
//    int iminpos;  // 标记数组中元素最小值的数组下标
//    for (i = 0; i < len-1; i++) {
//        iminpos = i;
//        for (int j = i+1; j < len ; ++j) {
//            if(arr[iminpos] > arr[j])
//                iminpos = j;
//        }
//        if(iminpos != i){
//            swap(arr[i],arr[iminpos]);
//        }
//    }
//}
//
//// 递归
//void selectSort2(int arr[], int len){
//    if(len < 2)
//        return;
//    int i;
//    int iminpos = 0;  // 标记数组中元素最小值的数组下标
//    for (int j = i+1; j < len ; ++j) {
//        if(arr[iminpos] > arr[j])
//            iminpos = j;
//    }
//    if(iminpos != i){
//        swap(arr[i],arr[iminpos]);
//    }
//    selectSort2(arr+1,len); // 传递新的数组：只有包含后面的数据，数组位置为0的数组下标后移；空间复杂度增加
//}
//
//int main(){
//    int arr[]={44,3,38,5,47,15,36,26,27,2,46,4,19,50,48};
//    int len=sizeof(arr)/sizeof(int);
//
//    selectSort1(arr,len);
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
