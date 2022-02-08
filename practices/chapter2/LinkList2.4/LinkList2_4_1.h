////
//// Created by chenjiahong on 2021/9/11.
////
//
///**
// * 循环单链表总结：
// * 1、表结构定义
// * 2、初始化：
// *      1. 注意带头节点与不带头节点的初始化；
// *      2. 注意第一个节点的特殊处理【插入、删除】
// */
//
//#ifndef DATASTRUCTURE_LINKLIST2_4_1_H
//#define DATASTRUCTURE_LINKLIST2_4_1_H
//
//#include <clocale>
//#include <malloc.h>
//#include <cstdio>
//
///**
// * 结构定义
// */
//typedef struct CNode{
//    int data;
//    struct CNode * next;
//} Cnode, * CLinkList;
//
///**
// * 表初始化
// * 空表：头指针指向头指针
// * @param L
// * @param is_head : 1 - 带头，0 - 不带头
// * @return
// */
//bool InitLinkList(CLinkList &L){
//    L = (CLinkList)malloc(sizeof(Cnode));
//    if(L == NULL){
//        printf("init is fail !\n");
//        return false;
//    }
//    L->next = L; // 尾节点指向 L
//    L->data = NULL;
//    printf("init is success !\n");
//    return true;
//}
//
///**
//* 判空表
//* @param L : 循环单链表头指针
//* @return
//*/
//bool isEmpty(CLinkList L){
//    return L->next == L ? true : false;
//}
//
///**
//* 判表尾
//* @param L : 循环单链表头指针
//* @param p ： 当前节点
//* @return
//*/
//bool isTail(CLinkList L,CLinkList p){
//    return p->next == L ? true : false;
//}
//
///**
// * 判断是否为头节点
// * @param p
// * @return
// */
//bool isFirst(CLinkList p){
//    return p->data == NULL ? true : false;
//}
//
///**
// * 循环单链表 - 带头指针 - 尾插法
// * @param L
// * @param loop
// * @param start
// * @return
// */
//bool CreateCLinkListWithHeadForTail(CLinkList &L , int loop , int start){
//    if(loop < 1){
//        printf("");
//        return false;
//    }
//    InitLinkList(L);  // 记得是传入引用[变量地址]
//    if(L == NULL){
//        return false;
//    }
//    CLinkList s,p = L;
//    while (loop > 0){
//        s = (CLinkList)malloc(sizeof(Cnode));
//        s->data = start++;
//        s->next = p->next;  // 修改要插入指针的next 指针指向
//        p->next = s;
//        p = s;
//        loop--;
//    }
//
//    // for 的处理方式
////    for (int i = 0; i < loop; i++) {
////        CLinkList s = (CLinkList)malloc(sizeof(Cnode));
////        s->data = start++;
////        s->next = p->next;
////        p->next = s;
////        p = s;
////    }
//    return true;
//}
//
///**
// * 循环单链表 - 带头指针 - 头插法
// * @param L
// * @param loop
// * @param start
// * @return
// */
//bool CreateCLinkListWithHeadForHead(CLinkList &L,int loop , int start){
//    if(loop < 1 || start < 1){
//        return false;
//    }
//    InitLinkList(L);
//    CLinkList s,p = L;
//    while (loop > 0){
//        s = (CLinkList)malloc(sizeof(Cnode));
//        s->data = start++;
//        s->next = L->next;
//        L->next = s; // 不断修改头指针指向
//        loop--;
//    }
//    return true;
//}
//
///**
// * 不带头指针 - 尾插法
// * @param L
// * @param loop
// * @param start
// * @return
// */
//bool CreateCLinkListNotHeadForTail(CLinkList &L, int loop , int start){
//    if(loop < 1 && start < 1){
//        return false;
//    }
//    // 不带头指针的第一个指针特殊处理
//    L = (CLinkList)malloc(sizeof(CNode));
//    L->data = start++;
//    CLinkList s,p = L;
//    while (loop > 1){
//        s = (CLinkList)malloc(sizeof(Cnode));
//        s->data = start++;
//        s->next = p->next;
//        p->next = s;
////        printf("%d - %d - %d - %d - %d - %d\n",s->data , s , p->next , p , L,L->data);
//        p = s;
//        loop--;
//    }
//    p->next = L;  // 指针头指针
//    return true;
//}
//
//
//bool CreateCLinkListNotHeadForHead(CLinkList &L, int loop , int start){
//    if(loop < 1 && start < 1){
//        return false;
//    }
//    // 不带头指针的第一个指针特殊处理
//    L = (CLinkList)malloc(sizeof(CNode));
//    L->data = start++;
//    CLinkList s,p = L;
//    while (loop > 1){
//        s = (CLinkList)malloc(sizeof(Cnode));
//        s->data = start++;
//        s->next = p;
//        p = s;
//        loop--;
//    }
//    L->next = p;
//    L = p;
//    return true;
//}
//
//
///**
// * 元素查找
// * 1、按位查找
// * 2、按值查找
// */
//bool SearchNode(CLinkList L,int loc, int &e,int h){
//    CLinkList p = L;
//    while (loc > h && p->next != L){
//        p = p->next;
//        loc--;
//    }
//    if(p != NULL && p->next != L){
//        e = p->data;
//        return true;
//    } else{
//        printf("value of loc is not legal !");
//        return false;
//    }
//}
//
//// 按位序查找
//bool SearchClinkListFromLoc(CLinkList L,int loc, int &e, int is_head = 1){
//    if(loc < 1){
//        printf("value of loc is not legal !");
//        return false;
//    }
//    int h = is_head ? 0 : 1 ;
//    return SearchNode(L,loc,e,h);
//}
//
//// 按值查找
//bool SearchClinkListForValue(CLinkList L, int value, int is_head = 1){
//    CLinkList p = L;
//    if(is_head){
//        p = p->next;
//    }
//    while (p->next != L){
//        if(value == p->data){
////            printf("value is exists !\n");
//            return true;
//        }
////        printf("value : %d \n",p->data);
//        p = p->next;
//    }
//    return false;
//}
//
///**
// * 节点删除
// * 1、指定位序删除
// */
//bool DelLinkListFromLoc(CLinkList &L,int loc,int is_head = 1){
//    if(loc < 1){
//        return false;
//    }
//    int h = is_head ? 0 : 1;
//    CLinkList p = L;
//    // 第一个节点处理
//    if(loc == 1 && is_head == 1){
//        L->next = L->next->next;
//        return true;
//    } else if(loc == 1){
//        L = L->next;
//        return true;
//    }
//    while (loc - 1 > h && p->next != L){
//        p = p->next;
//        loc--;
//    }
//    if(p->next != L){
//        p->next = p->next->next;
//        return true;
//    }else{
//        return false;
//    }
//}
//
///**
// * 循环单链表输出
// * @param L
// * @param is_head
// * @return
// */
//bool PrintElemAfter(CLinkList L,int is_head = 1){
//    CLinkList p = L;
//    printf("head");
//    if(!isEmpty(L)){
//        if(is_head == 1){
//            if(isFirst(p)){
//                printf(" -> NULL ");
//                p = p->next;
//            }
//            while (L != p){
//                printf(" -> %d",p->data);
//                p = p->next;
//            }
//        } else if(is_head == 0){
//            /**
//             * 不带头指针 ； 第一个指针输出
//             */
//            printf(" -> %d",p->data);
//            while (L != p->next){
//                p = p->next;
//                printf(" -> %d",p->data);
//            }
//        } else
//            return false;
//    } else{
//        printf("link list is null !");
//    }
//    printf("\n");
//    return true;
//};
//
//
//
//#endif //DATASTRUCTURE_LINKLIST2_4_1_H
