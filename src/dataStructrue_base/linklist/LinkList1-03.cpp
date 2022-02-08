////
//// Created by JM on 2021-11-12.
//// 带头结点双链表基本操作
//
//#include <cstring>
//#include <malloc.h>
//#include <cstdio>
//
//typedef int ElemType;
//typedef struct LNode{
//    ElemType data;
//    struct LNode *prior,*next;
//} LNode , *LinkList;
//
//// 初始化
//bool InitList(LinkList &L){
//    L = (LNode *)malloc(sizeof(LNode));
//    if(L != NULL){
//        L->prior = NULL;
//        L->next = NULL;
//        return true;
//    }
//    return false;
//}
//
//
//// 插入
//bool InsertLinkList(LinkList L,int loc,ElemType e ){
//    if(loc < 1 || e == NULL || L == NULL)
//        return false;
//
//    LNode *s;
//    if(loc == 1){
//        s = (LNode *)malloc(sizeof(LNode));
//        s->data = e;
//        s->next = NULL;
//        s->prior = L;
//        L->next = s;
//        return true;
//    }
//    LNode *p = L;
//    while(loc > 1){
//        p = p->next;
//        loc--;
//    }
//    if(p!=NULL){
//        s = (LNode *)malloc(sizeof(LNode));
//        s->data = e;
//        s->next = p->next;
//        s->prior = p;
//        if(s->next!=NULL)
//            p->next->prior = s;  // 特殊处理，如果是在尾部插入，s->next 根本不存在。
//        p->next = s;
//        return true;
//    }
//    return false;
//}
//
//
//// 头插法
//void InsertFront(LinkList L,ElemType e ){
//    InsertLinkList(L,1,e);
//}
//
//// 尾插法
//void InsertBack(LinkList L,ElemType e){
//    if(L==NULL && e==NULL)
//        return;
//    LNode *p = L;
//    while(p->next){
//        p = p->next;
//    }
//    LNode *s = (LNode *)malloc(sizeof(LNode));
//    s->data = e;
//    s->next = p->next;
//    s->prior = p;
//    p->next = s;
//}
//
//// 在第 i 个位置插入结点
//bool InsertNode(LinkList L,int loc,ElemType e){
//    if(L==NULL || loc < 1 || e == NULL)
//        return false;
//    if(loc ==1){
//        LNode *s = (LNode *)malloc(sizeof(LNode));
//        s->data = e;
//        s->next = L->next;
//        s->prior = L;
//        return true;
//    }
//    LNode *p = L;
//    while (loc>1){
//        p = p->next;
//        loc--;
//    }
//    if(p){
//        LNode *s = (LNode *)malloc(sizeof(LNode));
//        s->data = e;
//        s->next = p->next;
//        s->prior = p;
//        if(s->next != NULL)
//            p->next->prior = s;  // 在表尾插入元素，不用再让前继指针指向 s
//        p->next = s;
//        return true;
//    }
//    return false;
//}
//
//// 打印
//void PrintLinkList(LinkList L, char print_str[] = "链表元素输出"){
//    if(L == NULL || L->next == NULL){
//        printf("链表为空");
//        return;
//    }
//    printf("%s ：head",print_str);
//    while (L->next){
//        L = L->next;
//        printf(" -> %d",L->data);
//    }
//    printf("\n");
//}
//
//// 删除第 i 个结点并返回删除结点的数值
//void DeleteNode(LinkList L , int loc, ElemType &e){
//    if(L==NULL || loc < 1){
//        return;
//    }
//    LNode *p = L;
//    while (loc > 1){
//        p = p->next;
//        loc--;
//    }
//    if(p->next){
//        e = p->next->data;
//        LNode *tmp = p->next;
//        p->next = tmp->next;
//        if(tmp->next != NULL)
//            tmp->next->prior = p;  // 删除最后一个结点，不需要处理前继指针
//        p->next = tmp->next;
//        free(tmp);
//        return;
//    }
//    e = -1;
//}
//
//int main(){
//    LinkList L = NULL;
//    InitList(L); // 初始化
//    int i = 10 ,j = 1;
//    while (i){
//        InsertLinkList(L,j++,i--); // 双链表数据插入
//    }
//    PrintLinkList(L,"空链表初始化赋值");
//
//    InsertNode(L,11,11);
//    PrintLinkList(L,"在第 i 个位置插入元素");
//
//    int e;
//    DeleteNode(L,11,e);
//    printf("被删除元素的值 : %d\n",e);
//    PrintLinkList(L,"删除指定位置元素");
//
//
//}