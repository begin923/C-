//
// Created by JM on 2021/8/28.
//

/**
 * 顺序表查找练习
 * 1、静态顺序表按位查找
 * 2、动态顺序表按位查找
 * 3、按位查找时间复杂度：O(1);
 *
 * 4、按值查找；最坏时间复杂度：O(n)，最好 O(1)
 *
 * 5、结构体比较
 *
 * 6、顺序表指定位置插入元素 ； 最坏时间复杂度：O(n)，最好：O(1)
 *
 * 7、顺序表删除指定位置元素，最坏/平均时间复杂度：O(n)，最好时间复杂度：O(1)
 *
 */

#include "stdio.h"
#include "sequence_list_2.h"

//静态顺序表按位查找
//int main(){
//    SqList L;
//    InitList_S_2(L);
//    AssignList_S_2(L,10);
//    printf("%d\n",GetELem_S_2(L,7));
//    return 0;
//}

//动态顺序表按位查找
//int main(){
//    SeqList L;
//    InitList_D_2(L);
//    AssignList_D_2(L,10);
//    printf("%d\n",GetELem_D_2(L,5));
//}

// 按值查找
//int main(){
//    SeqList L;
//    InitList_D_2(L);
//    AssignList_D_2(L,1);
//    int elem = GetLocateElem(L,3);
//    printf("%d\n",elem);
//}

//结构类型比较
//int main(){
//    Customer c1,c2;
//    c1.num = 1;
//    c1.people = 10;
//    c2.num = 1;
//    c2.people = 20;
//    printf("%d\n",StructCompare(c1,c2));
//}

// 顺序表指定位置插入元素
//int main(){
//    SeqList L;
//    InitList_D_2(L);
//    AssignList_D_2(L,10);
//    ListInsert(L,3,20);
//    for (int i = 0; i < L.length; ++i) {
//        printf("%d - %d\n",i+1, L.data[i]);
//    }
//}

//int main(){
//    SeqList L;
//    InitList_D_2(L);
//    AssignList_D_2(L,10);
//    int delete_elem;
//    ListDelete(L,2, delete_elem);
//    printf("delete_elem - %d \n", delete_elem);
//    for (int i = 0; i < L.length; ++i) {
//        printf("%d - %d\n",i+1, L.data[i]);
//    }
//}
