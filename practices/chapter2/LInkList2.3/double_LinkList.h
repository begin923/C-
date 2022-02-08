////
//// Created by JM on 2021/9/4.
////
//
//#ifndef DATA_STRUCTURE_DOUBLE_LINKLIST_H
//#define DATA_STRUCTURE_DOUBLE_LINKLIST_H
//
//#include <malloc.h>
//#include <cstring>
//#include "stdio.h"
//
///**
// * 双链表结构定义
// */
//typedef struct DNode {
//    int data;
//    struct DNode * prior,* next;  // 前后继指针
//} Dnode , *DLinkList;
//
///**
// * 双链表初始化
// */
///**
// * 初始化 - 带头指针 ; 不带头节点，不需要初始化
// * 操作：赋值给前继、后继指针为NULL
// * @param L
// * @return
// */
//bool InitDLinkList(DLinkList &L,int is_head = 1){
//    L = (DLinkList)malloc(sizeof(Dnode));
//    if(is_head){
//        L->prior = NULL;
//        L->next = NULL;
//        L->data = NULL;  // 防止内存脏数据
//    }
//    return true;
//}
//
///**
// * 判断是否为空链表
// */
//bool isEmpty(DLinkList L,int not_heat = 1){
//    if(L == NULL && not_heat){
//        return true;
//    }
//    if((!not_heat) && (L->data == -1)){
//        return true;
//    }
//    return false;
//}
//
//
//
///**
// * 头插操作 - 带头指针
// */
//bool CreateDLinkListWithHeadFromHead(DLinkList &L,int loop_num , int start_num){
//    InitDLinkList(L);
//    DLinkList p = L;
////     p = L;
//    while(loop_num != 0){
//        DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//        s->data = start_num++;
//        // 判断 p 是否为头指针或空指针
//        if(isEmpty(p)){
//            p->next = s;
//            s->prior = p;
//            p = s;
//        } else{
//            p->prior->next = s;  // p 的前节点的后继指针指向 s
//            s->next = p;
//            s->prior = p->prior;  // s 的前继指针指向 之前元素 p 的前继指针
//            p = s;
//        }
//        loop_num--;
//    }
//    return true;
//}
//
//
///**
// * 尾插操作 - 带头指针
// */
//bool CreateDLinkListWithHeadFromTail(DLinkList &L,int loop_num , int start_num){
//    InitDLinkList(L);
//    DLinkList p = L;
//    while(loop_num != 0){
//        DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//        s->data = start_num++;
//        s->next = p->next;
//        s->prior = p;
//        if(p->next != NULL){
//            p->next->prior = s;  // 原始 p 的后继节点的前继指针要变成 s
//        }
//        p->next = s;
//        p = s;
//        loop_num--;
//    }
//    return true;
//}
//
///**
// * 头插操作 - 不带头指针
// * @param p
// * @param loop_num
// * @param start_num
// * @return
// */
//bool CreateDLinkListNotHeadFromHead(DLinkList &L,int loop_num , int start_num){
////    L = (DLinkList)_malloca(sizeof(Dnode));
//    L = (DLinkList)_malloca(sizeof(Dnode));
//    DLinkList p = L;
//    p->data = 0;  // 清除脏数据，不使用这行代码，输出：19 -> 18 -> 17 -> 16 -> 15 -> 14 -> 13 -> 12 -> 11 -> 10 -> 4264118 -> 1379136
//    p->prior = NULL;
//    p->next = NULL;
//    while(loop_num != 0){
//        DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//        s->data = start_num++;
//        if(isEmpty(p)){  // 空表/空节点
//            s->next = NULL;
//            s->prior = NULL;
//            p = s;
//        } else{
//            s->next = p;
//            p->prior = s;
//            p = s;
//        }
//        loop_num--;
//    }
//    return true;
//}
//
//
///**
// * 尾插操作 - 不带头指针
// */
//bool CreateDLinkListNotHeadFromTail(DLinkList &L,int loop_num , int start_num){
//    InitDLinkList(L,0);
//    DLinkList p = L;
//    int flag = 1;
//    while(loop_num != 1){
//        DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//        s->data = start_num++;
//        if(flag){  // 是否为第一个指针
////            printf("This is first point !\n");
//            // 没有头指针的第一个指针的特殊处理'
//            // 这种赋值方式，在输出的时候，有问题 ？？？原因未知
////            s->prior = NULL;
////            s->next = NULL;
////            p = s;
//            p->data = s->data;
//            p->next = NULL;
//            p->prior = NULL;
////            printf("222222222222  ========== %d - %d - %d\n",p->data,p->prior,p->next);
//            flag = 0;
//            continue;
//        }
//        // 后续指针的处理
//        s->prior = p;
//        p->next = s;
//        s->next = NULL;
//        loop_num--;
//        p = s;
////        printf("222222222222  ========== %d - %d - %d\n",p->data,p->prior,p->next);
//    }
//    return true;
//}
//
///**
// * 往后遍历
// */
//void PrintELem(DLinkList L,int is_head = 1){
//    printf("head");
//    if(is_head){
//        L = L->next;
//        printf(" -> NULL");
//    }
//    int i = 1;
//    while (L != NULL){
////        printf("%d - %d \n",L->data , L->next);
//        printf(" -> %d",L->data);
//        L = L->next;
//        i++;
//    }
//    printf("\n");
//}
//
//// 往前遍历
//void PrintELemPrior(DLinkList L,int is_head = 1){
//    printf("head");
//    if(is_head){
//        L = L->next;
//    }
//    while (L != NULL){
//        printf(" -> %d",L->data);
//        L = L->next;
//    }
//}
//
///**
// * 插入操作
// * 1、按位序插入,在位序前插入
// */
//// 前插操作
//bool InsertNodeBefore(DLinkList &L,DLinkList p,int e,int loc , int is_head){
//    DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//    s->data = e;
//    if(loc == 1 && !is_head){  // 不带头节点,使用前插操作，要更新 L 的地址为最新的第一个元素的地址
////        printf("is_head : %d - %d  - %d - %d - %d\n",is_head,p->next , p->prior , p->data , s->data);
//        s->next = p;
//        p->prior = s;
//        L = s;
//        return true;
//    }
//    if(p->next != NULL){  // 如果 p 后继节点
//        p->next->prior = s;
//    }
//    s->next = p->next;
//    s->prior = p;
//    p->next = s;
//}
//
//// 后插操作
//bool InsertNodeAfter(DLinkList p ,int loc,int e,int is_head){
//    DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//    s->data = e;
//    if(loc == 1 && !is_head){  // 没有头指针的第一个元素处理
//        p->next->prior = s;
//        s->next = p->next;
//        s->prior = p;
//        p->next = s;
//        return true;
//    }
//    // 除第一个元素之外，其他元素的后插操作仅多这一步
//    if(p->next != NULL && (is_head || loc != 1)){  // 带头指针/或非不带头指针的第一个指针
//        p = p->next;
//    }
////    else if (p->next != NULL && is_head){  // 不带头指针
////
////    }
//    if(p->next == NULL){
//        printf("input value of loc is not legal\n");
//        return false;
//    }
//    if(p->next != NULL){  // 如果 p 后继节点
//        p->next->prior = s;
//    }
//    s->next = p->next;
//    s->prior = p;
//    p->next = s;
//}
//
//
///**
// *
// * @param L
// * @param loc
// * @param e
// * @param is_before  1 - 前插操作， 0 - 后插操作 ， 默认前插
// * @param is_head   1 - 带头指针， 0 - 不带头指针
// * @return
// */
//bool InsertLocDLinkList(DLinkList &L,int loc,int e ,int is_before = 1 , int is_head = 1){
//    bool flag;
//    if(loc < 1){
//        return false;
//    }
//    int j = 0;
//    DLinkList p = L;
//    while (p != NULL && j < loc -1){
//        p = p->next;
//        j++;
//    }
//    // 判断 loc 是否超出链表长度
//    if(p == NULL){
//        printf("input value of loc : %d is not legal\n",loc);
//        return false;
//    }
//    if(is_before){
//        flag = InsertNodeBefore(L,p,e,loc,is_head);
//    } else {
//        flag = InsertNodeAfter(p,loc,e,is_head);
//    }
//    return flag;
//}
//
//
//
///**
// * 按位序删除[前删，后删 ， 删除位序对应指针与值]
// * @param L
// * @param loc
// * @param is_del_head , 0 - 删除位序当前节点， 1 - 删除位序前一个节点， 2 - 删除位序后面节点
// * @param is_head
// * @return
// */
//bool DeleteNode(DLinkList p,int loc , int is_del_head){
//    DLinkList s = p->next;
//    if(s == NULL){
//        free(s);
//        printf("input loc or is_del_head is legal!");
//        return false;
//    }
//    if(is_del_head == 1){
//        p->prior->next = s;
//        p->next->prior = p->prior;
//        free(s);
//        return true;
//    } else if(is_del_head == 0){
//        // 当删除最后一个节点，直接给最后一个节点赋值为 null
//        if(s->next == NULL){
//            s->prior->next = NULL;
//            s = NULL;
//            free(s);
//            return true;
//        }
//        s->prior->next = s->next;
//        s->next->prior = s;
//        free(s);
//        return true;
//    } else if(s->next != NULL && is_del_head == 2){
//        s->next = s->next->next;
//        s->next->next->prior = s;
//        free(s);
//        return true;
//    }
//    else{
//        free(s);
//        printf("input loc or is_del_head is legal!");
//        return false;
//    }
//}
//
///**
// *
// * @param L
// * @param loc
// * @param is_del_head , 1 - 删除位序前的元素， 0 - 删除位序后的元素
// * @param is_head , 1 - 带头节点， 0 - 不带头节点
// * @return
// */
//bool DeleteDlinkList(DLinkList &L, int loc, int is_del_head = 1,int is_head = 1){
//    if(loc < 1){
//        return false;
//    }
//    DLinkList p = L;
//    if(loc == 1){
//        if(is_del_head == 1){
//            printf("loc or is_del_head is not legal!");
//            return false;
//        }
//        if(is_head == 1 ){
//            p->next = p->next->next;
//            p->next->next->prior = p;
//            return true;
//        } else if(is_head == 0 ){
//            p->next->prior = NULL;
//            p = NULL;
//            return true;
//        } else{
//            printf("loc or is_del_head is not legal!");
//            return false;
//        }
//    }
//    int j = is_head ? 0 : 1;
//    while (L != NULL && j < loc - 1){
//        p = p->next;
//        j++;
//    }
//    if(p == NULL){
//        printf("input value of loc : %d is not legal\n",loc);
//        return false;
//    }
//    return DeleteNode(p,loc,is_del_head);
//}
//
//#endif //DATA_STRUCTURE_DOUBLE_LINKLIST_H
