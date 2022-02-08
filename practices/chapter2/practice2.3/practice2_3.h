//
// Created by JM on 2021/9/19.
//

#ifndef DATA_STRUCTURE_PRACTICE2_3_H
#define DATA_STRUCTURE_PRACTICE2_3_H


#include <malloc.h>
#include <clocale>
#include "../LinkList2.2/single_LinkList.h"

//typedef struct LNode{
//    int data;
//    struct LNode * next;
//}Lnode , * LinkList;
//
//bool InitLinkList(LinkList &L){
//    L = NULL;  // 空表， 暂时没有任何节点，防止脏数据
//    return true;
//}
//
//bool InitLinkListHead(LinkList &L){
//    L = (LinkList)malloc(sizeof(Lnode));  // 分配头节点
//    if (L == NULL){
//        return false;  // 初始化[分配]失败，内存不足
//    }
//    L->next = NULL;
//    return true;
//}

bool CreateLinkListNotHeadFromTail_p(LinkList &L, int loop , int start_num){
    InitLinkList(L);
    LinkList s,r;
//    int c = 10;
    while (loop > 0){
        s = (LinkList)malloc(sizeof(Lnode));
        if(loop )
        s->data = start_num;
        s->next = NULL;
        if (L == NULL){  // 第一个节点
            L = s;
            r = L;
        } else{
            r->next = s;
            r = s;
        }
        loop--;
    }
    return true;
}

// 第一题
void del_x(LinkList &L,int x){
    LinkList p;
    if(L == NULL){
        return;
    } else{
        p = L;
        if(p->data == x){
            p = p->next;
            del_x(p,x);
            free(p);
        }
        del_x(p->next,x);
        free(p);
    }
}


#endif //DATA_STRUCTURE_PRACTICE2_3_H
