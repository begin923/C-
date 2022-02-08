////
//// Created by JM on 2021-11-16.
//// 二叉树先序、中序、后序遍历之递归实现
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
//} BiTNode,* BiTree;
//
//// 求二叉树的高度。
//int TreeDepth(BiTree T);
//// 访问结点元素。
//void visit(BiTNode *pp);
//// 采用递归的方法对二叉树的先序遍历。
//void PreOrder(BiTree T);
//// 采用递归的方法对二叉树的中序遍历。
//void InOrder(BiTree T);
//// 采用递归的方法对二叉树的后序遍历。
//void PostOrder(BiTree T);
//
//int main(){
//    BiTree T = 0; // 二叉树初始化
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
//    printf("先序遍历\n");
//    PreOrder(T);
//    printf("先序遍历\n");
//    InOrder(T);
//    printf("先序遍历\n");
//    PostOrder(T);
//
//    printf("二叉树的高度: %d\n",TreeDepth(T));
//}
//
//// 访问元素
//void vist(BiTNode *T){
//    printf("二叉树结点 ：%d\n",T->data);
//}
//
//// 先序遍历元素 - 递归
//void PreOrder(BiTree T){
//    if(T == NULL)
//        return;
//    vist(T); // 输出根结点
//    PreOrder(T->lchild);
//    PreOrder(T->rchild);
//}
//
//// 中序遍历元素 - 递归
//void InOrder(BiTree T){
//    if(T == NULL)
//        return;
//    InOrder(T->lchild);
//    vist(T); // 输出根结点
//    InOrder(T->rchild);
//}
//
//// 先序遍历元素 - 递归
//void PostOrder(BiTree T){
//    if(T == NULL)
//        return;
//    PostOrder(T->lchild);
//    PostOrder(T->rchild);
//    vist(T); // 输出根结点
//}
//
//int TreeDepth(BiTree T){
//    if(T==NULL)
//        return 0;
//    int l = TreeDepth(T->lchild);
//    int r = TreeDepth(T->rchild);
//    return l>r?l+1:r+1;
//}