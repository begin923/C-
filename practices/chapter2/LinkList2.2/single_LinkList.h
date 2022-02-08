////
//// Created by JM on 2021/8/28.
////
//
//#ifndef DATA_STRUCTURE_SINGLE_LINKLIST_H
//#define DATA_STRUCTURE_SINGLE_LINKLIST_H
//
///**
// * ???
// * 1????????????????????????????????
// * 2????????????????��?????
// * 3??????????????[??��???????�]???]
// * 4????????????
// * 5???????????[??��?????]
// * 6???��?
// * 7????????????
// * 8??????????
// * 9??????
// *      1?????????????????????????
// *      2????? j ??��
// * 10?????????????
// *      ???
// *      ??????????????
// */
//
//#include <clocale>
//#include <malloc.h>
//
//
//#define singlelinkInitSize 10
//
///**
// * ???????????
// */
//typedef struct LNode {
//    int data; // ?????????????
//    struct LNode * next;  // ???????????????
//} Lnode , * LinkList; // LNode ?????????? LinkList ?????????????????? int
//
//
///**
// * ????????????????
// * ????????????????
// * @param L
// * @return
// */
//bool InitLinkList(LinkList &L){
//    L = NULL;  // ??? ???????�ʦ�???????????
//    return true;
//}
//
///**
// * ????????????????????????
// * @param L
// * @return
// */
//bool InitLinkListHead(LinkList &L){
//    L = (LinkList)malloc(sizeof(Lnode));  // ????????
//    if (L == NULL){
//        return false;  // ?????[????]??????��??
//    }
//    L->next = NULL;
//    return true;
//}
//
//
///**
// * ??????????10???????????-????????
// * @param L
// * @return
// */
//bool InitLinkListNotHead_10(LinkList L,int start = 1){
//    LinkList p = (LinkList)malloc(sizeof(Lnode));
//    if(p == NULL){
//        return false;
//    }
//    for (int i = 0; i < singlelinkInitSize;i++) {
//        p->data = start;
//        p->next = L->next;
//        L->next = p;
//        return true;
//    }
//}
//
//
///**
// * ??????????10???????????-??????
// * @param L
// * @return
// */
//bool InitLinkListWithHead_10(LinkList L,int start = 1){
//    for (int i = 0; i < singlelinkInitSize;i++) {
//        LinkList p = (LinkList)malloc(sizeof(Lnode));
//        if(p == NULL)
//            return false;
//        p->data = start++;
//        p->next = L->next;
//        L->next = p;
//        return true;
//    }
//}
//
//
///**
// * ?��????????
// * @param L
// * @return
// */
//bool isEmpty(LinkList L){
//    return (L == NULL);
//}
//
//// ????????????,????????��?? 1 ???
//LinkList GetElem(LinkList L, int i){
//    int j = 1;
//    LinkList p = L->next;
//    if(i == 0){
//        return L;  // ??????
//    }
//    if(i < 1){
//        return NULL;
//    }
//    while (p!= NULL && j < i){
//        p = p->next;
//        j++;
//    }
//    return p;  // ????��?? i ???????????
//}
//
//
///**
// * ??��-??????
// * @param p
// * @param loop_num
// * @param start
// * @return
// */
//bool CreateLinkListWithHeadFromHead(LinkList &p , int loop_num , int start){
//    // ??????
//    InitLinkListHead(p);
//    // ????????
////    InitLinkList(p);
////    p = (LinkList)malloc(sizeof(Lnode));
////    p->next = NULL;
//    int i = 0;
////    printf("start : %d\n",start);
//    while (i < loop_num){
//        // ??????????????????????
//        LinkList s = (LinkList)malloc(sizeof(Lnode));
//        s->data = start++;  // data ?��???????
//        s->next = p->next;  // p->next ?? ??? p ??????????????????? s ????????????
//        p->next = s;  // ????????? ??? s ????
//        i++;
//    }
//    return true;
//}
//
///**
// * ��?��?????????? - ??????
// * ?��??
// * 1??????????????????????
// * 2????��??????????????��??
// * ??��????O(n)
// * @param L
// * @return
// */
////bool CreateLinkListWithHeadFromTail(LinkList &L) {
////    // ???????????
////    InitLinkListHead(L);
////    if (L == NULL){
////        return false;
////    }
////    LinkList r = L;  // ???????
////    int num;
////    printf("input params :");
////    scanf("%d",&num);
////    while (num != 999){ // 999 ????????
////        LinkList s = (LinkList)malloc(sizeof(Lnode));  // ????????
////        s->data = num;
////        r->next = s;  // r ?????????????
////        r = s ;  // r ????????????
////        scanf("%d",&num);
////    }
////    r->next = NULL;
////    return true;
////}
//
//bool CreateLinkListWithHeadFromTail(LinkList &L,int Loop_num,int start_num) {
//    // ???????????
//    InitLinkListHead(L);
//    if (L == NULL){
//        return false;
//    }
//    LinkList r = L;  // ???????
//    while (Loop_num != 0){
//        LinkList s = (LinkList)malloc(sizeof(Lnode));  // ????????
//        s->data = start_num++;
//        r->next = s;  // r ?????????????
//        r = s ;  // r ????????????
//        Loop_num--;
//    }
//    r->next = NULL;
//    return true;
//}
//
///**
// * ??�� - ????????
// * ?��??
// * 1. ??????? NULL
// * 2. ?????????? ?��????????????????????????[NULL]
// * 3. ?????????????????????
// * @return
// */
//bool CreateLinkListNotHeadFromHead(LinkList &p , int length , int start_num){
//    InitLinkList(p);
//    LinkList s;
//    while (length > 0){
//        s = (LinkList)malloc(sizeof(Lnode));
//        s->data = start_num++;
//        s->next = p;
//        p = s;  // p ???????
//        length--;
//    }
//    return true;
//}
//
///**
// * ��?�� - ????????
// * @param p
// * @param length
// * @param start_num
// * @return
// */
//bool CreateLinkListNotHeadFromTail(LinkList &L, int length , int start_num){
//    InitLinkList(L);
//    LinkList s,r; // r ???��???
//    while (length > 0){
//        s = (LinkList)malloc(sizeof(Lnode));
//        s->data = start_num++;
//        s->next = NULL;
//        if (L == NULL){  // ????????
//            L = s;
//            r = L;
//        } else{
//            r->next = s;
//            r = s;
//        }
//        length--;
//    }
//    return true;
//}
//
//bool CreateLinkListNotHeadFromTail(LinkList &L, LinkList &r, int length , int start_num){
//    InitLinkList(L);
//    LinkList s;
//    while (length > 0){
//        s = (LinkList)malloc(sizeof(Lnode));
//        s->data = start_num++;
//        s->next = NULL;
//        if (L == NULL){  // ????????
//            L = s;
//            r = L;
//        } else{
//            r->next = s;
//            r = s;
//        }
//        length--;
//    }
//    return true;
//}
//
//
//// ??????????????
//void PrintELemWithHead(LinkList L){
//    printf("head -> NULL");
//    LinkList p = L->next;  //  p-> next ??????(???????��?????)
////    printf("address of p ??%s",p);
//    while (p!=NULL){
//        printf(" -> %d",p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
///**
// * L ??????????????????
// * @param L
// */
//void PrintELemNotHead(LinkList L){
//    printf("head");
//    while (L){  // p ??????(???????��?????)
//        printf(" -> %d",L->data);
//        L = L->next;
//    }
//    printf("\n");
//}
//
///**
// * ??????????, ?????????
// */
//LinkList ReverseLinklistNotHead(LinkList L){
//    LinkList newList = NULL,s;
//    while (L){
//        s = (LinkList)malloc(sizeof(Lnode));
//        s->data = L->data;
//        s->next = NULL;
//        if(newList == NULL){
//            newList = s;
//        } else{
//            s->next = newList;
//            newList = s;
//        }
//        L = L->next;
//    }
//    return newList;
//}
//
///**
// * ?????????? ?? ??????
// * @param L
// * @return
// */
//LinkList ReservLinkListWithHead(LinkList L){
//    LinkList newList = NULL,s,p;
//    p = L->next;
//    while(p != NULL){
//        // ???????????��??????????
//        s = (LinkList)malloc(sizeof(Lnode));
//        s->data = p->data;
//        s->next = NULL;
//
//        if(newList == NULL){
//            newList = s;
//        } else{
//            s->next = newList;
//            newList = s;
//        }
//        p = p->next;
//    }
//    return newList;
//}
//
//
///**
// * 1????��?????[?? i ��?��??? e] - ??????
// * 2????��?????[?? i ��?��??? e] - ????????
// * 3?????????  j = 0 or j = 1
// * 4??????????????????? ?????????
// * j = 0 ?????????????????[?????????????��????]
// * j = 1 ???????????????????[?��?????????]
// * @param L
// * @param loc
// * @param e
// * @param not_head 0 - ?????? 1 - ???????
// * @return
// */
//bool LinkListInsertFromLoc(LinkList &L , int loc , int e,int not_head = 0){
//    if(loc < 1) {
//        return false;
//    }
//    // ??????????????????????
//    LinkList s = (LinkList)malloc(sizeof(Lnode));
//    // ???????????????????????��?? ???????????
//    if(loc == 1 && not_head){
//        s->data = e;
//        s->next = L;
//        L = s;
//        return true;
//    }
//    int j = not_head;
//    /**
//     * [20210828]???????????????? L ???????????? L ??????????????????
//     * [20210904,??????]???L  ????? p, p?????????????? L, ????????? P ???????????��??? L???????????????????? L ????????????loc ??????��??
//     */
//    LinkList p = L;
//    while (p != NULL && j < loc - 1){
//        p = p->next;  // p ?????????
//        j++;
//    }
//    if (p == NULL){  // loc ?????,??????��
//        return false;
//    }
//    s->data = e;  // data ?��???????
//    s->next = p->next;  // p->next ?? ??? p ??????????????????? s ????????????
//    p->next = s;  // ????????? ??? s ????
//    return true;
//
//}
//
///**
// * ???????????? : ?????????????????
// * @param p
// * @param e
// * @return
// */
//bool InsertNextNode(LinkList p,int e){
//    if(p == NULL){
//        return false;
//    }
//    LinkList s = (LinkList)malloc(sizeof(Lnode));
//    if(s == NULL){
//        return false;
//    }
//    s->data = e;
//    s->next = p->next;
//    p->next = s;
//    return true;
//}
//
///**
// * ????????????? : ????????????????????????????? ??????????????????????
// * ??��????O(1)
// * @param p
// * @param e
// * @return
// */
//bool InsertPriorNode(LinkList p,int e){
//    if(p == NULL){
//        return false;
//    }
//    LinkList s = (LinkList)malloc(sizeof(Lnode));
//    s->next = p->next;
//    p->next = s;
//    s->data = p->data;  // p ???????s
//    p->data = e;   // ???????? p , ????????? ?? ???????????
//    return true;
//}
//
///**
// * ???????????? - ??????
// * @param L
// * @param loc
// * @param e
// * @return
// */
//bool LinkListInsertFromLocIntoNextNode(LinkList &L,int loc,int e){
//    if(loc < 1){
//        return false;
//    }
//    LinkList p = L;
//    int j = 0;
//    while (p != NULL && j < loc - 1){
//        p = p->next;
//        j++;
//    }
//    InsertNextNode(p,e);
//    return true;
//}
//
///**
// * ????????????? - ??????
// * @param L
// * @param loc
// * @param e
// * @return
// */
//bool LinkListInsertFromLocIntoPriorNode(LinkList &L,int loc,int e){
//    if(loc < 1){
//        return false;
//    }
//    LinkList p = L;
//    int j = 0;
//    while (p != NULL && j < loc - 1){
//        p = p->next;
//        j++;
//    }
//    InsertPriorNode(p,e);
//    return true;
//}
//
///**
// * ??��????? ??
// *   1???????? ???????��????O(1) , ????O(n)
// *   2?????????? :
// * @param L
// * @param loc
// * @param e
// * @param type , 0 - ??????1 - ????????
// * @return
// */
///**
// * ?????????
// * @param L
// * @param p
// * @return
// */
//bool DeleteNode(LinkList &L,LinkList &p,int &e,int loc){
//    LinkList q = p->next;
//    if(q != NULL){
//        p->next = q->next;
//        e = q->data;
//        free(q);
//    }
//    else if(q == NULL) {
//        // p ???????????
//        LinkList s = L;
//        while (s->next != p){
//            s = s->next;
//        }
//        printf("p->data ?? %d\n",p->data);
//        s->next = NULL;
//        e = p->data;
//    }
//    return true;
//}
//
//bool LinkListDeleteNode(LinkList &L,int loc,int &e){
//    if(loc < 1){
//        return false;
//    }
//    int j = 0;
//    LinkList p = L;
//    while (p != NULL && j < loc - 1){
//        p = p->next;
//        j++;
//    }
//    // ???????? null , loc ????????
//    if(p == NULL){
//        printf("value of loc = %d is not legal; p = %d \n",loc,p);
//        return false;
//    }
//    DeleteNode(L,p,e,loc);
//    return true;
//}
//
//
///**
// * ?????????????
// * 1????��?????
// * 2?????????
// */
///**
// * ??��????
// * @param L
// * @param loc
// * @param e
// * @param not_head 1 - ??????? 0 - ??????
// * @return
// */
//bool GetElemFromLoc(LinkList L,int loc,int &e, int not_head = 0){
//    if(loc < 1){
//        return false;
//    }
//    // ???????????????????????
//    if(loc == 1 && not_head){
//        e = L->data;
//        return true;
//    }
//    int j = not_head;
//    while (L != NULL && j < loc){
//        L = L->next;
//        j++;
//    }
//    if(L == NULL){
//        printf("value of loc = %d is not legal; p = %d \n",loc,L);
//        return false;
//    }
//    e = L->data;
//    return true;
//}
//
///**
// * ???????
// * @param L
// * @param e
// * @param res
// * @return
// */
//LinkList GetElemForValue(LinkList L,int e){
//    if(L == NULL){
//        printf("LinkList is empty\n");
//        return NULL;
//    }
//    while (L != NULL){
//        if(L->data == e){
//            printf("value of node = e is %d\n",L->data);
//            return L;
//        }
//        L = L->next;
//    }
//    return NULL;
//}
//
///**
// * ???
// * @param L
// * @param not_head
// * @return
// */
//int GetLinkListLength(LinkList L,int not_head = 0){
//    int length = not_head;
//    while (L->next != NULL){
//        length++;
//        L = L->next;
//    }
//    return length;
//}
//
//
//
//#endif //DATA_STRUCTURE_SINGLE_LINKLIST_H
