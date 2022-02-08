////
//// Created by JM on 2021-11-13.
//// ˳���ľ�̬ʵ��
//
//#include <cstdio>
//
//#define MAXSIZE 10
//typedef int ElemType;
//typedef struct {
//    ElemType data[MAXSIZE];
//    int length;
//}seqList , *PseqList;
//
//// ��ʼ��
//bool InitList(PseqList L);
//
//// ���˳���
//void clear(PseqList L);
//
//// �ڵ�i��λ�ò���Ԫ��
//void InsertList(PseqList L, int loc , ElemType e);
//// �ڵ�1��λ�ò���Ԫ��
//bool InsertFront(PseqList L,ElemType e);
//
//// ��˳���β����Ԫ��
//bool InsertBack(PseqList L,ElemType e);
//// ��ӡ
//void PrintList(PseqList L,char *print_str = "˳���Ԫ�����"){
//    if(L->length == 0 || L == NULL){
//        printf("˳���Ϊ�գ�\n");
//        return;
//    }
//    printf("head");
//    for (int i = 0; i < L->length; ++i) {
//        printf(" -> %d ",L->data[i]);
//    }
//    printf("\n");
//}
//
//int main(){
//    seqList L;  // ������ô���壬˳���[L]�Ų�Ϊ��
//    InitList(&L);
//    PrintList(&L);
//    for (int i = 0; i < MAXSIZE; ++i) {
//        InsertList(&L,1,i+1);
//    }
//    PrintList(&L);
//}
//
//// ��ʼ��
//bool InitList(PseqList L){
//    clear(L);
//    return true;
//}
//
//// ��ձ�
//void clear(PseqList L){
//    if(L == NULL){
//        printf("�����ڣ�");
//        return;
//    }
//    L->length = 0;
//    for (ElemType i = 0; i < MAXSIZE; ++i) {
//        L->data[i] = 0;
//    }
//}
//
//// ����Ԫ��
//void InsertList(PseqList L, int loc , ElemType e){
//    if(L == NULL || e == NULL){  // ���NULLָ��
//        printf("˳����ǿձ������NULLֵ\n");
//        return;
//    }
//    if(loc < 1 || loc > (L->length + 1)) {
//        printf("����Ԫ��λ�ò��Ϸ�!");
//        return;
//    }
//    if((L->length + 1) > MAXSIZE){
//        printf("˳���������");
//        return;
//    }
//    int k = L->length;
//    for (k; k >= loc; k--) {
//        L->data[k] = L->data[k-1];
//    }
//    L->data[k] = e;
//    L->length++;
//}
//
//
