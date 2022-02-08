////
//// Created by JM on 2021-11-13.
//// 顺序表的动态实现
//
//#include <cstdio>
//#include <malloc.h>
//#include <cstring>
//
//#define MAXSIZE 10
//#define EXTSIZE 5
//typedef int ElemType;
//typedef struct {
//    ElemType *data;
//    int maxsize;
//    int length;
//}seqList , *PseqList;
//
//// 初始化
//void InitList(PseqList L);
//// 清空顺序表
//void clear(PseqList L);
//// 插入
//void InsertList(PseqList L,int loc,ElemType e);
//// 扩容
//bool ExtList(PseqList L);
//// 删除指定位置的元素
//void DeleteNode(PseqList L,int loc);
////归并顺序表
//void MergeList(PseqList La,PseqList Lb,PseqList Lc);
//// 打印
//void PrintList(PseqList L);
//
//int main(){
//    seqList L;
//    InitList(&L);
//    for (int i = 1; i <= 10; ++i) {
//        InsertList(&L,1,i);
//    }
//    PrintList(&L);
////    DeleteNode(&L,2);
////    PrintList(&L);
//    InsertList(&L,11,13);
//    PrintList(&L);
//    return 1;
//}
//
//// 初始化
//void InitList(PseqList L){
//    L->data = (ElemType *)malloc(sizeof(ElemType)*MAXSIZE);  // 初始化时，要指定顺序表长度
//    L->maxsize = MAXSIZE;
//    clear(L);
//}
//
//// 清空顺序表
//void clear(PseqList L){
//    if(L == NULL)
//        return;
//    for (int i = 0; i < L->maxsize; ++i) { // 遍历数组并设置每个元素为 0
//        L->data[i] = 0;
//    }
//    L->length = 0;
//}
//
//// 插入元素
//void InsertList(PseqList L,int loc,ElemType e){
//    if(L == NULL || e == NULL)
//        return;
//    if(L->length >= L->maxsize){
//        bool flag = ExtList(L);
//        if(!flag)
//            return;
//    }
//    if(loc < 1 || loc > (L->length + 1)){
//        printf("%d位置不合法\n",loc);
//        return;
//    }
//    for (int k = L->length; k >= loc; k-- ) {
//        L->data[k] = L->data[k-1];
//    }
//    L->data[loc-1] = e;
//    L->length++;
//    return;
//}
//
//void PrintList(PseqList L){
//    if(L==NULL)
//        return;
//    printf("array");
//    for (int i = 0; i < (L->length); ++i) {
////        printf(" -> %d - %d",L->data[i],i);
//        printf(" -> %d",L->data[i]);
//    }
//    printf("\n");
//    return;
//}
//
//void DeleteNode(PseqList L,int loc){
//    if(L==NULL || loc == NULL)
//        return;
//    if(loc < 1 || loc > L->length){
//        printf("位置不合法");
//        return;
//    }
//    if(loc == L->length){
//        L->data[loc-1] = 0;
//        L->length--;
//        return;
//    } else{
//        int k = loc;
//        for (k; k <= L->length; ++k){
//            L->data[k-1] = L->data[k];
//        }
//        L->data[k-1] = 0;
//        L->length--;
//        return;
//    }
//}
//
//// 扩容
//bool ExtList(PseqList L){
//    ElemType *newdata = (ElemType *)malloc(sizeof(ElemType)*(L->maxsize + EXTSIZE));
//    if(newdata == NULL)
//        return false;
//    for (int i = 0; i < L->length; ++i) {
//        newdata[i] = L->data[i];
//    }
//    free(L->data);
//    L->data = newdata;
//    L->maxsize = L->maxsize + EXTSIZE;
//    return true;
//}
//
//// 归并顺序表
//void MergeList(PseqList La,PseqList Lb,PseqList Lc){
//    if ( (La == NULL) || (Lb == NULL) || (Lc == NULL) )   // 检查空指针。
//        return;
//    if(Lc->maxsize < (La->length + Lb->length))
//        return;
//    int istartla=0;  // 表La第一个元素的位置。
//    int istartlb=0;  // 表Lb第一个元素的位置。
//    int istartlc=0;  // 表Lc第一个元素的位置。
//    while (istartla < La->length && istartlb < Lb->length)
//        Lc->data[istartlc++] = La->data[istartla] < Lb->data[istartlb]?La->data[istartla++]:Lb->data[istartlb++];
//    while (istartla < La->length)
//        Lc->data[istartlc++] = La->data[istartla++];
//    while (istartlb < Lb->length)
//        Lc->data[istartlc++] = Lb->data[istartlb++];
//    Lc->length = La->length + Lc->length;
//}