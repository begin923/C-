////
//// Created by JM on 2021-11-14.
//// 顺序栈基本操作
//
//#include <cstdio>
//#include <malloc.h>
//#include <cstring>
//
//#define MAXSIZE 10
//typedef int ElemType;
//typedef struct {
//    ElemType data[MAXSIZE]; // 栈顶指针，从0到MAXSIZE-1，-1表示空栈。
//    int top;
//}SeqStack , *PSeqStack;
//
//// 函数声明
//// 初始化
//void InitStack(PSeqStack S);
//// 元素入栈，返回值
//void Push(PSeqStack S,ElemType e);
//// 元素出栈，返回值
//void Pop(PSeqStack S,ElemType &e);
//// 栈长度
//void Lenth(PSeqStack S);
//// 清空栈
//void Clear(PSeqStack S);
//// 判断顺序栈是否为空
//void IsEmpty(PSeqStack S);
//// 判断顺序栈是否已满
//int IsFull(PSeqStack S);
//// 打印元素
//void PrintStack(PSeqStack S);
//// 获取栈顶元素
//void GetTop(PSeqStack S,ElemType &e);
//// 销毁栈
//void DestroyStack(PSeqStack S);
//
//int main(){
//    SeqStack S;
//    InitStack(&S);  // 为什么初始化后不能真正修改形参数值;因为PrintStack函数里面，设置的是：else if(S->top = -1),一直满足；要细心一点
//    PrintStack(&S);
//    // 元素入栈操作
//    for (int i = 0; i < 5; ++i) {
//        Push(&S,i+1);
//    }
//    PrintStack(&S);
//
//    // 元素出栈
//    int e;
//    Pop(&S,e);
//    printf("e ： %d\n",e);
//    PrintStack(&S);
//
//    // 获取栈顶元素
//    int top_value;
//    GetTop(&S,top_value);
//    printf("top_value ： %d\n",top_value);
//
//    return 0;
//}
//
//
//// 初始化实现
//void InitStack(PSeqStack S){
//    Clear(S);
//}
//
//// 清空栈
//void Clear(PSeqStack S){
//    if(S == NULL)
//        printf("顺序栈指针为NULL\n");
//    else{
//        for (int i = 0; i < MAXSIZE; ++i) {
//            S->data[i] = 0;
//        }
//        S->top = -1;  // top 可以为 -1 / 0
//    }
//}
//
//// 元素入栈
//void Push(PSeqStack S,ElemType e){
//    if(S == NULL)
//        printf("~~>顺序栈为 NULL 指针\n");
//    else if (e == NULL)
//        printf("~~>入栈元素为 NULL\n");
//    else if(IsFull(S) == 1)
//        printf("~~>顺序栈已满,不能插入\n");
//    else{
//        S->data[++S->top] = e;
//    }
//}
//
//// 元素出栈
//void Pop(PSeqStack S,ElemType &e){
//    if(S == NULL)
//        printf("-->顺序栈为 NULL 指针\n");
//    else if(S->top == -1)
//        printf("--> 顺序栈为空栈，没有任何元素！\n");
//    else{
//        e = S->data[S->top--]; // top=-1 ； top = 0 , e = S->data[--S->top]
//    }
//}
//
//void PrintStack(PSeqStack S){
//    if(S == NULL)
//        printf("==>顺序栈为 NULL 指针\n");
//    else if(S->top == -1)
//        printf("==>顺序栈为空栈，没有任何元素！\n");
//    else{
//        printf("==>顺序栈元素输出 - Stack");
//        for (int i = 0; i <= S->top; ++i) {
//            printf(" -> %d",S->data[i]);
//        }
//    }
//    printf("\n");
//}
//
//// 栈满
//int IsFull(PSeqStack S){
//    if(S == NULL)
//        printf("++>顺序栈为 NULL 指针\n");
//    else if (S->top >= MAXSIZE-1){
//        printf("++>顺序栈已满\n");
//        return 1;
//    }
//    return 0;
//}
//
//void GetTop(PSeqStack S,ElemType &e){
//    if(S == NULL)
//        return;
//    e = S->data[S->top--];
//}
//
//
//void DestroyStack(PSeqStack S){
//    Clear(S);
//}