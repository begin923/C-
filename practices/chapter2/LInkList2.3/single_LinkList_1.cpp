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
//˫�������
//
//��������codeblocks12.11
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
////β�巨��ʼ��
//DLinkList initDLinkList(DLinkList dLinkList);
//
////��ѯ��i��Ԫ��
//DNode *getElem(DLinkList L, int i);
//
////����
//bool insertElem(DLinkList L,ElemType e, int i);
//
////ɾ��
//bool deleteElem(DLinkList L, int i);
//
////��ӡ����
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
////��ѯ��i��Ԫ��
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
////�ڵ�i��Ԫ��֮ǰ����
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
////ɾ��
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
////��ӡ����
//void printDLink(DLinkList L) {
//    DNode *p = L->next;
//    int i = 1;
//    while(p!=NULL) {
//        printf("��%d��Ԫ����%d,����ǰ��Ԫ����%d,���ĺ��Ԫ����%d\n",i,p->data,
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
////    printf("��2��Ԫ����%d\n",p->data);
////    insertElem(L,5555,3);
////    DNode *p1 = getElem(L,3);
////    printf("��3��Ԫ����%d\n",p1->data);
////    printDLink(L);
////    deleteElem(L,1);
////    printDLink(L);
////
////    return 0;
////}
