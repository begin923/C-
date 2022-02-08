//
// Created by JM on 2021/8/28.
//

#include "single_LinkList.h"

/**
 * 单链表初始化与建立，并写入数据
 * @return
 */
//int main(){
//    LinkList p;
////    CreateLinkListHead(p,10,2);
//    CreateLinkListTail(p);
//    PrintELem(p);
//    return 0;
//}


/**
 * 单链表逆置 - 不带头节点
 * @return
 */
//int main(){
//    LinkList L;
////    CreateLinkListNotHeadFromHead(L,10,10);
//    CreateLinkListNotHeadFomTail(L,10,10);
//    PrintELemNotHead(L);
//    LinkList L1 = ReverseLinklistNotHead(L);
//    PrintELemNotHead(L1);
//}

/**
 * 单链表逆置 - 带头节点
 * @return
 */
//int main(){
//    LinkList L;
////    CreateLinkListNotHeadFromHead(L,10,10);
//    CreateLinkListWithHeadFromTail(L);
//    PrintELemWithHead(L);
//    LinkList L1 = ReservLinkListWithHead(L);
//    PrintELemNotHead(L1);
//}


/**
 * 按位序插入 - 带头节点
 * @return
 */
//int main(){
//    LinkList L;
//    // 头插法 - 带头节点
//    CreateLinkListWithHeadFromHead(L,10,2);
//    PrintELemWithHead(L);
//    // 带头结点
//    LinkListInsertFromLoc(L,1,100);
//    PrintELemWithHead(L);
//}


/**
 * 按位序插入 - 不带头节点
 * @return
 */
//int main(){
//    LinkList L;
//    // 头插法 - 带头节点
//    CreateLinkListNotHeadFromHead(L,10,2);
//    PrintELemNotHead(L);
//    // 不带头结点
//    LinkListInsertFromLoc(L,11,100,1);
//    PrintELemNotHead(L);
//}

/**
 *指定节点的后插操作 , 带头指针， 元素从0开始,元素从 1 开始
 * @return
 */
//int main(){
//    LinkList L;
//    CreateLinkListWithHeadFromHead(L,10,10);
//    LinkListInsertFromLocIntoNextNode(L,3,100);
//    PrintELemWithHead(L);
//}


/**
 *指定节点的后插操作 , 不带头指针，位置从1开始， 元素从1开始
 * @return
 */
//int main(){
//    LinkList L;
//    CreateLinkListNotHeadFromHead(L,10,10);
//    LinkListInsertFromLocIntoNextNode(L,3,100);
//    PrintELemNotHead(L);
//}

/**
 *指定节点的前插操作 , 带头指针， 位置从0开始,元素从 1 开始
 * @return
 */
//int main(){
//    LinkList L;
//    CreateLinkListWithHeadFromHead(L,10,10);
//    LinkListInsertFromLocIntoPriorNode(L,3,100);
//    PrintELemWithHead(L);
//}

/**
 *指定节点的后插操作 , 不带头指针， 位置从1开始,元素从 1 开始
 * @return
 */
//int main(){
//    LinkList L;
//    CreateLinkListNotHeadFromHead(L,10,10);
//    LinkListInsertFromLocIntoPriorNode(L,3,100);
//    PrintELemNotHead(L);
//}

/**
 * 按位序删除元素 - 带头结点
 * @return
 */
//int main(){
//    LinkList L;
//    int e;
//    CreateLinkListWithHeadFromHead(L,5,10);
//    printf("元素删除前 -- ================================\n");
//    PrintELemWithHead(L);
//    LinkListDeleteNode(L,6,e);
//    printf("元素删除后 -- ================================\n");
//    PrintELemWithHead(L);
//    printf("delete elem is ：%d\n",e);
//}

/**
 * 按位序删除元素 - 不带头结点
 * @return
 */
//int main(){
//    LinkList L;
//    int e;
//    CreateLinkListNotHeadFromTail(L,5,10);
//    printf("元素删除前 -- ================================\n");
//    PrintELemNotHead(L);
//    LinkListDeleteNode(L,6,e);
//    printf("元素删除后 -- ================================\n");
//    PrintELemNotHead(L);
//    printf("delete elem is ：%d\n",e);
//}

//int main(){
//    LinkList L,r;
//    int e;
//    CreateLinkListNotHeadFromTail(L,5,10);
//    printf("元素删除前 -- ================================\n");
//    PrintELemNotHead(L);
//    LinkListDeleteNode(L,3,e);
//    printf("元素删除后 -- ================================\n");
//    PrintELemNotHead(L);
//    printf("delete elem is ：%d\n",e);
//}

/**
 * 查找元素
 * 1、按位序查找
 * 2、按值查找
 * @return
 */
// 按位 默认带头指针
//int main(){
//    LinkList L;
//    int e;
//    CreateLinkListWithHeadFromTail(L,5,10);
//    PrintELemWithHead(L);
//    GetElemFromLoc(L,1,e);
//    printf("value of e ： %d\n",e);
//    return 0;
//}

// 按位 - 不带头指针
//int main(){
//    LinkList L;
//    int e;
//    CreateLinkListNotHeadFromTail(L,5,10);
//    PrintELemNotHead(L);
//    GetElemFromLoc(L,1,e,1);
//    printf("value of e ： %d\n",e);
//    return 0;
//}

/**
 * 按值查找
 * @return
 */
//int main(){
//    LinkList L;
//    int e = 14;
////    CreateLinkListWithHeadFromTail(L,5,10);
////    PrintELemWithHead(L);
//    CreateLinkListNotHeadFromTail(L,5,10);
//    PrintELemNotHead(L);
//    LinkList p = GetElemForValue(L,e);
//    if(p == NULL){
//        printf("没有找到对应的值\n");
//    } else{
//        printf("p->data : %d\n",p->data);
//    }
//}

/**
 * 求表长
 * @return
 */
//int main(){
//    LinkList L;
////    CreateLinkListWithHeadFromTail(L,10,10);
////    PrintELemWithHead(L);
////    printf("length of L : %d\n",GetLinkListLength(L));
//    CreateLinkListNotHeadFromHead(L,10,10);
//    PrintELemNotHead(L);
//    printf("length of L : %d\n",GetLinkListLength(L,1));
//}