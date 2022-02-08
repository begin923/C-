////
//// Created by JM on 2021-11-15.
//// ����������ʵ�֣������������
//
//#include <cstring>
//#include <cstdio>
//#include <malloc.h>
//
//// ���������Ͷ���
//typedef struct BiTNode{
//    int data;  // �洢�������Ԫ��
//    struct BiTNode *lchild; // ����������
//    struct BiTNode *rchild;  // �������ҽ��
//} BiTNode ,*BiTree;
//
//#define MaxSize 30  // �������洢 MaxSize - 1 ��Ԫ��
//typedef BiTree ElemType;  // �������Ԫ������Ϊ������
//typedef struct {
//    ElemType data[MaxSize];
//    int front; // ͷָ��
//    int rear;// βָ�� ��ָ���β���¸�Ԫ��
//} SeqQueue,*PSeqQueue;
//
//// ���в����ĺ�����
//
//// ѭ������QQ�ĳ�ʼ��������
//void InitQueue(PSeqQueue Q);
//
//// Ԫ����ӣ�����ֵ��0-ʧ�ܣ�1-�ɹ���
//int InQueue(PSeqQueue Q, ElemType e);
//
//// Ԫ�س��ӣ�����ֵ��0-ʧ�ܣ�1-�ɹ���
//int OutQueue(PSeqQueue Q, ElemType *e);
//
//// ��ѭ�����еĳ��ȣ�����ֵ��>=0-����QQԪ�صĸ�����
//int  Length(PSeqQueue Q);
//
//// ���ѭ�����С�
//void Clear(PSeqQueue Q);
//
//// �ж�ѭ�������Ƿ�Ϊ�գ�����ֵ��1-�գ�0-�ǿջ�ʧ�ܡ�
//int  IsEmpty(PSeqQueue Q);
//
//// �ж�ѭ�������Ƿ�����������ֵ��1-������0-δ����ʧ�ܡ�
//int IsFull(PSeqQueue Q);
/////////////////////////////////////////////////
//
//// �������Ĳ�α�����
//void LevelOrder(BiTree T);
//
//int main(){
//    /**
//     * �����������ṹ
//     * �ֹ�����һ�����½ṹ�Ķ�������
//              1
//           /     \
//          2       3
//         / \     /
//        4   5   6
//       / \ / \
//      7  8 9 0
//     */
//     // 1���������������
//     BiTree T=0;
//     // 2��������ڵ�
//     T = (BiTNode *)malloc(sizeof(BiTree));
//     T->data = 1;
//     T->lchild = T->rchild = 0;  // �ڶ�����������ָ��Ϊ 0
//
//     // �ڶ����1�����
//     T->lchild = (BiTNode *)malloc(sizeof(BiTree));
//     T->lchild->data = 2;
//     T->lchild->lchild = T->lchild->rchild = 0;  // ��������������ָ��Ϊ 0
//
//     // �ڶ����2�����
//     T->rchild = (BiTNode *)malloc(sizeof(BiTree));
//     T->rchild->data = 3;
//     T->rchild->lchild = T->rchild->rchild = 0;
//
//     // �������1�����
//     T->lchild->lchild = (BiTNode *)malloc(sizeof(BiTree));
//     T->lchild->lchild->data = 4;
//    T->lchild->lchild->lchild = T->lchild->lchild->rchild = 0;
//
//    // ������ڶ����ڵ㡣
//    T->lchild->rchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->lchild->rchild->data=5; T->lchild->rchild->lchild=T->lchild->rchild->rchild=0;
//
//    // ������������ڵ㡣
//    T->rchild->lchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->rchild->lchild->data=6; T->rchild->lchild->lchild=T->rchild->lchild->rchild=0;
//
//    // ���Ĳ��һ���ڵ㡣
//    T->lchild->lchild->lchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->lchild->lchild->lchild->data=7; T->lchild->lchild->lchild->lchild=T->lchild->lchild->lchild->rchild=0;
//
//    // ���Ĳ�ڶ����ڵ㡣
//    T->lchild->lchild->rchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->lchild->lchild->rchild->data=8; T->lchild->lchild->rchild->lchild=T->lchild->lchild->rchild->rchild=0;
//
//    // ���Ĳ�������ڵ㡣
//    T->lchild->rchild->lchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->lchild->rchild->lchild->data=9; T->lchild->rchild->lchild->lchild=T->lchild->rchild->lchild->rchild=0;
//
//    // ���Ĳ���ĸ��ڵ㡣
//    T->lchild->rchild->rchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->lchild->rchild->rchild->data=0; T->lchild->rchild->rchild->lchild=T->lchild->rchild->rchild->rchild=0;
//
//    // ��������α���
//    printf("��α��������");
//    LevelOrder(T);
//    printf("\n");
//}
//
//// �������������ݷ���
//void visit(BiTNode *p){
//    printf("������Ԫ�أ� %d\n",p->data);
//}
//
//// ���������
//void LevelOrder(BiTree T){
//    SeqQueue Q; // ��������
//    InitQueue(&Q); // ��ʼ������
//    ElemType e = T;  // �������Ԫ������
//    InQueue(&Q,e); // �Ѹ���㵱�ɶ���Ԫ�ز������
//    while(IsEmpty(&Q) != 1){ // ���в�Ϊ��
//        OutQueue(&Q,&e);  // ���ӣ������������ṹ, ע��������� ###
//        visit(e); // ���ʳ���Ԫ������
//        if(e->lchild != NULL)
//            InQueue(&Q,e->lchild);
//        if(e->rchild != NULL)
//            InQueue(&Q,e->rchild);
//    }
//}
//
//
//
//void InitQueue(PSeqQueue Q){
//    if(Q==NULL)
//        return;
//    Q->front = Q->rear = 0;  // �˷�һ���洢�ĳ�ʼ��
//    for (int i = 0; i < MaxSize; ++i) {
//        Q->data[i] = 0;
//    }
//}
//
//int InQueue(PSeqQueue Q,ElemType e){
//   if(Q== NULL || e == NULL)
//       return 0;
//   Q->data[Q->rear] = e;
//   Q->rear = (Q->rear + 1)%MaxSize;
//    return 1;
//}
//
//int OutQueue(PSeqQueue Q,ElemType *e){
//    if(Q== NULL || e == NULL)
//        return 0;
//    *e = Q->data[Q->front];
//    Q->front = (Q->front + 1)%MaxSize;
//    return 1;
//}
//
//int IsFull(PSeqQueue Q){
//    if(Q==NULL)
//        return 0;
//    if((Q->rear + 1)%MaxSize == Q->front)
//        return 1;
//    return 0;
//}
//
//int IsEmpty(PSeqQueue Q) {
//    if (Q == NULL)
//        return 0;
//    if (Q->front == Q->rear)
//        return 1;
//    return 0;
//}