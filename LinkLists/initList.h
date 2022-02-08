//
// Created by JM on 2021/8/8.
//

#include <cstdlib>
#include "stdio.h"
#ifndef DATA_STRUCTURE_INITLIST_H
#define DATA_STRUCTURE_INITLIST_H
#include <iostream>

// 练习专用顺序表及初始化函数
#define InitSize = 10
typedef struct SeqList{
    int *data;  // 动态数组
    int length , increase = 10 ,initSize = 10;
} *LNode , SqList;  // LNode 是指针， SqList 是[顺序]表，是值

// 队列初始化函数
void InitList(SqList &L,int length, int init_elem = 0 , int sort_type = 0 ){  // 初始化长度,表初始化的以第一个元素值, 递增 0 , 递减 1 , 同一个值
    L.data = (int *)malloc(L.initSize * sizeof(int));
//    L.data = new int[10];
    L.length = 0;
    // 初始化5个元素，供练习删除与插入
    int i = init_elem;
    int j = 0;
    if(sort_type == 0){
        for(; j < length ; ){
//            printf("sort is %d " , j );
//            printf("sort is %d \n",i);
            L.data[j] = i++;
            L.length = ++j;
//        printf("insert elem : %d \n" , i);
        }
    } else if (sort_type == 1){
        for(; j < length ;){
//            printf("sort is %d \n",i);
            L.data[j] = i--;
            L.length = ++j;
//        printf("insert elem : %d \n" , i);
        }
    } else if (sort_type == 2){
        for( ; j < length ; ){
//            printf("sort is %d \n",i);
            L.data[j] = i;  // 只初始化为同一个值
            L.length = ++j;
//        printf("insert elem : %d \n" , i);
        }
    }

    L.length = L.initSize;
    return ;
}

// 增加动态数组的长度
void IncreaseListSize(SqList &L , int len){

//    printf("L.length : %d \n",L.length );
    // 顺序表指针地址赋值给指针 p
    int *p = L.data;
    // 重置顺序表指针地址
    L.data = new int(L.increase + len);
    // 复制原始数据到新区域
    for(int i = 0 ; i < L.length ; i++){
        L.data[i] = p[i];
    }
//    L.MaxSize = L.increase + len;
//    printf("L.length : %d \n",L.length );
    printf("increase -- length = %d , current datas = %d , MaxSize = %d \n " , len , L.length, L.increase);
    // 释放原始空间
    free(p);
}

#endif //DATA_STRUCTURE_INITLIST_H
