////
//// Created by JM on 2021-11-13.
//// 循环双单链表基本操作[带头指针]
//
//#include <malloc.h>
//#include <cstdio>
//
//typedef int ElemType;
//typedef struct LNode{
//    ElemType data;
//    struct LNode *next;
//}LNode , *LinkList;
//
//// 初始化
//void InitList(LinkList &L){
//    if(NULL == (L = (LNode *)malloc(sizeof(LNode))))
//        return;
//    L->next = L;
//}
//
//// 判空
//bool isEmpty(LinkList L){
//    return L==L->next? true:false;
//}
//
//// 第 i 个位置插入节点
//void InsertList(LinkList L,int loc,ElemType e){
//    if(L == NULL || loc < 1 || e == NULL){
//        printf("链表LL或元素ee不存在。\n");
//        return;
//    }
//    LNode *s,*p;
//    if(loc == 1){
//        p = L;
//    } else{
//        p = L;
//        int k = loc;
//        while (k > 1 && p->next != L){
//            p = p->next;
//            k--;
//        }
//        if(p->next == L & k > 1){  // 指针移动到尾指针且位置值不等于1,则loc位置不合法
//            printf("位置 %d 不合法，超过了表长。\n",loc);
//            return;
//        }
//    }
//
//    s = (LNode *)malloc(sizeof(LNode));
//    if(s == NULL)
//        return;
//
//    s->data = e;
//    s->next = p->next;
//    p->next = s;
//}
//
//// 在第一个位置插入结点
//void InsertFront(LinkList L,ElemType e){
//    InsertList(L,1,e);
//}
//
//// 在链表最后插入元素
//void InsertBack(LinkList L,ElemType e){
//    if(L==L->next || e == NULL)
//        return;
//    LNode *p = L;
//    while(p->next != L){
//        p = p->next;
//    }
//    LNode *s = (LNode *)malloc(sizeof(LNode));
//    if(s == NULL){
//        return;
//    }
//    s->data = e;
//    s->next = p->next;
//    p->next = s;
//
//}
//
//// 删除、结点获取通单链表，注意尾指针指向
//
//// 打印
//void PrintLinkList(LinkList L, char print_str[] = "链表元素输出"){
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
//int main(){
//    LinkList L;
//    InitList(L);
//    int i = 10;
//    while (i){
//        InsertList(L,1,i--);
//    }
//    PrintLinkList(L);
//
//    // 在第一个位置插入验证
////    InsertFront(L,11);
////    PrintLinkList(L,"在第1个位置插入验证");
//
//    // 在尾部插入验证
////    InsertBack(L,12);
////    PrintLinkList(L,"在最后的位置插入验证");
//
//    // 暴力位置验证
//    InsertList(L,13,13);
//    PrintLinkList(L,"暴力位置验证");
//}