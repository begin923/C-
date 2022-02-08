//
// Created by JM on 2021/9/19.
//

#ifndef DATA_STRUCTURE_LINKLIST2_5_H
#define DATA_STRUCTURE_LINKLIST2_5_H

/**
 * ѭ��˫����ѧϰ�ܽ᣺
 * 1�����塢��ʼ������������д�롢ɾ�������ҡ�����[ǰ�����]
 */

#include <cstdio>
#include <malloc.h>

/**
 * ��ṹ����
 */
typedef struct DNode{
    int data;
    struct DNode *next,* prior;
} Dnode, * DLinkList;

// ��ʼ��
bool InitlinkList(DLinkList &L){
    L = (DLinkList)malloc(sizeof(DNode));
    if(L == NULL){
        return false;
    }
    L->next = L;
    L->prior = L;
    L->data = NULL;
    return true;
}

// �п�
bool isEmpty(DLinkList L){
    return L->next == L && L->prior == L ? true : false;
}

// ���Ƿ��һ���ڵ�
bool isFirst(DLinkList p){
    return p->data == NULL ? true : false;
}

/**
 * ����
 * 1����ͷ�ڵ㣺ͷ�塢β��
 * 2������ͷ�ڵ㣺ͷ�塢β��
 */
bool InsertLinkListWithHeadFromHead(DLinkList &L,int loop , int start){
    InitlinkList(L);
    DLinkList s,p = L;
    while (loop--){
        s = (DLinkList)malloc(sizeof(Dnode));
        s->data = start++;
        // ͷ�ڵ�
        if(p->data == NULL){
            s->next = p;
            s->prior = p;
            p->prior = s;
            p->next = s;
//            printf("%d - %d - %d\n",s->data , s , p);
            p = s;
            continue;
        }
        s->next = L->next;
        s->prior = L->next->prior;
        L->next = s;
//        printf("%d - %d - %d -%d - %d\n",s->data , s , s->next ,p , p->next);
        p = s;
    }
    return true;
}

bool InsertLinkListWithHeadFromTail(DLinkList &L,int loop , int start){
    InitlinkList(L);
    DLinkList s,p = L;
    while (loop--){
        s = (DLinkList)malloc(sizeof(Dnode));
        s->data = start++;
        s->next = p->next;
        s->prior = p->next->prior;
        p->next->prior = s;
        p->next = s;
//        printf("%d - %d - %d - %d\n",s->data , s , p , p->next);
        p = s;
    }
    return true;

}
bool InsertLinkListNotHeadFromHead(DLinkList &L,int loop , int start){
    L = (DLinkList)malloc(sizeof(L));
    L->data = start++;
    L->next = L;
    L->prior = L;
//    printf("%d - %d - %d\n",L->data , L , L->next);
    DLinkList s,p = L;
    while (--loop){
        s = (DLinkList)malloc(sizeof(Dnode));
        s->data = start++;
        s->next = p;
        s->prior = L;
        p->prior = s;
        L->next = s;
//        printf("%d - %d - %d - %d\n",s->data , s , p , p->next);
        p = s;
    }
    L = p;
    return true;
}
bool InsertLinkListNotHeadFromTail(DLinkList &L,int loop , int start){
    L = (DLinkList)malloc(sizeof(L));
    L->data = start++;
    L->next = L;
    L->prior = L;
    DLinkList s,p = L;
    while (--loop){
        s = (DLinkList)malloc(sizeof(Dnode));
        s->data = start++;
        s->next = L;
        s->prior = p->next->prior;
        p->next->prior = s;
        p->next = s;
//        printf("%d - %d - %d - %d\n",s->data , s , p , p->next);
        p = s;
    }
    L->prior = p;
    p->next = L;
    return true;
}

bool CreateLinkList(DLinkList &L,int loop , int star,int inHead =1 , int isHead = 1){
    if(inHead ==1 && isHead == 1){
        return InsertLinkListWithHeadFromHead(L,loop,star);
    } else if (inHead == 0 && isHead == 1){
        return InsertLinkListWithHeadFromTail(L,loop,star);
    } else if (inHead == 1 && isHead == 0){
        return InsertLinkListNotHeadFromHead(L,loop,star);
    } else if (inHead == 0 && isHead == 0){
        return InsertLinkListNotHeadFromTail(L,loop,star);
    }
    printf("Create Linklist is faild !\n");
    return false;
}

/**
 * Ԫ�ز��ң���λ�á���ֵ
 * @param L
 * @param isHead
 */
bool SearchNodeFromLoc(DLinkList L , int loc , int &res,int isHead = 1 ){
     if(loc < 1){
         return false;
     }
     if(loc == 1){
         if(isHead){
             res = L->next->data;
         } else{
             res = L->data;
         }
         return true;
     }
     else{
         int h = isHead ? 0 : 1;
         DLinkList p = L;
         while (loc > h && p->next != L){
             p = p->next;
             loc--;
         }
         res = p->data;
         return true;
     }
}

bool SearchNodeForValue(DLinkList L,int value){
    DLinkList p = L;
    while (p->next != L){
        if(p->data == value){
            return true;
        }
        p = p->next;
    }
    return false;
}


bool DelLinkListELemFromLoc(DLinkList L,int loc,int & res,int isHead = 1){
    if(loc < 1){
        return false;
    }
    if(loc == 1){
        if(isHead){
            res = L->next->data;
            L->next = L->next->next;
        } else{
            res = L->data;
            L->next = L->next->next;
        }
        free(L->next);
        return true;
    } else if (loc > 1){
        DLinkList p = L->next; // ������һ���ڵ�[ͷ�ڵ�]
        int h = 0;
        while (p != L && --loc - 1 > h){
//            printf("loc : %d - h : %d - %d \n",loc , h , p->data);
            p = p->next;
        }
        if(p->next == L){
            return false;
        }
        res = p->next->data;
        p->next = p->next->next;
        free(p->next);
        return true;
    }
    return false;
}

// �������
void PrintElemFromTail(DLinkList L,int isHead = 1){
//    printf("L : %d\n",L);
    if(!isEmpty(L)){
        DLinkList p = L;
        printf("head :");
        if(isFirst(L) && isHead == 1){
            p = p->next;
            printf(" -> NUll");
        }
        if(isHead == 0){
            printf(" -> %d ",p->data);
            p = p->next;
        }
        while (p != L){
            printf(" -> %d",p->data);
            p = p->next;
        }
    } else{
        printf("LinkList is empty !");
    }
    printf("\n");
}

// ǰ�����
void PrintElemFromHead(DLinkList L,int isHead = 1){
//    printf("L : %d\n",L);
    if(!isEmpty(L)){
        DLinkList p = L;
        printf("head :");
        if(isFirst(L) && isHead == 1){
            p = p->prior;
            printf(" -> NUll");
        }
        if(isHead == 0){
            printf(" -> %d ",p->data);
            p = p->prior;
        }
        while (p != L){
            printf(" -> %d",p->data);
            p = p->prior;
        }
    } else{
        printf("LinkList is empty !");
    }
    printf("\n");
}

#endif //DATA_STRUCTURE_LINKLIST2_5_H
