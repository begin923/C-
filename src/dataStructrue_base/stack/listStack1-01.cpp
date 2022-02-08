////
//// Created by JM on 2021-11-14.
//// ��ջ��ʵ��
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
//// ��ʼ��
//SNode* InitStack();
//void InitStack(LinkStack S);
//// Ԫ����ջ
//void Push(LinkStack S,ElemType e);
//// Ԫ�س�ջ
//void Pop(LinkStack S,ElemType &e);
//// ���ջ
//void Clear(LinkStack S);
//// �ж���ջ�Ƿ�Ϊ�գ�����ֵ��1-�գ�0-�ǿջ�ʧ�ܡ�
//int  IsEmpty(LinkStack S);
//// ��ӡ��ջ��ȫ����Ԫ�ء�
//void PrintStack(LinkStack S);
//// ��ȡջ��Ԫ�أ�����ֵ��0-ʧ�ܣ�1-�ɹ���
//// ֻ�鿴ջ��Ԫ�ص�ֵ��Ԫ�ز���ջ��
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
//    // Ԫ�س�ջ
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
//    S = (SNode *)malloc(sizeof(SNode)); // ����ͷ�ڵ�
//    if(S == NULL){
//        printf("�ڴ治�㣬����ʧ��!\n");
//        return;
//    }
//    S->data = 0;
//    S->next = NULL;
//    printf("��ʼ���ɹ�\n");
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
