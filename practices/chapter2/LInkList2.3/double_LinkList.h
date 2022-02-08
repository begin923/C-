////
//// Created by JM on 2021/9/4.
////
//
//#ifndef DATA_STRUCTURE_DOUBLE_LINKLIST_H
//#define DATA_STRUCTURE_DOUBLE_LINKLIST_H
//
//#include <malloc.h>
//#include <cstring>
//#include "stdio.h"
//
///**
// * ˫����ṹ����
// */
//typedef struct DNode {
//    int data;
//    struct DNode * prior,* next;  // ǰ���ָ��
//} Dnode , *DLinkList;
//
///**
// * ˫�����ʼ��
// */
///**
// * ��ʼ�� - ��ͷָ�� ; ����ͷ�ڵ㣬����Ҫ��ʼ��
// * ��������ֵ��ǰ�̡����ָ��ΪNULL
// * @param L
// * @return
// */
//bool InitDLinkList(DLinkList &L,int is_head = 1){
//    L = (DLinkList)malloc(sizeof(Dnode));
//    if(is_head){
//        L->prior = NULL;
//        L->next = NULL;
//        L->data = NULL;  // ��ֹ�ڴ�������
//    }
//    return true;
//}
//
///**
// * �ж��Ƿ�Ϊ������
// */
//bool isEmpty(DLinkList L,int not_heat = 1){
//    if(L == NULL && not_heat){
//        return true;
//    }
//    if((!not_heat) && (L->data == -1)){
//        return true;
//    }
//    return false;
//}
//
//
//
///**
// * ͷ����� - ��ͷָ��
// */
//bool CreateDLinkListWithHeadFromHead(DLinkList &L,int loop_num , int start_num){
//    InitDLinkList(L);
//    DLinkList p = L;
////     p = L;
//    while(loop_num != 0){
//        DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//        s->data = start_num++;
//        // �ж� p �Ƿ�Ϊͷָ����ָ��
//        if(isEmpty(p)){
//            p->next = s;
//            s->prior = p;
//            p = s;
//        } else{
//            p->prior->next = s;  // p ��ǰ�ڵ�ĺ��ָ��ָ�� s
//            s->next = p;
//            s->prior = p->prior;  // s ��ǰ��ָ��ָ�� ֮ǰԪ�� p ��ǰ��ָ��
//            p = s;
//        }
//        loop_num--;
//    }
//    return true;
//}
//
//
///**
// * β����� - ��ͷָ��
// */
//bool CreateDLinkListWithHeadFromTail(DLinkList &L,int loop_num , int start_num){
//    InitDLinkList(L);
//    DLinkList p = L;
//    while(loop_num != 0){
//        DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//        s->data = start_num++;
//        s->next = p->next;
//        s->prior = p;
//        if(p->next != NULL){
//            p->next->prior = s;  // ԭʼ p �ĺ�̽ڵ��ǰ��ָ��Ҫ��� s
//        }
//        p->next = s;
//        p = s;
//        loop_num--;
//    }
//    return true;
//}
//
///**
// * ͷ����� - ����ͷָ��
// * @param p
// * @param loop_num
// * @param start_num
// * @return
// */
//bool CreateDLinkListNotHeadFromHead(DLinkList &L,int loop_num , int start_num){
////    L = (DLinkList)_malloca(sizeof(Dnode));
//    L = (DLinkList)_malloca(sizeof(Dnode));
//    DLinkList p = L;
//    p->data = 0;  // ��������ݣ���ʹ�����д��룬�����19 -> 18 -> 17 -> 16 -> 15 -> 14 -> 13 -> 12 -> 11 -> 10 -> 4264118 -> 1379136
//    p->prior = NULL;
//    p->next = NULL;
//    while(loop_num != 0){
//        DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//        s->data = start_num++;
//        if(isEmpty(p)){  // �ձ�/�սڵ�
//            s->next = NULL;
//            s->prior = NULL;
//            p = s;
//        } else{
//            s->next = p;
//            p->prior = s;
//            p = s;
//        }
//        loop_num--;
//    }
//    return true;
//}
//
//
///**
// * β����� - ����ͷָ��
// */
//bool CreateDLinkListNotHeadFromTail(DLinkList &L,int loop_num , int start_num){
//    InitDLinkList(L,0);
//    DLinkList p = L;
//    int flag = 1;
//    while(loop_num != 1){
//        DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//        s->data = start_num++;
//        if(flag){  // �Ƿ�Ϊ��һ��ָ��
////            printf("This is first point !\n");
//            // û��ͷָ��ĵ�һ��ָ������⴦��'
//            // ���ָ�ֵ��ʽ���������ʱ�������� ������ԭ��δ֪
////            s->prior = NULL;
////            s->next = NULL;
////            p = s;
//            p->data = s->data;
//            p->next = NULL;
//            p->prior = NULL;
////            printf("222222222222  ========== %d - %d - %d\n",p->data,p->prior,p->next);
//            flag = 0;
//            continue;
//        }
//        // ����ָ��Ĵ���
//        s->prior = p;
//        p->next = s;
//        s->next = NULL;
//        loop_num--;
//        p = s;
////        printf("222222222222  ========== %d - %d - %d\n",p->data,p->prior,p->next);
//    }
//    return true;
//}
//
///**
// * �������
// */
//void PrintELem(DLinkList L,int is_head = 1){
//    printf("head");
//    if(is_head){
//        L = L->next;
//        printf(" -> NULL");
//    }
//    int i = 1;
//    while (L != NULL){
////        printf("%d - %d \n",L->data , L->next);
//        printf(" -> %d",L->data);
//        L = L->next;
//        i++;
//    }
//    printf("\n");
//}
//
//// ��ǰ����
//void PrintELemPrior(DLinkList L,int is_head = 1){
//    printf("head");
//    if(is_head){
//        L = L->next;
//    }
//    while (L != NULL){
//        printf(" -> %d",L->data);
//        L = L->next;
//    }
//}
//
///**
// * �������
// * 1����λ�����,��λ��ǰ����
// */
//// ǰ�����
//bool InsertNodeBefore(DLinkList &L,DLinkList p,int e,int loc , int is_head){
//    DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//    s->data = e;
//    if(loc == 1 && !is_head){  // ����ͷ�ڵ�,ʹ��ǰ�������Ҫ���� L �ĵ�ַΪ���µĵ�һ��Ԫ�صĵ�ַ
////        printf("is_head : %d - %d  - %d - %d - %d\n",is_head,p->next , p->prior , p->data , s->data);
//        s->next = p;
//        p->prior = s;
//        L = s;
//        return true;
//    }
//    if(p->next != NULL){  // ��� p ��̽ڵ�
//        p->next->prior = s;
//    }
//    s->next = p->next;
//    s->prior = p;
//    p->next = s;
//}
//
//// ������
//bool InsertNodeAfter(DLinkList p ,int loc,int e,int is_head){
//    DLinkList s = (DLinkList)malloc(sizeof(Dnode));
//    s->data = e;
//    if(loc == 1 && !is_head){  // û��ͷָ��ĵ�һ��Ԫ�ش���
//        p->next->prior = s;
//        s->next = p->next;
//        s->prior = p;
//        p->next = s;
//        return true;
//    }
//    // ����һ��Ԫ��֮�⣬����Ԫ�صĺ�����������һ��
//    if(p->next != NULL && (is_head || loc != 1)){  // ��ͷָ��/��ǲ���ͷָ��ĵ�һ��ָ��
//        p = p->next;
//    }
////    else if (p->next != NULL && is_head){  // ����ͷָ��
////
////    }
//    if(p->next == NULL){
//        printf("input value of loc is not legal\n");
//        return false;
//    }
//    if(p->next != NULL){  // ��� p ��̽ڵ�
//        p->next->prior = s;
//    }
//    s->next = p->next;
//    s->prior = p;
//    p->next = s;
//}
//
//
///**
// *
// * @param L
// * @param loc
// * @param e
// * @param is_before  1 - ǰ������� 0 - ������ �� Ĭ��ǰ��
// * @param is_head   1 - ��ͷָ�룬 0 - ����ͷָ��
// * @return
// */
//bool InsertLocDLinkList(DLinkList &L,int loc,int e ,int is_before = 1 , int is_head = 1){
//    bool flag;
//    if(loc < 1){
//        return false;
//    }
//    int j = 0;
//    DLinkList p = L;
//    while (p != NULL && j < loc -1){
//        p = p->next;
//        j++;
//    }
//    // �ж� loc �Ƿ񳬳�������
//    if(p == NULL){
//        printf("input value of loc : %d is not legal\n",loc);
//        return false;
//    }
//    if(is_before){
//        flag = InsertNodeBefore(L,p,e,loc,is_head);
//    } else {
//        flag = InsertNodeAfter(p,loc,e,is_head);
//    }
//    return flag;
//}
//
//
//
///**
// * ��λ��ɾ��[ǰɾ����ɾ �� ɾ��λ���Ӧָ����ֵ]
// * @param L
// * @param loc
// * @param is_del_head , 0 - ɾ��λ��ǰ�ڵ㣬 1 - ɾ��λ��ǰһ���ڵ㣬 2 - ɾ��λ�����ڵ�
// * @param is_head
// * @return
// */
//bool DeleteNode(DLinkList p,int loc , int is_del_head){
//    DLinkList s = p->next;
//    if(s == NULL){
//        free(s);
//        printf("input loc or is_del_head is legal!");
//        return false;
//    }
//    if(is_del_head == 1){
//        p->prior->next = s;
//        p->next->prior = p->prior;
//        free(s);
//        return true;
//    } else if(is_del_head == 0){
//        // ��ɾ�����һ���ڵ㣬ֱ�Ӹ����һ���ڵ㸳ֵΪ null
//        if(s->next == NULL){
//            s->prior->next = NULL;
//            s = NULL;
//            free(s);
//            return true;
//        }
//        s->prior->next = s->next;
//        s->next->prior = s;
//        free(s);
//        return true;
//    } else if(s->next != NULL && is_del_head == 2){
//        s->next = s->next->next;
//        s->next->next->prior = s;
//        free(s);
//        return true;
//    }
//    else{
//        free(s);
//        printf("input loc or is_del_head is legal!");
//        return false;
//    }
//}
//
///**
// *
// * @param L
// * @param loc
// * @param is_del_head , 1 - ɾ��λ��ǰ��Ԫ�أ� 0 - ɾ��λ����Ԫ��
// * @param is_head , 1 - ��ͷ�ڵ㣬 0 - ����ͷ�ڵ�
// * @return
// */
//bool DeleteDlinkList(DLinkList &L, int loc, int is_del_head = 1,int is_head = 1){
//    if(loc < 1){
//        return false;
//    }
//    DLinkList p = L;
//    if(loc == 1){
//        if(is_del_head == 1){
//            printf("loc or is_del_head is not legal!");
//            return false;
//        }
//        if(is_head == 1 ){
//            p->next = p->next->next;
//            p->next->next->prior = p;
//            return true;
//        } else if(is_head == 0 ){
//            p->next->prior = NULL;
//            p = NULL;
//            return true;
//        } else{
//            printf("loc or is_del_head is not legal!");
//            return false;
//        }
//    }
//    int j = is_head ? 0 : 1;
//    while (L != NULL && j < loc - 1){
//        p = p->next;
//        j++;
//    }
//    if(p == NULL){
//        printf("input value of loc : %d is not legal\n",loc);
//        return false;
//    }
//    return DeleteNode(p,loc,is_del_head);
//}
//
//#endif //DATA_STRUCTURE_DOUBLE_LINKLIST_H
