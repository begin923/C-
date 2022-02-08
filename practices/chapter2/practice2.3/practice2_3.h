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
//    L = NULL;  // �ձ� ��ʱû���κνڵ㣬��ֹ������
//    return true;
//}
//
//bool InitLinkListHead(LinkList &L){
//    L = (LinkList)malloc(sizeof(Lnode));  // ����ͷ�ڵ�
//    if (L == NULL){
//        return false;  // ��ʼ��[����]ʧ�ܣ��ڴ治��
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
        if (L == NULL){  // ��һ���ڵ�
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

// ��һ��
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
