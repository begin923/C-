////
//// Created by JM on 2021-11-14.
//// 循环队列的数组实现，队尾指针指向队尾元素,且浪费一个存储空间，没有length的辅助变量。
//
//#include <cstdio>
//
//# define MAXSIZE 10  // 循环队列的最大长度，最多可以存放MAXSIZE-1个元素。
//typedef int ElemType;
//typedef struct {
//    ElemType data[MAXSIZE]; // 队列元素
//    int front; // 队列指针
//    int rear;  // 队尾指针 ， 指向队尾元素
//}SeqQueue,*PSeqQueue;
//
//// 初始化
//void InitQueue(PSeqQueue Q);
//// 入队
//void InQueue(PSeqQueue Q,ElemType e);
//// 出队
//void OutQueue(PSeqQueue Q,ElemType &e);
//// 判空
//bool IsEmpty(PSeqQueue Q);
///**
// * 判满
// * 循环队列判满方式：
// * 1、浪费一个存储空间：(Q->rear +2)%MAXSIZE == Q->front
// * @param Q
// * @return
// */
//bool IsFull(PSeqQueue Q);
//// 打印队列元素
//void PrintQueue(PSeqQueue Q);
//// 获取队头元素
//void GetHead(PSeqQueue Q);
//// 求队长
//int Length(PSeqQueue Q);
//
//int main(){
//    SeqQueue Q;
//    InitQueue(&Q);
////    PrintQueue(&Q);
//    printf("队长 length :%d\n",Length(&Q));
//    for (int i = 0; i < 5; ++i) {
//        InQueue(&Q,i+1);
//    }
//    PrintQueue(&Q);
//    printf("队长 length :%d\n",Length(&Q));
//    for (int i = 0; i < 5; ++i) {
//        InQueue(&Q,i + 6);
//    }
//    PrintQueue(&Q);
//    printf("队长 length :%d\n",Length(&Q));
//
//    // 出队
//    int out_value;
//    OutQueue(&Q,out_value);
//    printf("out_value : %d\n",out_value);
//    PrintQueue(&Q);
//    printf("队长 length :%d\n",Length(&Q));
//
//}
//
//void InitQueue(PSeqQueue Q){  // 清空队列一样
//    if(Q == NULL)
//        return;
//    Q->front = 0;
//    Q->rear = -1; // 初始化为 -1，注意对比
//    for (int i = 0; i < MAXSIZE; ++i) {
//        Q->data[i] = 0;
//    }
//}
//
//// 元素入队
//void InQueue(PSeqQueue Q,ElemType e){
//    if(Q == NULL)
//        return;
//    if(IsFull(Q)){
//        printf("队列已满, 元素 e ：%d 插入失败！\n",e);
//        return;
//    }
//    Q->rear = (Q->rear + 1)%MAXSIZE; // 循环队列队尾指个元素，循环队列必须这么写,注意顺序
//    Q->data[Q->rear] = e;
//}
//
//void OutQueue(PSeqQueue Q,ElemType &e){
//    if(Q==NULL)
//        return;
//    e = Q->data[Q->front];
//    Q->front = (Q->front + 1)%MAXSIZE; // 循环队列队尾指向下个元素，循环队列必须这么写
//}
//
//// 判满
//bool IsFull(PSeqQueue Q){
//    if(Q==NULL)
//        return true;
//    if((Q->rear +2)%MAXSIZE == Q->front)  // 判满条件，谨记
//        return true;
//    return false;
//}
//
//void PrintQueue(PSeqQueue Q){
//    if(Q == NULL || Q->front == Q->rear)
//        printf("队列为空！\n");
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