////
//// Created by JM on 2021-11-13.
//// 循环双链表 - 基本操作
//
//#include <cstring>
//#include <malloc.h>
//#include <cstdio>
//
//typedef int ElemType;
//typedef struct LNode{
//    ElemType data;
//    struct LNode *prior,*next;
//} LNode,*LinkList;
//
//// 初始化
//void Initlist(LinkList &L){
//    if(NULL == (L = (LNode *)malloc(sizeof(ElemType))))
//        return;
//    L->next = L;
//    L->prior = L;
//}
//
//// 头插法
//void InsertList(LinkList L,int loc , ElemType e){
//    if(L==NULL || loc < 1 || e == NULL)
//        return;
//    LNode *p;
//    if(loc == 1){
//        p = L;
//    } else{
//        int k = loc;
//        p = L;
//        while (k > 1 & p->next != L){
//            p = p->next;
//            k--;
//        }
//        if(p->next == L && k > 1){
//            printf("位置 %d 不合法，超过了表长。\n",loc);
//            return;
//        }
//    }
//    LNode *s = (LNode *)malloc(sizeof(LNode));
//    s->data = e;
//    s->next = p->next;
//    s->prior = p;
//    p->next->prior = s;
//    p->next = s;
//}
//
//// 在第一个位置插入结点
//void InsertFront(LinkList L,ElemType e){
//    InsertList(L,1,e);
//}
//
//// 在最后的位置插入的结点
//void InsertBack(LinkList L,ElemType e){
//    if(L==NULL || e == NULL)
//        return;
//    LNode *p = L;
//    while (p->next !=L){
//        p = p->next;
//    }
//    LNode *s = (LNode *)malloc(sizeof(LNode));
//    s->data = e;
//    s->next = p->next;
//    s->prior = p;
//    p->next = s;
//    p->next->prior = s;
//}
//
//// 往后遍历 ； 循环双链表
//void PrintLinkList(LinkList L, char print_str[] = "链表正向元素输出"){
//    if(L == NULL || L->next == L){
//        printf("链表为空");
//        return;
//    }
//    printf("%s ：head",print_str);
//    LNode *p = L->next;
//    while (p != L){
//        printf(" -> %d",p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//// 往前遍历 ； 循环双链表
//void PrintLinkListBack(LinkList L, char print_str[] = "链表逆向元素输出"){
//    if(L == NULL || L->prior == L){
//        printf("链表为空");
//        return;
//    }
//    printf("%s ：head",print_str);
//    LNode *p = L->prior;
//    while (p != L){
//        printf(" -> %d",p->data);
//        p = p->prior;
//    }
//    printf("\n");
//}
//
//
//int main(){
//    LinkList L = NULL;
//    Initlist(L);
//    int i = 10;
//    while (i){
//        InsertList(L,1,i--);
//    }
//    PrintLinkList(L);
//    PrintLinkListBack(L);
//
//    InsertFront(L,12);
//    PrintLinkList(L);
//    PrintLinkListBack(L);
//
//}
//
