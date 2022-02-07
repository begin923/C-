////
//// Created by JM on 2021-11-15.
//// 二叉树遍历实现：借助队列完成
//
//#include <cstring>
//#include <cstdio>
//#include <malloc.h>
//
//// 二叉树类型定义
//typedef struct BiTNode{
//    int data;  // 存储结点数据元素
//    struct BiTNode *lchild; // 二叉树左结点
//    struct BiTNode *rchild;  // 二叉树右结点
//} BiTNode ,*BiTree;
//
//#define MaxSize 30  // 队列最多存储 MaxSize - 1 个元素
//typedef BiTree ElemType;  // 定义队列元素类型为二叉树
//typedef struct {
//    ElemType data[MaxSize];
//    int front; // 头指针
//    int rear;// 尾指针 ，指向队尾的下个元素
//} SeqQueue,*PSeqQueue;
//
//// 队列操作的函数。
//
//// 循环队列QQ的初始化操作。
//void InitQueue(PSeqQueue Q);
//
//// 元素入队，返回值：0-失败；1-成功。
//int InQueue(PSeqQueue Q, ElemType e);
//
//// 元素出队，返回值：0-失败；1-成功。
//int OutQueue(PSeqQueue Q, ElemType *e);
//
//// 求循环队列的长度，返回值：>=0-队列QQ元素的个数。
//int  Length(PSeqQueue Q);
//
//// 清空循环队列。
//void Clear(PSeqQueue Q);
//
//// 判断循环队列是否为空，返回值：1-空，0-非空或失败。
//int  IsEmpty(PSeqQueue Q);
//
//// 判断循环队列是否已满，返回值：1-已满，0-未满或失败。
//int IsFull(PSeqQueue Q);
/////////////////////////////////////////////////
//
//// 二叉树的层次遍历。
//void LevelOrder(BiTree T);
//
//int main(){
//    /**
//     * 构建二叉树结构
//     * 手工构造一个如下结构的二叉树。
//              1
//           /     \
//          2       3
//         / \     /
//        4   5   6
//       / \ / \
//      7  8 9 0
//     */
//     // 1、定义二叉树变量
//     BiTree T=0;
//     // 2、分配根节点
//     T = (BiTNode *)malloc(sizeof(BiTree));
//     T->data = 1;
//     T->lchild = T->rchild = 0;  // 第二层左右子树指针为 0
//
//     // 第二层第1个结点
//     T->lchild = (BiTNode *)malloc(sizeof(BiTree));
//     T->lchild->data = 2;
//     T->lchild->lchild = T->lchild->rchild = 0;  // 第三层左右子树指针为 0
//
//     // 第二层第2个结点
//     T->rchild = (BiTNode *)malloc(sizeof(BiTree));
//     T->rchild->data = 3;
//     T->rchild->lchild = T->rchild->rchild = 0;
//
//     // 第三层第1个结点
//     T->lchild->lchild = (BiTNode *)malloc(sizeof(BiTree));
//     T->lchild->lchild->data = 4;
//    T->lchild->lchild->lchild = T->lchild->lchild->rchild = 0;
//
//    // 第三层第二个节点。
//    T->lchild->rchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->lchild->rchild->data=5; T->lchild->rchild->lchild=T->lchild->rchild->rchild=0;
//
//    // 第三层第三个节点。
//    T->rchild->lchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->rchild->lchild->data=6; T->rchild->lchild->lchild=T->rchild->lchild->rchild=0;
//
//    // 第四层第一个节点。
//    T->lchild->lchild->lchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->lchild->lchild->lchild->data=7; T->lchild->lchild->lchild->lchild=T->lchild->lchild->lchild->rchild=0;
//
//    // 第四层第二个节点。
//    T->lchild->lchild->rchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->lchild->lchild->rchild->data=8; T->lchild->lchild->rchild->lchild=T->lchild->lchild->rchild->rchild=0;
//
//    // 第四层第三个节点。
//    T->lchild->rchild->lchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->lchild->rchild->lchild->data=9; T->lchild->rchild->lchild->lchild=T->lchild->rchild->lchild->rchild=0;
//
//    // 第四层第四个节点。
//    T->lchild->rchild->rchild=(BiTNode *)malloc(sizeof(BiTNode));
//    T->lchild->rchild->rchild->data=0; T->lchild->rchild->rchild->lchild=T->lchild->rchild->rchild->rchild=0;
//
//    // 二叉树层次遍历
//    printf("层次遍历结果：");
//    LevelOrder(T);
//    printf("\n");
//}
//
//// 二叉树子树数据访问
//void visit(BiTNode *p){
//    printf("二叉树元素： %d\n",p->data);
//}
//
//// 二叉树层次
//void LevelOrder(BiTree T){
//    SeqQueue Q; // 创建队列
//    InitQueue(&Q); // 初始化队列
//    ElemType e = T;  // 定义队列元素类型
//    InQueue(&Q,e); // 把根结点当成队列元素插入队列
//    while(IsEmpty(&Q) != 1){ // 队列不为空
//        OutQueue(&Q,&e);  // 出队，构建二叉树结构, 注意参数类型 ###
//        visit(e); // 访问出队元素数据
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
//    Q->front = Q->rear = 0;  // 浪费一个存储的初始化
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