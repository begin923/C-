//
// Created by JM on 2021/8/3.
//

#ifndef DATA_STRUCTURE_LINK2_2_H
#define DATA_STRUCTURE_LINK2_2_H

// 课后练习 LinkList2.2 小节

#include <clocale>

#define InitSize = 10;
//typedef struct SeqList{
//    int *data;  // 动态数组
//    int Maxsize,length;
//} LNode , *LinkList;

// 第一题：
// 要删除的链表中的元素;使用引用传参，因为函数只能返回一个值
bool Delete_Elem(SeqList &L,int &elem){
    if(L.length == 0){
        return false;
    }
    elem = L.data[0];
    int pos = 0;  // 假设最小值的位置
    for(int i = 1 ; i < L.length ; i++){
        if (elem > L.data[i]){
            elem = L.data[i];
            pos = i;
        }
        L.data[pos] = L.data[L.length-1];
    }
    L.length--;
    return true;

}

// 第二题：
void Reverse(SeqList &L){
    int temp;
    for(int i = 0 ; i < (int)L.length/2 ; i++){
        temp = L.data[i];
        L.data[i] = L.data[L.length-i-1];
        L.data[L.length-i-1] = temp;
    }
}

// 第三题
void DeletedELem(SeqList &L , int x){
    int k = 0;
    for(int i = 0 ; i < L.length ; i++){
        // 当 出现相同值时，跳过 k++ ，在下次的循环中表中元素就往前移动一个元素了
        if (L.data[i] != x){
            L.data[k] = L.data[i];
            k++;
        }
    }
}

// 第4题 : 删除有序顺序表中在 s - t 之间的元素， s >= t 或 表为空报异常
void Deleted_s_t2(SeqList &L , int s , int t){
    // s >= t 或 表为空，返回异常
    if(s >= t || L.length == 0){
        return;
    }

    int i,j;
    /**
     * 表有序，即数据有序
     * 1、提取最后小于 s 的数据
     * 2、提取第一个大于 t 的元素
     */
    for(i = 0 ; L.data[i] < s && i < L.length ; i++);
    for(j = i ; j < L.length && L.data[j] <= t ; j++);
    for(; j < L.length; i++,j++){
        L.data[i] = L.data[j];
    }
    L.length = i;
}

// 第5题：删除顺序表[不一定有序]中在 s - t 之间的元素， s >= t 或 表为空报异常
void deleted_disorder_s_t2(SeqList &L , int s , int t){
    // s >= t 或 表为空，返回异常
    if(s >= t || L.length == 0){
        return;
    }

    int i,k=0;
    for(i = 0 ; i < L.length ; i++){
        if(L.data[i] >= s && L.data[i] <= t){
            k++;
        } else
            L.data[i - k] = L.data[i];
    }
    L.length -= k;
    return;
}


// 第6题:删除有序顺序表中重复的元素：思路：有序表数据是有顺序，按大到小或小到大，故故只需要比较前后两个元素即可判断
void deleteDuplication(SeqList &L){
    int i , j ;
    if(L.length == 0)
        return;
    for(i = 0 ,j = 1; j < L.length ; j++){
        if(L.data[i] != L.data[j]){  //当前元素与下个元素是否相等
            L.data[++i] = L.data[j]; // 后移元素指针
        }
    }
    L.length = i;
    return;
}

// 第7题:合并两个有序顺序表为一个有序表
void mergeList(SeqList &L, SeqList A , SeqList B){
    if(A.length + B.length > L.length)
        return;

    int i , j , k ;
    for (i = 0,j = 0; i < A.length && j < B.length;) {
        if(A.data[i] < B.data[j]){
            L.data[k++] = A.data[i++];
        } else {
            L.data[k++] = B.data[j++];
        }
    }

    for (; i < A.length; ) {  // 可以替换为 while
        L.data[k++] = A.data[i++];
    }

    for (; j < B.length;) {
        L.data[k++] = B.data[j++]; // 执行后，K 变量会加 1 ， 即表元素个数
    }
    L.length = k;
    return;
}


// 第8题 : 数组A[n+m-1]存储 顺序表 a 和 b , 长度分别是 1-m , 1-n
// 假设表、数组数据类型为 int
// 数组元素置换函数

/**
 * 此题思考：
 * 1、数组元素下标与表下标理解不到位，导致数据缺失
 * @param arr
 * @param left
 * @param right
 * @param arraysize
 */

void Reverse(int arr[] , int left , int right , int arraysize){
    if(left >= right || right >= arraysize){
        return;
    }
    int mid = (int)(left + right)/2 ;
//    printf("mid is %d \n" , mid);
    if(left <= mid){
        for (int i = 0; i < mid - left; i++) {
            int temp = arr[left + i];
            arr[left + i] = arr[right - i];
            arr[right - i] = temp;
        }
    } else {
        for (int i = 0; i < left - mid; i++) {
            int temp = arr[left + i];
            arr[left + i] = arr[right - i];
            arr[right - i] = temp;
        }
    }
    return;
}

void Exchange(int arr[],int m , int n , int arraysize){
    Reverse(arr,0 ,m + n -1 , arraysize);  // 全局置换数组元素
//    printf("111111111111111111==============================\n");
//    for (int i = 0 ; i < m + n ; i++){
//        printf("arr elem Reserve is %d , %d \n",arr[i] , i);
//    }

    Reverse(arr,0 ,n - 1 , arraysize);  // 置换头部数组元素
//    printf("222222222222222222222==============================\n");
//    for (int i = 0 ; i < m + n ; i++){
//        printf("arr elem Reserve is %d , %d \n",arr[i] , i);
//    }

    Reverse(arr, n ,m + n -1 , arraysize);  // 置换尾部数组元素
//    printf("3333333333333333==============================\n");
//
//    for (int i = 0 ; i < m + n ; i++){
//        printf("arr elem Reserve is %d , %d \n",arr[i] , i);
//    }
}

/**
 * 第 9 题
 */


#endif //DATA_STRUCTURE_LINK2_2_H
