//
// Created by JM on 2021/8/8.
//

// 引入其他头文件
#include <math.h>
#include "../../../LinkLists/initList.h"

#ifndef DATA_STRUCTURE_EXAMPLES_H
#define DATA_STRUCTURE_EXAMPLES_H

#endif //DATA_STRUCTURE_EXAMPLES_H

// algo LInkList2.3 : 在顺序表 i 的位置之前插入新的元素 e
int ListInsert(SqList &L,int i, int e){
    if (i >= 1 && i <= L.length + 1 && L.length < L.initSize){  // 判断元素写入的合法范围

    }
    else if (L.length > L.initSize){ // 存储空间已满，增加分配空间
        int *newbase = (int *)realloc(L.data , L.increase * sizeof(int));
        if(!newbase) exit(OVERFLOW);
        L.data = newbase;
        L.initSize = L.initSize + L.increase;  // 增加表初始长度
        int &q   = &(L.data[i - 1]);
    }
    else
        return 0;
}