////
//// Created by JM on 2021-11-14.
//// ѭ�����е�����ʵ�֣���βָ��ָ���βԪ��,���˷�һ���洢�ռ䣬û��length�ĸ���������
//
//#include <cstdio>
//
//# define MAXSIZE 10  // ѭ�����е���󳤶ȣ������Դ��MAXSIZE-1��Ԫ�ء�
//typedef int ElemType;
//typedef struct {
//    ElemType data[MAXSIZE]; // ����Ԫ��
//    int front; // ����ָ��
//    int rear;  // ��βָ�� �� ָ���βԪ��
//}SeqQueue,*PSeqQueue;
//
//// ��ʼ��
//void InitQueue(PSeqQueue Q);
//// ���
//void InQueue(PSeqQueue Q,ElemType e);
//// ����
//void OutQueue(PSeqQueue Q,ElemType &e);
//// �п�
//bool IsEmpty(PSeqQueue Q);
///**
// * ����
// * ѭ������������ʽ��
// * 1���˷�һ���洢�ռ䣺(Q->rear +2)%MAXSIZE == Q->front
// * @param Q
// * @return
// */
//bool IsFull(PSeqQueue Q);
//// ��ӡ����Ԫ��
//void PrintQueue(PSeqQueue Q);
//// ��ȡ��ͷԪ��
//void GetHead(PSeqQueue Q);
//// ��ӳ�
//int Length(PSeqQueue Q);
//
//int main(){
//    SeqQueue Q;
//    InitQueue(&Q);
////    PrintQueue(&Q);
//    printf("�ӳ� length :%d\n",Length(&Q));
//    for (int i = 0; i < 5; ++i) {
//        InQueue(&Q,i+1);
//    }
//    PrintQueue(&Q);
//    printf("�ӳ� length :%d\n",Length(&Q));
//    for (int i = 0; i < 5; ++i) {
//        InQueue(&Q,i + 6);
//    }
//    PrintQueue(&Q);
//    printf("�ӳ� length :%d\n",Length(&Q));
//
//    // ����
//    int out_value;
//    OutQueue(&Q,out_value);
//    printf("out_value : %d\n",out_value);
//    PrintQueue(&Q);
//    printf("�ӳ� length :%d\n",Length(&Q));
//
//}
//
//void InitQueue(PSeqQueue Q){  // ��ն���һ��
//    if(Q == NULL)
//        return;
//    Q->front = 0;
//    Q->rear = -1; // ��ʼ��Ϊ -1��ע��Ա�
//    for (int i = 0; i < MAXSIZE; ++i) {
//        Q->data[i] = 0;
//    }
//}
//
//// Ԫ�����
//void InQueue(PSeqQueue Q,ElemType e){
//    if(Q == NULL)
//        return;
//    if(IsFull(Q)){
//        printf("��������, Ԫ�� e ��%d ����ʧ�ܣ�\n",e);
//        return;
//    }
//    Q->rear = (Q->rear + 1)%MAXSIZE; // ѭ�����ж�βָ��Ԫ�أ�ѭ�����б�����ôд,ע��˳��
//    Q->data[Q->rear] = e;
//}
//
//void OutQueue(PSeqQueue Q,ElemType &e){
//    if(Q==NULL)
//        return;
//    e = Q->data[Q->front];
//    Q->front = (Q->front + 1)%MAXSIZE; // ѭ�����ж�βָ���¸�Ԫ�أ�ѭ�����б�����ôд
//}
//
//// ����
//bool IsFull(PSeqQueue Q){
//    if(Q==NULL)
//        return true;
//    if((Q->rear +2)%MAXSIZE == Q->front)  // ��������������
//        return true;
//    return false;
//}
//
//void PrintQueue(PSeqQueue Q){
//    if(Q == NULL || Q->front == Q->rear)
//        printf("����Ϊ�գ�\n");
//    else{
//        printf("Queue :");
//        int p = Q->front;
//        while (p != Q->rear){
//            printf(" -> %d",Q->data[p++]);
//        }
//        printf("\n");
//    }
//}
//
//int Length(PSeqQueue Q){
//    if(Q==NULL)
//        return 0;
//    return (Q->rear + 1 - Q->front + MAXSIZE)%MAXSIZE;
//}
//
//bool IsEmpty(PSeqQueue Q){
//    if(Q== NULL)
//        return false;
//    return Q->front == (Q->rear + 1)%MAXSIZE? true: false;
//}