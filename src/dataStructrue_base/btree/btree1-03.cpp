////
//// Created by JM on 2021-11-16.
//// 二叉树先序、中序、后序遍历之非递归模式，借助栈来实现
//
//#include <cstring>
//#include <malloc.h>
//#include <cstdio>
//
//// 二叉树结构定义
//typedef struct BiTNode{
//    int data;
//    struct BiTNode * lchild; // 左子树
//    struct BiTNode * rchild; // 右子树
//} BiTNode,* BiTre;
//
//#define MAXSIZE 30 // 设置栈最大长度
//typedef BiTre ElemType; // 自定义栈元素为二叉树
//typedef struct {
//    ElemType data[MAXSIZE];
//    int top;
//}SeqStack,*PSeqStack;
//
//
//// 顺序栈S的初始化操作。
//void InitStack(PSeqStack S);
//
//// 元素入栈，返回值：0-失败；1-成功。
//int Push(PSeqStack S, ElemType *e);
//
//// 元素出栈，返回值：0-失败；1-成功。
//int Pop(PSeqStack S, ElemType *e);
//
//// 求顺序栈的长度，返回值：栈S中元素的个数。
//int Length(PSeqStack S);
//
//// 清空顺序栈。
//void Clear(PSeqStack S);
//
//// 判断顺序栈是否为空，返回值：1-空，0-非空或失败。
//int IsEmpty(PSeqStack S);
//
//// 判断顺序栈是否已满，返回值：1-已满，0-未满或失败。
//int IsFull(PSeqStack S);
//
//// 打印顺序栈中全部的元素。
//void PrintStack(PSeqStack S);
//
//// 获取栈顶元素，返回值：0-失败；1-成功。
//// 只查看栈顶元素的值，元素不出栈。
//int GetTop(PSeqStack S, ElemType *e);
//
//////////////////////////////////////////////////////////////////
//
//// 求二叉树的高度。
//int TreDepth(BiTre T);
//
//// 访问结点元素。
//void visit(BiTNode *pp);
//// 不采用递归的方法对二叉树的先序遍历。
//void PreOrder1(BiTre T);
//// 不采用递归的方法对二叉树的中序遍历。
//void InOrder1(BiTre T);
//// 不采用递归的方法对二叉树的后序遍历。
//void PostOrder1(BiTre T);
//
//int main(){
//    BiTre T = 0; // 二叉树初始化
//    // 二叉树构建
//    T = (BiTNode *)malloc(sizeof(BiTNode));  // 创建结点
//    T->data = 1;
//    T->lchild = T->rchild = NULL;
//
//    T->lchild = (BiTNode *)malloc(sizeof(BiTNode));  // 创建结点
//    T->lchild->data = 2;
//    T->lchild->lchild = T->lchild->rchild = NULL;
//
//    T->rchild = (BiTNode *)malloc(sizeof(BiTNode));  // 创建结点
//    T->rchild->data = 3;
//    T->rchild->lchild = T->rchild->rchild = NULL;
//
//    T->lchild->lchild = (BiTNode *)malloc(sizeof(BiTNode));  // 创建结点
//    T->lchild->lchild->data = 4;
//    T->lchild->lchild->lchild = T->lchild->lchild->rchild = NULL;
//
//    T->lchild->rchild = (BiTNode *)malloc(sizeof(BiTNode));  // 创建结点
//    T->lchild->rchild->data = 5;
//    T->lchild->rchild->lchild = T->lchild->rchild->rchild = NULL;
//
//    T->rchild->lchild = (BiTNode *)malloc(sizeof(BiTNode));  // 创建结点
//    T->rchild->lchild->data = 6;
//    T->rchild->lchild->lchild = T->rchild->lchild->rchild = NULL;
//
////    printf("先序遍历\n");
////    PreOrder1(T);
////    printf("中序遍历\n");
////    InOrder1(T);
//    printf("后续遍历\n");
//    PostOrder1(T);
//
//}
//
//// 顺序栈S的初始化操作。
//void InitStack(PSeqStack S){
//    if(S==NULL)
//        return;
//    S->top = -1;
//    for (int i = 0; i < MAXSIZE; ++i) {
//        S->data[i] = 0;
//    }
//}
//
//// 元素入栈，返回值：0-失败；1-成功。
//int Push(PSeqStack S, ElemType *e){
//    if(S==NULL || e == NULL)
//        return 0;
//    if(IsFull(S) == 1)
//        return 0;
//    S->data[++S->top] = *e;
//    return 1;
//}
//
//// 元素出栈，返回值：0-失败；1-成功。
//int Pop(PSeqStack S, ElemType *e){
//    if(S==NULL || e == NULL)
//        return 0;
//    if(IsEmpty(S) == 1)
//        return 0;
//    *e = S->data[S->top--];
//    return 1;
//}
//
//// 求顺序栈的长度，返回值：栈S中元素的个数。
//int Length(PSeqStack S);
//
//// 清空顺序栈。
//void Clear(PSeqStack S);
//
//// 判断顺序栈是否为空，返回值：1-空，0-非空或失败。
//int IsEmpty(PSeqStack S){
//    if(S==NULL )
//        return 0;
//    return S->top == -1?1:0;
//}
//
//// 判断顺序栈是否已满，返回值：1-已满，0-未满或失败。
//int IsFull(PSeqStack S){
//    if(S==NULL )
//        return 0;
//    return S->top >= MAXSIZE -1?1:0;
//}
//
//// 打印顺序栈中全部的元素。
//void PrintStack(PSeqStack S)
//{
//    if (S == NULL) return;  // 检查空指针。
//
//    if (S->top == -1) { printf("栈为空。\n"); return; }
//
//    int kk;
//    for (kk = 0; kk <= S->top; kk++)
//    {
//        printf("S[%d],value=%d\n",kk,S->data[kk]);     // 用数组的下标访问。
//        // printf("S[%d],value=%d\n",kk,*(S->data+kk));   // 采用指针运算也可以。
//    }
//}
//// 获取栈顶元素，返回值：0-失败；1-成功。
//// 只查看栈顶元素的值，元素不出栈。
//int GetTop(PSeqStack S, ElemType *e)
//{
//    if ( (S == NULL) || (e == NULL) ) return 0;  // 检查空指针。
//
//    if (IsEmpty(S) == 1) { printf("栈为空。\n"); return 0; }
//
//    memcpy(e,&S->data[S->top],sizeof(ElemType));  // 用数组的下标访问。
//    // memcpy(e,S->data+S->top,sizeof(ElemType));    // 采用指针运算也可以。
//
//    return 1;
//}
//// 求二叉树的高度。
//int TreDepth(BiTre T);
//
//// 访问结点元素。
//void visit(BiTNode *pp)
//{
//    printf("二叉树结点元素：%d\n ",pp->data);  // 访问结点元素就是把值输出来，意思一下就行了。
//}
//
///**
// * 先序遍历
// * 思路：
// * 1、访问根元素，并入栈
// * 2、访问左子树，并判断是否有左子树，有则继续访问与入栈
// * 2、访问右子树，并重复上次的操作
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
//            visit(e);  // 先访问根结点
//            Push(&S,&e); // 跟结点入栈
//            e = e->lchild;  // 处理做子树
//        }
//        else{
//            Pop(&S,&e);  // 必须传入指针，否则无法带出变量的赋值，而导致无法访问右子树
//            e = e->rchild;  // 处理右子树
//        }
//    }
//}
//
//// 中序遍历
//void InOrder1(BiTre T){
//    if(T == NULL)
//        return;
//    SeqStack S;
//    InitStack(&S);
//    ElemType e = T;
//    while (e != NULL || IsEmpty(&S) != 1){
//        if(e != NULL){
//            Push(&S,&e); // 根结点入栈
//            e = e->lchild;  // 处理做子树
//        }
//        else{
//            Pop(&S,&e);
//            visit(e);  // 先访问根结点
//            e = e->rchild;  // 处理右子树
//        }
//    }
//}
//
//
//// 后序遍历
//void PostOrder1(BiTre T){
//    SeqStack S;
//    InitStack(&S);
//    ElemType e = T;
//    ElemType p=NULL; // 最近访问过的结点。
//    while (e != NULL || IsEmpty(&S) != 1){
//        if(e != NULL){
//            Push(&S,&e); // 根结点入栈
//            e = e->lchild;  // 处理做子树
//        }
//        else{
//            GetTop(&S,&e);  // 获取根结点
//            if(e->rchild != NULL || e->rchild != p){
//                e = e->rchild;
//                Push(&S,&e);
//                e = e->lchild;
//            } else{
//                Pop(&S,&e);
//                visit(e);
//                p = e;  // 最近访问的元素
//                e = NULL;
//            }
//
//        }
//    }
//}
//
