//
// Created by JM on 2021/7/28.
//

#ifndef DATA_STRUCTURE_DYNAMIC_SEQUENCE_H
#define DATA_STRUCTURE_DYNAMIC_SEQUENCE_H

// 顺序表-动态分配实现
#include <cstdlib>
#include "stdio.h"

#define InitSize 10  // 默认的最长长度
typedef struct {
    int *data;
    int MaxSize;  // 顺序表的最大容量
    int length;   // 顺序表的当前长度
} SqlList;

void IncreaseSize(SqlList &L, int i);

// 初始化顺序表
void InitList(SqlList &L){
    L.data = (int *)malloc(InitSize * sizeof(int));  // c 语言
    L.data = new int[InitSize];  // c++
    L.length = 0 ;
    L.MaxSize = InitSize;
}

// 往列表后面追加元素
void AddElem(SqlList &L , int elem){

//    printf("L.length : %d , L.MaxSize : %d \n "  , L.length , L.MaxSize);

    // 当前元素个数未达到上限
    if (L.length < L.MaxSize){
        L.data[L.length] = elem;
        L.length += 1;
        printf("0011  -- insert data = %d success \n" , elem);
        return;
    }
    else {
        // 元素最大长度达到上限，增加表最大上限，每次增加初始化个长度
        IncreaseSize(L,InitSize);
        // 再增加元素在表后面
        AddElem(L , elem);  // 递归
        printf("000 -- insert data = %d success \n" , elem);
        return;
    }
}

// 与上面的函数构造重载函数：函数名一样，传参不一样
void AddElem(SqlList &L ,int loc , int elem){

    int i = 1;

//    printf("L.length : %d , L.MaxSize : %d \n "  , L.length , L.MaxSize);

    // 最大只能插入在表最后
    if(L.length < L.MaxSize && loc < (L.length + 1)){
        // 元素往后移动
        for(int j = 0 ; (L.length - i) < (loc - 1); i++,j++){
            L.data[L.length - j] = L.data[L.length - i] ;
        }
        L.data[L.length - i] = elem;
        L.length += 1;
        printf("111 - insert %d loction insert data = %d success L.length : %d \n " , loc, L.length);
    }
    else if(L.length == L.MaxSize && loc < (L.length + 1)){
        // 元素最大长度达到上限，增加表最大上限，每次增加初始化个长度
        IncreaseSize(L,InitSize);
        // 元素往后移动 length - loc + 1 个元素
        for(int j = 0 ; (L.length - i) >= (loc - 1); i++,j++){
            L.data[L.length - j] = L.data[L.length - i] ;
            printf("L.data[%d] : %d \n " ,L.length - i, L.data[L.length - i]);
        }
        // 并赋值给 loc - 1 的位置
        L.data[loc - 1] = elem;
        L.length += 1;
        printf("222 - insert %d loction insert data success , L.length : %d \n " , loc, L.length);
    }
    else {
        printf("error - insert %d loction insert data faild \n" , loc);
    }
}

// 增加动态数组的长度
void IncreaseSize(SqlList &L , int len){

//    printf("L.length : %d \n",L.length );
    // 顺序表指针地址赋值给指针 p
    int *p = L.data;
    // 重置顺序表指针地址
    L.data = new int(L.MaxSize + len);
    // 复制原始数据到新区域
    for(int i = 0 ; i < L.length ; i++){
        L.data[i] = p[i];
    }
    L.MaxSize = L.MaxSize + len;
//    printf("L.length : %d \n",L.length );
    printf("increase -- length = %d , current datas = %d , MaxSize = %d \n " , len , L.length, L.MaxSize);
    // 释放原始空间
    free(p);
}

#endif //DATA_STRUCTURE_DYNAMIC_SEQUENCE_H
