////
//// Created by JM on 2021-11-12.
//// ��ͷ���˫�����������
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
//// ��ʼ��
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
//// ����
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
//            p->next->prior = s;  // ���⴦���������β�����룬s->next ���������ڡ�
//        p->next = s;
//        return true;
//    }
//    return false;
//}
//
//
//// ͷ�巨
//void InsertFront(LinkList L,ElemType e ){
//    InsertLinkList(L,1,e);
//}
//
//// β�巨
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
//// �ڵ� i ��λ�ò�����
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
//            p->next->prior = s;  // �ڱ�β����Ԫ�أ���������ǰ��ָ��ָ�� s
//        p->next = s;
//        return true;
//    }
//    return false;
//}
//
//// ��ӡ
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
//// ɾ���� i ����㲢����ɾ��������ֵ
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
//            tmp->next->prior = p;  // ɾ�����һ����㣬����Ҫ����ǰ��ָ��
//        p->next = tmp->next;
//        free(tmp);
//        return;
//    }
//    e = -1;
//}
//
//int main(){
//    LinkList L = NULL;
//    InitList(L); // ��ʼ��
//    int i = 10 ,j = 1;
//    while (i){
//        InsertLinkList(L,j++,i--); // ˫�������ݲ���
//    }
//    PrintLinkList(L,"�������ʼ����ֵ");
//
//    InsertNode(L,11,11);
//    PrintLinkList(L,"�ڵ� i ��λ�ò���Ԫ��");
//
//    int e;
//    DeleteNode(L,11,e);
//    printf("��ɾ��Ԫ�ص�ֵ : %d\n",e);
//    PrintLinkList(L,"ɾ��ָ��λ��Ԫ��");
//
//
//}