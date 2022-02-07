////
//// Created by JM on 2021-11-16.
//// �������������򡢺������֮�ǵݹ�ģʽ������ջ��ʵ��
//
//#include <cstring>
//#include <malloc.h>
//#include <cstdio>
//
//// �������ṹ����
//typedef struct BiTNode{
//    int data;
//    struct BiTNode * lchild; // ������
//    struct BiTNode * rchild; // ������
//} BiTNode,* BiTre;
//
//#define MAXSIZE 30 // ����ջ��󳤶�
//typedef BiTre ElemType; // �Զ���ջԪ��Ϊ������
//typedef struct {
//    ElemType data[MAXSIZE];
//    int top;
//}SeqStack,*PSeqStack;
//
//
//// ˳��ջS�ĳ�ʼ��������
//void InitStack(PSeqStack S);
//
//// Ԫ����ջ������ֵ��0-ʧ�ܣ�1-�ɹ���
//int Push(PSeqStack S, ElemType *e);
//
//// Ԫ�س�ջ������ֵ��0-ʧ�ܣ�1-�ɹ���
//int Pop(PSeqStack S, ElemType *e);
//
//// ��˳��ջ�ĳ��ȣ�����ֵ��ջS��Ԫ�صĸ�����
//int Length(PSeqStack S);
//
//// ���˳��ջ��
//void Clear(PSeqStack S);
//
//// �ж�˳��ջ�Ƿ�Ϊ�գ�����ֵ��1-�գ�0-�ǿջ�ʧ�ܡ�
//int IsEmpty(PSeqStack S);
//
//// �ж�˳��ջ�Ƿ�����������ֵ��1-������0-δ����ʧ�ܡ�
//int IsFull(PSeqStack S);
//
//// ��ӡ˳��ջ��ȫ����Ԫ�ء�
//void PrintStack(PSeqStack S);
//
//// ��ȡջ��Ԫ�أ�����ֵ��0-ʧ�ܣ�1-�ɹ���
//// ֻ�鿴ջ��Ԫ�ص�ֵ��Ԫ�ز���ջ��
//int GetTop(PSeqStack S, ElemType *e);
//
//////////////////////////////////////////////////////////////////
//
//// ��������ĸ߶ȡ�
//int TreDepth(BiTre T);
//
//// ���ʽ��Ԫ�ء�
//void visit(BiTNode *pp);
//// �����õݹ�ķ����Զ����������������
//void PreOrder1(BiTre T);
//// �����õݹ�ķ����Զ����������������
//void InOrder1(BiTre T);
//// �����õݹ�ķ����Զ������ĺ��������
//void PostOrder1(BiTre T);
//
//int main(){
//    BiTre T = 0; // ��������ʼ��
//    // ����������
//    T = (BiTNode *)malloc(sizeof(BiTNode));  // �������
//    T->data = 1;
//    T->lchild = T->rchild = NULL;
//
//    T->lchild = (BiTNode *)malloc(sizeof(BiTNode));  // �������
//    T->lchild->data = 2;
//    T->lchild->lchild = T->lchild->rchild = NULL;
//
//    T->rchild = (BiTNode *)malloc(sizeof(BiTNode));  // �������
//    T->rchild->data = 3;
//    T->rchild->lchild = T->rchild->rchild = NULL;
//
//    T->lchild->lchild = (BiTNode *)malloc(sizeof(BiTNode));  // �������
//    T->lchild->lchild->data = 4;
//    T->lchild->lchild->lchild = T->lchild->lchild->rchild = NULL;
//
//    T->lchild->rchild = (BiTNode *)malloc(sizeof(BiTNode));  // �������
//    T->lchild->rchild->data = 5;
//    T->lchild->rchild->lchild = T->lchild->rchild->rchild = NULL;
//
//    T->rchild->lchild = (BiTNode *)malloc(sizeof(BiTNode));  // �������
//    T->rchild->lchild->data = 6;
//    T->rchild->lchild->lchild = T->rchild->lchild->rchild = NULL;
//
////    printf("�������\n");
////    PreOrder1(T);
////    printf("�������\n");
////    InOrder1(T);
//    printf("��������\n");
//    PostOrder1(T);
//
//}
//
//// ˳��ջS�ĳ�ʼ��������
//void InitStack(PSeqStack S){
//    if(S==NULL)
//        return;
//    S->top = -1;
//    for (int i = 0; i < MAXSIZE; ++i) {
//        S->data[i] = 0;
//    }
//}
//
//// Ԫ����ջ������ֵ��0-ʧ�ܣ�1-�ɹ���
//int Push(PSeqStack S, ElemType *e){
//    if(S==NULL || e == NULL)
//        return 0;
//    if(IsFull(S) == 1)
//        return 0;
//    S->data[++S->top] = *e;
//    return 1;
//}
//
//// Ԫ�س�ջ������ֵ��0-ʧ�ܣ�1-�ɹ���
//int Pop(PSeqStack S, ElemType *e){
//    if(S==NULL || e == NULL)
//        return 0;
//    if(IsEmpty(S) == 1)
//        return 0;
//    *e = S->data[S->top--];
//    return 1;
//}
//
//// ��˳��ջ�ĳ��ȣ�����ֵ��ջS��Ԫ�صĸ�����
//int Length(PSeqStack S);
//
//// ���˳��ջ��
//void Clear(PSeqStack S);
//
//// �ж�˳��ջ�Ƿ�Ϊ�գ�����ֵ��1-�գ�0-�ǿջ�ʧ�ܡ�
//int IsEmpty(PSeqStack S){
//    if(S==NULL )
//        return 0;
//    return S->top == -1?1:0;
//}
//
//// �ж�˳��ջ�Ƿ�����������ֵ��1-������0-δ����ʧ�ܡ�
//int IsFull(PSeqStack S){
//    if(S==NULL )
//        return 0;
//    return S->top >= MAXSIZE -1?1:0;
//}
//
//// ��ӡ˳��ջ��ȫ����Ԫ�ء�
//void PrintStack(PSeqStack S)
//{
//    if (S == NULL) return;  // ����ָ�롣
//
//    if (S->top == -1) { printf("ջΪ�ա�\n"); return; }
//
//    int kk;
//    for (kk = 0; kk <= S->top; kk++)
//    {
//        printf("S[%d],value=%d\n",kk,S->data[kk]);     // ��������±���ʡ�
//        // printf("S[%d],value=%d\n",kk,*(S->data+kk));   // ����ָ������Ҳ���ԡ�
//    }
//}
//// ��ȡջ��Ԫ�أ�����ֵ��0-ʧ�ܣ�1-�ɹ���
//// ֻ�鿴ջ��Ԫ�ص�ֵ��Ԫ�ز���ջ��
//int GetTop(PSeqStack S, ElemType *e)
//{
//    if ( (S == NULL) || (e == NULL) ) return 0;  // ����ָ�롣
//
//    if (IsEmpty(S) == 1) { printf("ջΪ�ա�\n"); return 0; }
//
//    memcpy(e,&S->data[S->top],sizeof(ElemType));  // ��������±���ʡ�
//    // memcpy(e,S->data+S->top,sizeof(ElemType));    // ����ָ������Ҳ���ԡ�
//
//    return 1;
//}
//// ��������ĸ߶ȡ�
//int TreDepth(BiTre T);
//
//// ���ʽ��Ԫ�ء�
//void visit(BiTNode *pp)
//{
//    printf("���������Ԫ�أ�%d\n ",pp->data);  // ���ʽ��Ԫ�ؾ��ǰ�ֵ���������˼һ�¾����ˡ�
//}
//
///**
// * �������
// * ˼·��
// * 1�����ʸ�Ԫ�أ�����ջ
// * 2�����������������ж��Ƿ��������������������������ջ
// * 2�����������������ظ��ϴεĲ���
// * @param T
// */
//void PreOrder1(BiTre T){
//    if(T == NULL)
//    return;
//    SeqStack S;
//    InitStack(&S);
//    ElemType e = T;
//    while (e != NULL || IsEmpty(&S) != 1){
//        if(e != NULL){
//            visit(e);  // �ȷ��ʸ����
//            Push(&S,&e); // �������ջ
//            e = e->lchild;  // ����������
//        }
//        else{
//            Pop(&S,&e);  // ���봫��ָ�룬�����޷����������ĸ�ֵ���������޷�����������
//            e = e->rchild;  // ����������
//        }
//    }
//}
//
//// �������
//void InOrder1(BiTre T){
//    if(T == NULL)
//        return;
//    SeqStack S;
//    InitStack(&S);
//    ElemType e = T;
//    while (e != NULL || IsEmpty(&S) != 1){
//        if(e != NULL){
//            Push(&S,&e); // �������ջ
//            e = e->lchild;  // ����������
//        }
//        else{
//            Pop(&S,&e);
//            visit(e);  // �ȷ��ʸ����
//            e = e->rchild;  // ����������
//        }
//    }
//}
//
//
//// �������
//void PostOrder1(BiTre T){
//    SeqStack S;
//    InitStack(&S);
//    ElemType e = T;
//    ElemType p=NULL; // ������ʹ��Ľ�㡣
//    while (e != NULL || IsEmpty(&S) != 1){
//        if(e != NULL){
//            Push(&S,&e); // �������ջ
//            e = e->lchild;  // ����������
//        }
//        else{
//            GetTop(&S,&e);  // ��ȡ�����
//            if(e->rchild != NULL || e->rchild != p){
//                e = e->rchild;
//                Push(&S,&e);
//                e = e->lchild;
//            } else{
//                Pop(&S,&e);
//                visit(e);
//                p = e;  // ������ʵ�Ԫ��
//                e = NULL;
//            }
//
//        }
//    }
//}
//
