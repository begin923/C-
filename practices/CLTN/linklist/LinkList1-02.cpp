////
//// Created by JM on 2021-11-12.
//// 不带头结点的单链表操作
//
//#include <cstring>
//#include <malloc.h>
//#include <cstdio>
//
//typedef int ElemType;
//typedef struct LNode{
//    ElemType data;
//    struct LNode *next;
//}LNode ,*LinkList;
//
//// 不必初始化
//
//// 插入操作
//void InsertLinkList(LinkList &L,int loc,ElemType e ){
//    if(L == NULL){
//        L = (LNode *)malloc(sizeof(LNode));
//        L->data = e;
//        L->next = NULL;
//        return;
//    }
//    if(loc == 1){
//        LNode *tmp = (LNode *)malloc(sizeof(LNode));
//        tmp->data = e;
//        tmp->next = L;
//        L = tmp;
//        return;
//    }
//    LNode *p = L;
//    while (loc>2){
//        p = p->next;
//        loc--;
//    }
//    if(p != NULL) {
//        LNode *tmp = (LNode *) malloc(sizeof(LNode));
//        tmp->data = e;
//        tmp->next = p->next;
//        p->next = tmp;
//    }
//    return;
//}
//
//void PrintLinkList(LinkList L, char print_str[] = "链表元素输出"){
//    if(L == NULL){
//        printf("链表为空");
//        return;
//    }
//    printf("%s ：head",print_str);
//    while (L){
//        printf(" -> %d",L->data);
//        L = L->next;
//    }
//    printf("\n");
//}
//
//int main(){
//    LinkList L = NULL;
//    int i = 10;
//    int j = 1;
//    while (i)
//        InsertLinkList(L,j++,i--);
//    PrintLinkList(L);
//
//}
//
