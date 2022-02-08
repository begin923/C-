////
//// Created by JM on 2021-11-13.
//// 顺序表的静态实现
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
//// 初始化
//bool InitList(PseqList L);
//
//// 清空顺序表
//void clear(PseqList L);
//
//// 在第i个位置插入元素
//void InsertList(PseqList L, int loc , ElemType e);
//// 在第1个位置插入元素
//bool InsertFront(PseqList L,ElemType e);
//
//// 在顺序表尾插入元素
//bool InsertBack(PseqList L,ElemType e);
//// 打印
//void PrintList(PseqList L,char *print_str = "顺序表元素输出"){
//    if(L->length == 0 || L == NULL){
//        printf("顺序表为空！\n");
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
//    seqList L;  // 必须这么定义，顺序表[L]才不为空
//    InitList(&L);
//    PrintList(&L);
//    for (int i = 0; i < MAXSIZE; ++i) {
//        InsertList(&L,1,i+1);
//    }
//    PrintList(&L);
//}
//
//// 初始化
//bool InitList(PseqList L){
//    clear(L);
//    return true;
//}
//
//// 清空表
//void clear(PseqList L){
//    if(L == NULL){
//        printf("表不存在！");
//        return;
//    }
//    L->length = 0;
//    for (ElemType i = 0; i < MAXSIZE; ++i) {
//        L->data[i] = 0;
//    }
//}
//
//// 插入元素
//void InsertList(PseqList L, int loc , ElemType e){
//    if(L == NULL || e == NULL){  // 检查NULL指针
//        printf("顺序表是空表或传入了NULL值\n");
//        return;
//    }
//    if(loc < 1 || loc > (L->length + 1)) {
//        printf("插入元素位置不合法!");
//        return;
//    }
//    if((L->length + 1) > MAXSIZE){
//        printf("顺序表已满！");
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
