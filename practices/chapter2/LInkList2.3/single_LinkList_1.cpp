////
//// Created by JM on 2021/9/4.
////
//
//#include "double_LinkList.h"
//
//
//
//
///**
//双链表操作
//
//开发环境codeblocks12.11
//xxwu
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//typedef int ElemType;
//
////typedef struct DNode{
////    ElemType data;
////    struct DNode *prior, *next;
////} DNode, *DLinkList;
//
////尾插法初始化
//DLinkList initDLinkList(DLinkList dLinkList);
//
////查询第i个元素
//DNode *getElem(DLinkList L, int i);
//
////插入
//bool insertElem(DLinkList L,ElemType e, int i);
//
////删除
//bool deleteElem(DLinkList L, int i);
//
////打印链表
//void printDLink(DLinkList L);
//
//DLinkList initDLinkList(DLinkList dLinkList) {
//    dLinkList = (DLinkList) malloc(sizeof(DNode));
//    dLinkList->next = NULL;
//    dLinkList->prior = NULL;
//    DNode *r = dLinkList;
//    ElemType x;
//    scanf("%d",&x);
//    while(x != 9999) {
//        DNode *s = (DLinkList) malloc(sizeof(DNode));
//        s->data = x;
//        s->next = r->next;
//        if(r->next != NULL) {
//            r->next->prior = s;
//        }
//        s->prior = r;
//        r->next = s;
//        r = s;
//        scanf("%d", &x);
//    }
//    r->next = NULL;
//    return dLinkList;
//}
//
////查询第i个元素
//DNode *getElem(DLinkList L, int i) {
//    DNode *p = L->next;
//    int j = 0;
//    if(i < 0) return NULL;
//    if(i < 1) return L;
//    while(p && j < i-1) {
//        p = p->next;
//        j++;
//    }
//    if(!p || j > i+1) return NULL;
//    return p;
//}
//
//
////在第i个元素之前插入
//bool insertElem(DLinkList L,ElemType e, int i) {
//    if(i < 1) return false;
//    DNode *p = getElem(L,i-1);
//    DNode *s = (DNode *)malloc(sizeof(DNode));
//    s->data = e;
//    s->next = p->next;
//    p->next->prior = s;
//    s->prior = p;
//    p->next = s;
//    return true;
//}
//
////删除
//bool deleteElem(DLinkList L, int i) {
//    if(i < 1) return false;
//    DNode *p = getElem(L,i-1);
//    DNode *q = p->next;
//    p->next = q->next;
//    q->next->prior = p;
//    free(q);
//    return true;
//}
//
////打印链表
//void printDLink(DLinkList L) {
//    DNode *p = L->next;
//    int i = 1;
//    while(p!=NULL) {
//        printf("第%d个元素是%d,它的前驱元素是%d,它的后继元素是%d\n",i,p->data,
//               p->prior==NULL?-1:p->prior->data,
//               p->next==NULL?-1:p->next->data);
//        p = p->next;
//        i++;
//    }
//    return;
//}
//
////int main(){
////    DLinkList L = NULL;
////    L = initDLinkList(L);
////    printDLink(L);
////    DNode *p = getElem(L,2);
////    printf("第2个元素是%d\n",p->data);
////    insertElem(L,5555,3);
////    DNode *p1 = getElem(L,3);
////    printf("第3个元素是%d\n",p1->data);
////    printDLink(L);
////    deleteElem(L,1);
////    printDLink(L);
////
////    return 0;
////}
