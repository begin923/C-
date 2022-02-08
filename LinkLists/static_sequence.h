//
// Created by JM on 2021/7/28.
//

#ifndef DATA_STRUCTURE_STATIC_SEQUENCE_H
#define DATA_STRUCTURE_STATIC_SEQUENCE_H
#define MaxSize 10  // 定义最大长度

// 顺序表 - 静态分配实现
typedef struct {
    int data[MaxSize]; // 用静态"数组"存放数据元素
    int length;
} SqlList;

// 基本操作-初始化一个顺序表
void InitList(SqlList &L){
    // 没有设置默认值，内存会遗留脏数据
    // 初始化所有元素
    for (int i = 0; i < MaxSize ; i++){
        L.data[i] = 0;
    }
    L.length = 0;  // 顺序表初始长度为 0
}


#endif //DATA_STRUCTURE_STATIC_SEQUENCE_H
