////
//// Created by JM on 2021-11-14.
//// 链栈的实现
//
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//
//typedef int ElemType;
//typedef struct SNode{
//    ElemType data;
//    struct SNode *next;
//} SNode , *LinkStack;
//
//// 初始化
//SNode* InitStack();
//void InitStack(LinkStack S);
//// 元素入栈
//void Push(LinkStack S,ElemType e);
//// 元素出栈
//void Pop(LinkStack S,ElemType &e);
//// 清空栈
//void Clear(LinkStack S);
//// 判断链栈是否为空，返回值：1-空，0-非空或失败。
//int  IsEmpty(LinkStack S);
//// 打印链栈中全部的元素。
//void PrintStack(LinkStack S);
//// 获取栈顶元素，返回值：0-失败；1-成功。
//// 只查看栈顶元素的值，元素不出栈。
//void GetTop(LinkStack S, ElemType &e);
//
//int main(){
//    LinkStack S;
////    S = InitStack();
//    InitStack(S);
////    Push(S,1);
//    for (int i = 0; i < 10; ++i) {
//        Push(S,i+1);
//    }
//    PrintStack(S);
//
//    // 元素出栈
//    int e;
//    Pop(S,e);
//    printf("e : %d\n",e);
//
//    PrintStack(S);
//
//    GetTop(S,e);
//    printf("e : %d\n",e);
//}
//
//void InitStack(LinkStack S){
//    S = (SNode *)malloc(sizeof(SNode)); // 分配头节点
//    if(S == NULL){
//        printf("内存不足，返回失败!\n");
//        return;
//    }
//    S->data = 0;
//    S->next = NULL;
//    printf("初始化成功\n");
//}
//
//void Clear(LinkStack S){
//    if(S == NULL)
//        return;
//
//    SNode *tmp1;
//    SNode *tmp2 = S->next;
//    while (tmp2){
//        tmp1 = tmp2->next;
//        free(tmp2);
//        tmp2 = tmp1;
//    }
//}
//
//void Push(LinkStack S,ElemType e){
//    if(S == NULL || e == NULL)
//        return;
//    SNode *tmp = (SNode *)malloc(sizeof(SNode));
//    if (tmp == NULL)
//        return;
//    tmp->data = e;
//    tmp->next = S->next;
//    S->next = tmp;
//}
//
//void Pop(LinkStack S,ElemType &e){
//    if(S == NULL || S->next == NULL)
//        return;
//    SNode *tmp = S->next;
//    e = tmp->data;
//    S->next = tmp->next;
//    free(tmp);
//}
//
//void PrintStack(LinkStack S){
//    if(S == NULL)
//        return;
//    printf("head");
//    SNode *p = S->next;
//    while (p){
//        printf(" -> %d",p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//void GetTop(LinkStack S, ElemType &e){
//    if(S == NULL || S->next == NULL)
//        return;
//    e = S->next->data;
//}
//
