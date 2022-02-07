////
//// Created by JM on 2021-11-21.
//// 快速排序实现
//
//
//
//#include <cstdio>
//
//void qiuckSort(int arr[], int len);
//
//int main(){
//    int arr[] = {44,3,38,5,47,15,36,26,27,2,46,4,19,50,48};
//    int len = sizeof(arr)/ sizeof(int);
//    qiuckSort(arr,len);
//    for (int i = 0; i < len; ++i) {
//        printf("%d ",arr[i]);
//    }
//}
//
///**
// * 左边存储小的元素，右边存储大的元素
// * @param arr
// * @param len
// */
//void qiuckSort(int arr[], int len) {
//    if(len < 2)
//        return;
//    int l = 0;
//    int r = len-1;
//    int tmp = arr[0];
//    int imoving = 2;  // 标识数组左右下标移动 ：2 移动右下标，1 移动左下标
//    while (l < r){
//        if(imoving == 2){
//            if(arr[r] > tmp){// 最右边元素大于哨兵元素，元素不动，r 的下标往前移
//                r--;
//                continue;
//            }
//            // 最右边元素小于哨兵元素，右边元素填补左边空缺
//            arr[l] = arr[r];
//            l++;  // 左边下标右移
//            imoving = 1;
//            continue;
//        }
//
//        if(arr[l] < tmp){  // 最左边元素小于哨兵元素
//            l++;
//            continue;
//        }
//        // 最左边元素大于哨兵元素,填补右边元素空缺
//        arr[r] = arr[l];
//        r--;  // 右边元素下标左移
//        imoving = 2;
//    }
//    arr[l] = tmp;
//    qiuckSort(arr,l);
//    qiuckSort(arr + l + 1,len - l -1);
//}
//
