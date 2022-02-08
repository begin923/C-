////
//// Created by JM on 2021-11-12.
//// ��ͷ�������Ĳ���
//
//#include <malloc.h>
//#include <cstring>
//#include <cstdio>
//
//// ����ṹ�嶨��
//typedef int ElemType;
//typedef struct LNode{
//    ElemType data;
//    struct LNode * next;
//} LNode,*LinkList;
//
//// ��������
//
//// ��ʼ������ , ��ʼ����ͷ���ĵ�����
//void InitLinkList(LinkList &L){
//    L = (LNode *)malloc(sizeof(LNode));
//    if (L == NULL)
//        return;
//    L->next = NULL;
//}
//
//// ������L�ĵ�i��λ�ò���Ԫ��e
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
//// �����ӡ , ��ͷ���������ӡ
//void PrintLinkList(LinkList L, char print_str[] = "����Ԫ�����"){
//    if(L == NULL || L->next == NULL){
//        printf("����Ϊ��");
//        return;
//    }
//    printf("%s ��head",print_str);
//    while (L->next){
//        L = L->next;
//        printf(" -> %d",L->data);
//    }
//    printf("\n");
//}
//
//// ͷ�������½��
//void InserFront(LinkList L,ElemType e ){
//    InsertLinkList(L,1,e);
//}
//
//// β�������½��
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
//// ɾ������� i �����
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
//// ɾ����һ�����
//void DeleteFrontNode(LinkList L){
//    DeleteLNode(L,1);
//}
//
//// ɾ�����һ�����
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
//// �п�
//int isEmpty(LinkList L){
//    return L->next==NULL?0:1;
//}
//
//// ��ȡ�� i �����
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
//// �鲢������������
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
//// ��������
//void ReverseList(LinkList L){
//    if(L == NULL)
//        return;
//
//    LNode *p = L;
//    LNode *snext = p->next;  // �����һ��Ԫ��
//    LNode *ssnext;
//    p->next = NULL;  // ������Ҫ������ ͷָ��->NULL ������ע�⣺ֻ����whileǰִ�У�������޸������ֵ
//    while (snext){ // ͷ���������
//        ssnext = snext->next;
//        snext->next = p->next;
//        p->next = snext;
//        snext = ssnext;
//    }
//}
//
//// �������������ͷ���
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
//    L->next =NULL; // ���д���һ�������٣����������Ұָ�롣
//}
//
//// ������������ͷ���
//bool DestroyList(LinkList &L){  // ������ &L , ��������ȷ�ͷ��ڴ棬��ָ��Ұָ��
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
//    // ���ɾ����֤
////    DeleteFrontNode(L);
////    DeleteBackNode(L);
////    DeleteLNode(L,2);
////    PrintLinkList(L);
//
//    // ��������֤
////    InsertBack(L,11);
////    InserFront(L,11);
////    PrintLinkList(L);
//
//    // ����ȡ��֤
////    LNode *tmp = getNode(L,3);
////    printf("data : %d , point : %p\n",tmp->data , tmp);
//
//    // �����ϲ���֤
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
////    PrintLinkList(Lc,"��������ϲ����");
//
//    // ����������֤
////    ReverseList(L);
////    PrintLinkList(L,"��������");
//
//    // ��ա�����������֤
////    ClearLinkList(L);
//    DestroyList(L);
//    PrintLinkList(L,"��������");
//}
//
//
