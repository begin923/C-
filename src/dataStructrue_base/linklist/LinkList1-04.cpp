////
//// Created by JM on 2021-11-13.
//// ѭ��˫�������������[��ͷָ��]
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
//// ��ʼ��
//void InitList(LinkList &L){
//    if(NULL == (L = (LNode *)malloc(sizeof(LNode))))
//        return;
//    L->next = L;
//}
//
//// �п�
//bool isEmpty(LinkList L){
//    return L==L->next? true:false;
//}
//
//// �� i ��λ�ò���ڵ�
//void InsertList(LinkList L,int loc,ElemType e){
//    if(L == NULL || loc < 1 || e == NULL){
//        printf("����LL��Ԫ��ee�����ڡ�\n");
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
//        if(p->next == L & k > 1){  // ָ���ƶ���βָ����λ��ֵ������1,��locλ�ò��Ϸ�
//            printf("λ�� %d ���Ϸ��������˱���\n",loc);
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
//// �ڵ�һ��λ�ò�����
//void InsertFront(LinkList L,ElemType e){
//    InsertList(L,1,e);
//}
//
//// ������������Ԫ��
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
//// ɾ��������ȡͨ������ע��βָ��ָ��
//
//// ��ӡ
//void PrintLinkList(LinkList L, char print_str[] = "����Ԫ�����"){
//    if(L == NULL || L->next == L){
//        printf("����Ϊ��");
//        return;
//    }
//    printf("%s ��head",print_str);
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
//    // �ڵ�һ��λ�ò�����֤
////    InsertFront(L,11);
////    PrintLinkList(L,"�ڵ�1��λ�ò�����֤");
//
//    // ��β��������֤
////    InsertBack(L,12);
////    PrintLinkList(L,"������λ�ò�����֤");
//
//    // ����λ����֤
//    InsertList(L,13,13);
//    PrintLinkList(L,"����λ����֤");
//}