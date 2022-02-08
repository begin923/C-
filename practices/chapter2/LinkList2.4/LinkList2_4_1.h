////
//// Created by chenjiahong on 2021/9/11.
////
//
///**
// * ѭ���������ܽ᣺
// * 1����ṹ����
// * 2����ʼ����
// *      1. ע���ͷ�ڵ��벻��ͷ�ڵ�ĳ�ʼ����
// *      2. ע���һ���ڵ�����⴦�����롢ɾ����
// */
//
//#ifndef DATASTRUCTURE_LINKLIST2_4_1_H
//#define DATASTRUCTURE_LINKLIST2_4_1_H
//
//#include <clocale>
//#include <malloc.h>
//#include <cstdio>
//
///**
// * �ṹ����
// */
//typedef struct CNode{
//    int data;
//    struct CNode * next;
//} Cnode, * CLinkList;
//
///**
// * ���ʼ��
// * �ձ�ͷָ��ָ��ͷָ��
// * @param L
// * @param is_head : 1 - ��ͷ��0 - ����ͷ
// * @return
// */
//bool InitLinkList(CLinkList &L){
//    L = (CLinkList)malloc(sizeof(Cnode));
//    if(L == NULL){
//        printf("init is fail !\n");
//        return false;
//    }
//    L->next = L; // β�ڵ�ָ�� L
//    L->data = NULL;
//    printf("init is success !\n");
//    return true;
//}
//
///**
//* �пձ�
//* @param L : ѭ��������ͷָ��
//* @return
//*/
//bool isEmpty(CLinkList L){
//    return L->next == L ? true : false;
//}
//
///**
//* �б�β
//* @param L : ѭ��������ͷָ��
//* @param p �� ��ǰ�ڵ�
//* @return
//*/
//bool isTail(CLinkList L,CLinkList p){
//    return p->next == L ? true : false;
//}
//
///**
// * �ж��Ƿ�Ϊͷ�ڵ�
// * @param p
// * @return
// */
//bool isFirst(CLinkList p){
//    return p->data == NULL ? true : false;
//}
//
///**
// * ѭ�������� - ��ͷָ�� - β�巨
// * @param L
// * @param loop
// * @param start
// * @return
// */
//bool CreateCLinkListWithHeadForTail(CLinkList &L , int loop , int start){
//    if(loop < 1){
//        printf("");
//        return false;
//    }
//    InitLinkList(L);  // �ǵ��Ǵ�������[������ַ]
//    if(L == NULL){
//        return false;
//    }
//    CLinkList s,p = L;
//    while (loop > 0){
//        s = (CLinkList)malloc(sizeof(Cnode));
//        s->data = start++;
//        s->next = p->next;  // �޸�Ҫ����ָ���next ָ��ָ��
//        p->next = s;
//        p = s;
//        loop--;
//    }
//
//    // for �Ĵ���ʽ
////    for (int i = 0; i < loop; i++) {
////        CLinkList s = (CLinkList)malloc(sizeof(Cnode));
////        s->data = start++;
////        s->next = p->next;
////        p->next = s;
////        p = s;
////    }
//    return true;
//}
//
///**
// * ѭ�������� - ��ͷָ�� - ͷ�巨
// * @param L
// * @param loop
// * @param start
// * @return
// */
//bool CreateCLinkListWithHeadForHead(CLinkList &L,int loop , int start){
//    if(loop < 1 || start < 1){
//        return false;
//    }
//    InitLinkList(L);
//    CLinkList s,p = L;
//    while (loop > 0){
//        s = (CLinkList)malloc(sizeof(Cnode));
//        s->data = start++;
//        s->next = L->next;
//        L->next = s; // �����޸�ͷָ��ָ��
//        loop--;
//    }
//    return true;
//}
//
///**
// * ����ͷָ�� - β�巨
// * @param L
// * @param loop
// * @param start
// * @return
// */
//bool CreateCLinkListNotHeadForTail(CLinkList &L, int loop , int start){
//    if(loop < 1 && start < 1){
//        return false;
//    }
//    // ����ͷָ��ĵ�һ��ָ�����⴦��
//    L = (CLinkList)malloc(sizeof(CNode));
//    L->data = start++;
//    CLinkList s,p = L;
//    while (loop > 1){
//        s = (CLinkList)malloc(sizeof(Cnode));
//        s->data = start++;
//        s->next = p->next;
//        p->next = s;
////        printf("%d - %d - %d - %d - %d - %d\n",s->data , s , p->next , p , L,L->data);
//        p = s;
//        loop--;
//    }
//    p->next = L;  // ָ��ͷָ��
//    return true;
//}
//
//
//bool CreateCLinkListNotHeadForHead(CLinkList &L, int loop , int start){
//    if(loop < 1 && start < 1){
//        return false;
//    }
//    // ����ͷָ��ĵ�һ��ָ�����⴦��
//    L = (CLinkList)malloc(sizeof(CNode));
//    L->data = start++;
//    CLinkList s,p = L;
//    while (loop > 1){
//        s = (CLinkList)malloc(sizeof(Cnode));
//        s->data = start++;
//        s->next = p;
//        p = s;
//        loop--;
//    }
//    L->next = p;
//    L = p;
//    return true;
//}
//
//
///**
// * Ԫ�ز���
// * 1����λ����
// * 2����ֵ����
// */
//bool SearchNode(CLinkList L,int loc, int &e,int h){
//    CLinkList p = L;
//    while (loc > h && p->next != L){
//        p = p->next;
//        loc--;
//    }
//    if(p != NULL && p->next != L){
//        e = p->data;
//        return true;
//    } else{
//        printf("value of loc is not legal !");
//        return false;
//    }
//}
//
//// ��λ�����
//bool SearchClinkListFromLoc(CLinkList L,int loc, int &e, int is_head = 1){
//    if(loc < 1){
//        printf("value of loc is not legal !");
//        return false;
//    }
//    int h = is_head ? 0 : 1 ;
//    return SearchNode(L,loc,e,h);
//}
//
//// ��ֵ����
//bool SearchClinkListForValue(CLinkList L, int value, int is_head = 1){
//    CLinkList p = L;
//    if(is_head){
//        p = p->next;
//    }
//    while (p->next != L){
//        if(value == p->data){
////            printf("value is exists !\n");
//            return true;
//        }
////        printf("value : %d \n",p->data);
//        p = p->next;
//    }
//    return false;
//}
//
///**
// * �ڵ�ɾ��
// * 1��ָ��λ��ɾ��
// */
//bool DelLinkListFromLoc(CLinkList &L,int loc,int is_head = 1){
//    if(loc < 1){
//        return false;
//    }
//    int h = is_head ? 0 : 1;
//    CLinkList p = L;
//    // ��һ���ڵ㴦��
//    if(loc == 1 && is_head == 1){
//        L->next = L->next->next;
//        return true;
//    } else if(loc == 1){
//        L = L->next;
//        return true;
//    }
//    while (loc - 1 > h && p->next != L){
//        p = p->next;
//        loc--;
//    }
//    if(p->next != L){
//        p->next = p->next->next;
//        return true;
//    }else{
//        return false;
//    }
//}
//
///**
// * ѭ�����������
// * @param L
// * @param is_head
// * @return
// */
//bool PrintElemAfter(CLinkList L,int is_head = 1){
//    CLinkList p = L;
//    printf("head");
//    if(!isEmpty(L)){
//        if(is_head == 1){
//            if(isFirst(p)){
//                printf(" -> NULL ");
//                p = p->next;
//            }
//            while (L != p){
//                printf(" -> %d",p->data);
//                p = p->next;
//            }
//        } else if(is_head == 0){
//            /**
//             * ����ͷָ�� �� ��һ��ָ�����
//             */
//            printf(" -> %d",p->data);
//            while (L != p->next){
//                p = p->next;
//                printf(" -> %d",p->data);
//            }
//        } else
//            return false;
//    } else{
//        printf("link list is null !");
//    }
//    printf("\n");
//    return true;
//};
//
//
//
//#endif //DATASTRUCTURE_LINKLIST2_4_1_H
