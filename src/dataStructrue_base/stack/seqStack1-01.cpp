////
//// Created by JM on 2021-11-14.
//// ˳��ջ��������
//
//#include <cstdio>
//#include <malloc.h>
//#include <cstring>
//
//#define MAXSIZE 10
//typedef int ElemType;
//typedef struct {
//    ElemType data[MAXSIZE]; // ջ��ָ�룬��0��MAXSIZE-1��-1��ʾ��ջ��
//    int top;
//}SeqStack , *PSeqStack;
//
//// ��������
//// ��ʼ��
//void InitStack(PSeqStack S);
//// Ԫ����ջ������ֵ
//void Push(PSeqStack S,ElemType e);
//// Ԫ�س�ջ������ֵ
//void Pop(PSeqStack S,ElemType &e);
//// ջ����
//void Lenth(PSeqStack S);
//// ���ջ
//void Clear(PSeqStack S);
//// �ж�˳��ջ�Ƿ�Ϊ��
//void IsEmpty(PSeqStack S);
//// �ж�˳��ջ�Ƿ�����
//int IsFull(PSeqStack S);
//// ��ӡԪ��
//void PrintStack(PSeqStack S);
//// ��ȡջ��Ԫ��
//void GetTop(PSeqStack S,ElemType &e);
//// ����ջ
//void DestroyStack(PSeqStack S);
//
//int main(){
//    SeqStack S;
//    InitStack(&S);  // Ϊʲô��ʼ�����������޸��β���ֵ;��ΪPrintStack�������棬���õ��ǣ�else if(S->top = -1),һֱ���㣻Ҫϸ��һ��
//    PrintStack(&S);
//    // Ԫ����ջ����
//    for (int i = 0; i < 5; ++i) {
//        Push(&S,i+1);
//    }
//    PrintStack(&S);
//
//    // Ԫ�س�ջ
//    int e;
//    Pop(&S,e);
//    printf("e �� %d\n",e);
//    PrintStack(&S);
//
//    // ��ȡջ��Ԫ��
//    int top_value;
//    GetTop(&S,top_value);
//    printf("top_value �� %d\n",top_value);
//
//    return 0;
//}
//
//
//// ��ʼ��ʵ��
//void InitStack(PSeqStack S){
//    Clear(S);
//}
//
//// ���ջ
//void Clear(PSeqStack S){
//    if(S == NULL)
//        printf("˳��ջָ��ΪNULL\n");
//    else{
//        for (int i = 0; i < MAXSIZE; ++i) {
//            S->data[i] = 0;
//        }
//        S->top = -1;  // top ����Ϊ -1 / 0
//    }
//}
//
//// Ԫ����ջ
//void Push(PSeqStack S,ElemType e){
//    if(S == NULL)
//        printf("~~>˳��ջΪ NULL ָ��\n");
//    else if (e == NULL)
//        printf("~~>��ջԪ��Ϊ NULL\n");
//    else if(IsFull(S) == 1)
//        printf("~~>˳��ջ����,���ܲ���\n");
//    else{
//        S->data[++S->top] = e;
//    }
//}
//
//// Ԫ�س�ջ
//void Pop(PSeqStack S,ElemType &e){
//    if(S == NULL)
//        printf("-->˳��ջΪ NULL ָ��\n");
//    else if(S->top == -1)
//        printf("--> ˳��ջΪ��ջ��û���κ�Ԫ�أ�\n");
//    else{
//        e = S->data[S->top--]; // top=-1 �� top = 0 , e = S->data[--S->top]
//    }
//}
//
//void PrintStack(PSeqStack S){
//    if(S == NULL)
//        printf("==>˳��ջΪ NULL ָ��\n");
//    else if(S->top == -1)
//        printf("==>˳��ջΪ��ջ��û���κ�Ԫ�أ�\n");
//    else{
//        printf("==>˳��ջԪ����� - Stack");
//        for (int i = 0; i <= S->top; ++i) {
//            printf(" -> %d",S->data[i]);
//        }
//    }
//    printf("\n");
//}
//
//// ջ��
//int IsFull(PSeqStack S){
//    if(S == NULL)
//        printf("++>˳��ջΪ NULL ָ��\n");
//    else if (S->top >= MAXSIZE-1){
//        printf("++>˳��ջ����\n");
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