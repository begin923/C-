//
// Created by JM on 2021/8/28.
//
#ifndef DATA_STRUCTURE_SEQUENCE_LIST_1_H
#define DATA_STRUCTURE_SEQUENCE_LIST_1_H



#include "malloc.h"
/**
 * 顺序表相关定义
 */
#define InitSize 10
// 静态顺序表定义
typedef struct {
    int data[InitSize];
    int length;
} SqList;


// 静态表初始化
void InitList_S(SqList &L){
    for (int i = 0; i < InitSize; i++) {
        L.data[i] = 0;  // 设置默认值
    }
    L.length = 0;  // 初始化元素长度
}


// 动态表定义
typedef struct {
    int *data;
    int MaxSize;
    int length;
}SeqList;

//void InitList_D(SeqList &L);
//void InCreaseSize(SeqList &L,int len);

// 动态表初始化
void InitList_D(SeqList &L){
//    printf("L : %d\n",L);
    L.data = (int *)malloc(InitSize * sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}


// 增加动态表的长度
void InCreaseSize(SeqList &L,int len){
    int *p = L.data;
    L.data = (int *)malloc((L.MaxSize + len) * sizeof(int));
    for (int i = 0; i < L.length; i++) {
        L.data[i] = p[i];  // 将数据复制到新区域
    }
    L.MaxSize = L.MaxSize + len;  // 顺序表增加长度 len
    free(p);  // 释放原来的空间
}



#endif //DATA_STRUCTURE_SEQUENCE_LIST_1_H
