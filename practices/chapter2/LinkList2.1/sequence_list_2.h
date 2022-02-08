////
//// Created by JM on 2021/8/28.
////
//
//#ifndef DATA_STRUCTURE_SEQUENCE_LIST_2_H
//#define DATA_STRUCTURE_SEQUENCE_LIST_2_H
//
//
//#include <mqoai.h>
//#include "malloc.h"
///**
// * 顺序表相关定义
// */
//#define InitSize 10
//// 静态顺序表定义
//typedef struct {
//    int data[InitSize];
//    int length;
//} SqList;
//
//
//// 静态表初始化
//void InitList_S_2(SqList &L){
//    for (int i = 0; i < InitSize; i++) {
//        L.data[i] = 0;  // 设置默认值
//    }
//    L.length = 0;  // 初始化元素长度
//}
//
//// 静态表赋值
//void AssignList_S_2(SqList &L,int start){
//    int i = 0;
//    for ( ; i < InitSize; start++,++i) {
//        L.data[i] = start;
//    }
//    L.length = i;
//}
//
//
//// 动态表定义
//typedef struct {
//    int *data;
//    int MaxSize;
//    int length;
//}SeqList;
//
////void InitList_D(SeqList &L);
////void InCreaseSize(SeqList &L,int len);
//
//// 动态表初始化
//void InitList_D_2(SeqList &L){
////    printf("L : %d\n",L);
//    L.data = (int *)malloc(InitSize * sizeof(int));
//    L.length = 0;
//    L.MaxSize = InitSize;
//}
//
//// 动态顺序表赋值
//void AssignList_D_2(SeqList &L,int start){
//    int i = 0;
//    for ( ; i < L.MaxSize; start++,++i) {
//        L.data[i] = start;
//    }
//    L.length = i;
//}
//
//
//// 增加动态表的长度
//void InCreaseSize_2(SeqList &L,int len){
//    int *p = L.data;
//    L.data = (int *)malloc((L.MaxSize + len) * sizeof(int));
//    for (int i = 0; i < L.length; i++) {
//        L.data[i] = p[i];  // 将数据复制到新区域
//    }
//    L.MaxSize = L.MaxSize + len;  // 顺序表增加长度 len
//    free(p);  // 释放原来的空间
//}
//
//
///**
// * 顺序表按位查找
// * @param L
// * @param i
// * @return
// */
////静态顺序表按位查找
//int GetELem_S_2(SqList L,int i){
//    return L.data[i-1];
//}
//
////动态顺序表按位查找
//int GetELem_D_2(SeqList L,int i){
//    return L.data[i-1];
//}
//
///**
// * 顺序表按值查找
// */
//// 静态/动态
//int GetLocateElem(SeqList L, int e){
//    for (int i = 0; i < L.length; i++) {
//        if (L.data[i] == e)
//            return i + 1;
//    }
//    return 0;
//}
//
//
////结构类型比较
//typedef struct {
//    int num;
//    int people;
//} Customer;
//
//bool StructCompare(Customer c1,Customer c2){
//    if(c1.num == c2.num && c1.people == c2.people){
//        return true;
//    }else
//        return false;
//}
//
//
///**
// * 表数据插入
// */
//void ListInsert(SeqList &L,int loc , int e){
//    if (loc >= L.MaxSize){
//        InCreaseSize_2(L,InitSize);  // 增加表长度
//    }
//    for (int i = L.length; loc <= i; i--) {
//        L.data[i] = L.data[i-1];  // 元素后移
//    }
//    L.data[loc - 1] = e;
//    L.length++;
//}
//
//// 删除元素,并返回删除元素
//bool ListDelete(SeqList &L,int loc , int &e){
//    if(loc > L.length){
//        return false;
//    }
//    e = L.data[loc - 1];
//    for (; loc < L.length ; loc++) {
//        L.data[loc-1] = L.data[loc];
//    }
//    L.length--;
//    return true;
//}
//
//#endif //DATA_STRUCTURE_SEQUENCE_LIST_2_H
