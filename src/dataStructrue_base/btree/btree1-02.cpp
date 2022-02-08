////
//// Created by JM on 2021-11-16.
//// �������������򡢺������֮�ݹ�ʵ��
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
//} BiTNode,* BiTree;
//
//// ��������ĸ߶ȡ�
//int TreeDepth(BiTree T);
//// ���ʽ��Ԫ�ء�
//void visit(BiTNode *pp);
//// ���õݹ�ķ����Զ����������������
//void PreOrder(BiTree T);
//// ���õݹ�ķ����Զ����������������
//void InOrder(BiTree T);
//// ���õݹ�ķ����Զ������ĺ��������
//void PostOrder(BiTree T);
//
//int main(){
//    BiTree T = 0; // ��������ʼ��
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
//    printf("�������\n");
//    PreOrder(T);
//    printf("�������\n");
//    InOrder(T);
//    printf("�������\n");
//    PostOrder(T);
//
//    printf("�������ĸ߶�: %d\n",TreeDepth(T));
//}
//
//// ����Ԫ��
//void vist(BiTNode *T){
//    printf("��������� ��%d\n",T->data);
//}
//
//// �������Ԫ�� - �ݹ�
//void PreOrder(BiTree T){
//    if(T == NULL)
//        return;
//    vist(T); // ��������
//    PreOrder(T->lchild);
//    PreOrder(T->rchild);
//}
//
//// �������Ԫ�� - �ݹ�
//void InOrder(BiTree T){
//    if(T == NULL)
//        return;
//    InOrder(T->lchild);
//    vist(T); // ��������
//    InOrder(T->rchild);
//}
//
//// �������Ԫ�� - �ݹ�
//void PostOrder(BiTree T){
//    if(T == NULL)
//        return;
//    PostOrder(T->lchild);
//    PostOrder(T->rchild);
//    vist(T); // ��������
//}
//
//int TreeDepth(BiTree T){
//    if(T==NULL)
//        return 0;
//    int l = TreeDepth(T->lchild);
//    int r = TreeDepth(T->rchild);
//    return l>r?l+1:r+1;
//}