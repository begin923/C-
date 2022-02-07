////
//// Created by JM on 2021-11-12.
//// 带头结点链表的操作
//
//#include <malloc.h>
//#include <cstring>
//#include <cstdio>
//
//// 链表结构体定义
//typedef int ElemType;
//typedef struct LNode{
//    ElemType data;
//    struct LNode * next;
//} LNode,*LinkList;
//
//// 函数声明
//
//// 初始化函数 , 初始化带头结点的单链表
//void InitLinkList(LinkList &L){
//    L = (LNode *)malloc(sizeof(LNode));
//    if (L == NULL)
//        return;
//    L->next = NULL;
//}
//
//// 在链表L的第i个位置插入元素e
//void InsertLinkList(LinkList L,int loc,ElemType e){
//    if (L == NULL || e == NULL || loc < 1)
//        return;
//
//    LinkList p = L;
//    while (loc>1){
//        p = p->next;
//        loc--;
//    }
//    LinkList s = (LNode *)malloc(sizeof(LNode));
//    if (s == NULL)
//        return;
//
//    s->data = e;
//    s->next = p->next;
//    p->next = s;
//}
//
//// 链表打印 , 带头结点的链表打印
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
//// 头部插入新结点
//void InserFront(LinkList L,ElemType e ){
//    InsertLinkList(L,1,e);
//}
//
//// 尾部插入新结点
//void InsertBack(LinkList L,ElemType e ){
//    if (L == NULL || e == NULL)
//        return;
//
//    LNode *p = L;
//    while (p->next){
//        p = p->next;
//    }
//    LNode *s = (LNode *)malloc(sizeof(LNode));
//    if(s == NULL)
//        return;
//
//    s->data = e;
//    s->next = NULL;
//    p->next = s;
//
//}
//
//// 删除链表第 i 个结点
//void DeleteLNode(LinkList L,unsigned int loc){
//    if(L == NULL || loc < 1)
//        return;
//
//    LNode *p = L;
//    while (loc>1){
//        p = p->next;
//        loc--;
//    }
//    LNode *tmp = p->next;
//    if(tmp != NULL){
//        p->next = tmp->next;
//        free(tmp);
//    }
//}
//
//// 删除第一个结点
//void DeleteFrontNode(LinkList L){
//    DeleteLNode(L,1);
//}
//
//// 删除最后一个结点
//void DeleteBackNode(LinkList L){
//    if (L == NULL)
//        return;
//
//    LNode *p = L;
//    while (p->next->next){
//        p = p->next;
//    }
//    LNode *tmp = p->next;
//    p->next = NULL;
//    free(tmp);
//}
//
//// 判空
//int isEmpty(LinkList L){
//    return L->next==NULL?0:1;
//}
//
//// 获取第 i 个结点
//LNode *getNode(LinkList L,int loc){
//    if(L->next == NULL || loc < 1 )
//        return NULL;
//
//    LNode *p=L;
//    while (loc > 1){
//        p = p->next;
//        loc--;
//    }
//
//    return p->next;
//}
//
//// 归并两个有序序列
//void MergeLinkList(LinkList La,LinkList Lb,LinkList &Lc){
//    if(La == NULL && Lb == NULL)
//        return;
//
//    LNode *pc = Lc = La;
//    LNode *pa = La->next;
//    LNode *pb = Lb->next;
//    while (pa && pb){
//        if(pa->data < pb->data){
//            pc->next = pa;
//            pa = pa->next;
//        } else{
//            pc->next = pb;
//            pb = pb->next;
//        }
//        pc = pc->next;
//    }
//    while (pa){
//        pc->next = pa;
//        pa = pa->next;
//    }
//    while (pb){
//        pc->next = pb;
//        pb = pb->next;
//    }
//}
//
//// 链表逆置
//void ReverseList(LinkList L){
//    if(L == NULL)
//        return;
//
//    LNode *p = L;
//    LNode *snext = p->next;  // 链表第一个元素
//    LNode *ssnext;
//    p->next = NULL;  // 至关重要，构建 头指针->NULL 的链表，注意：只能在while前执行，否则会修改链表的值
//    while (snext){ // 头插操作即可
//        ssnext = snext->next;
//        snext->next = p->next;
//        p->next = snext;
//        snext = ssnext;
//    }
//}
//
//// 清空链表：不包括头结点
//void ClearLinkList(LinkList L){
//    if(L==NULL)
//        return;
//    LNode *tmp1;
//    LNode *tmp2 = L->next;
//    while(tmp2){
//        tmp1 = tmp2->next;
//        free(tmp2);
//        tmp2 = tmp1;
//    }
//    L->next =NULL; // 这行代码一定不能少，否则会留下野指针。
//}
//
//// 销毁链表：包括头结点
//bool DestroyList(LinkList &L){  // 必须是 &L , 否则不能正确释放内存，会指向野指针
//    if (L == NULL){
//        return false;
//    }
//    LNode *tmp;
//    while (L){
//        tmp = L->next;
//        free(L);
//        L=tmp;
//    }
////    free(tmp);
//    return true;
//}
//
//
//int main(){
//    LinkList L=NULL;
//    InitLinkList(L);
//    int e = 10;
//    while (e)
//        InsertLinkList(L,1,e--);
//    PrintLinkList(L);
//
//    // 结点删除验证
////    DeleteFrontNode(L);
////    DeleteBackNode(L);
////    DeleteLNode(L,2);
////    PrintLinkList(L);
//
//    // 结点插入验证
////    InsertBack(L,11);
////    InserFront(L,11);
////    PrintLinkList(L);
//
//    // 结点获取验证
////    LNode *tmp = getNode(L,3);
////    printf("data : %d , point : %p\n",tmp->data , tmp);
//
//    // 有序表合并验证
////    LinkList La = NULL,Lb = NULL,Lc = NULL;
////    InitLinkList(La);
////    InitLinkList(Lb);
////    int i = 10,j = 10;
////    while (i){
////        InserFront(La,i);
////        i-=2;
////    }
////    while (j)
////        InserFront(Lb,(--j)--);
////
////    PrintLinkList(La);
////    PrintLinkList(Lb);
////
////    MergeLinkList(La,Lb,Lc);
////    PrintLinkList(Lc,"有序链表合并输出");
//
//    // 链表逆置验证
////    ReverseList(L);
////    PrintLinkList(L,"链表逆置");
//
//    // 清空、销毁链表验证
////    ClearLinkList(L);
//    DestroyList(L);
//    PrintLinkList(L,"链表销毁");
//}
//
//
