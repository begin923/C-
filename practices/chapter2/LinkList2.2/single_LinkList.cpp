//
// Created by JM on 2021/8/28.
//

#include "single_LinkList.h"

/**
 * �������ʼ���뽨������д������
 * @return
 */
//int main(){
//    LinkList p;
////    CreateLinkListHead(p,10,2);
//    CreateLinkListTail(p);
//    PrintELem(p);
//    return 0;
//}


/**
 * ���������� - ����ͷ�ڵ�
 * @return
 */
//int main(){
//    LinkList L;
////    CreateLinkListNotHeadFromHead(L,10,10);
//    CreateLinkListNotHeadFomTail(L,10,10);
//    PrintELemNotHead(L);
//    LinkList L1 = ReverseLinklistNotHead(L);
//    PrintELemNotHead(L1);
//}

/**
 * ���������� - ��ͷ�ڵ�
 * @return
 */
//int main(){
//    LinkList L;
////    CreateLinkListNotHeadFromHead(L,10,10);
//    CreateLinkListWithHeadFromTail(L);
//    PrintELemWithHead(L);
//    LinkList L1 = ReservLinkListWithHead(L);
//    PrintELemNotHead(L1);
//}


/**
 * ��λ����� - ��ͷ�ڵ�
 * @return
 */
//int main(){
//    LinkList L;
//    // ͷ�巨 - ��ͷ�ڵ�
//    CreateLinkListWithHeadFromHead(L,10,2);
//    PrintELemWithHead(L);
//    // ��ͷ���
//    LinkListInsertFromLoc(L,1,100);
//    PrintELemWithHead(L);
//}


/**
 * ��λ����� - ����ͷ�ڵ�
 * @return
 */
//int main(){
//    LinkList L;
//    // ͷ�巨 - ��ͷ�ڵ�
//    CreateLinkListNotHeadFromHead(L,10,2);
//    PrintELemNotHead(L);
//    // ����ͷ���
//    LinkListInsertFromLoc(L,11,100,1);
//    PrintELemNotHead(L);
//}

/**
 *ָ���ڵ�ĺ����� , ��ͷָ�룬 Ԫ�ش�0��ʼ,Ԫ�ش� 1 ��ʼ
 * @return
 */
//int main(){
//    LinkList L;
//    CreateLinkListWithHeadFromHead(L,10,10);
//    LinkListInsertFromLocIntoNextNode(L,3,100);
//    PrintELemWithHead(L);
//}


/**
 *ָ���ڵ�ĺ����� , ����ͷָ�룬λ�ô�1��ʼ�� Ԫ�ش�1��ʼ
 * @return
 */
//int main(){
//    LinkList L;
//    CreateLinkListNotHeadFromHead(L,10,10);
//    LinkListInsertFromLocIntoNextNode(L,3,100);
//    PrintELemNotHead(L);
//}

/**
 *ָ���ڵ��ǰ����� , ��ͷָ�룬 λ�ô�0��ʼ,Ԫ�ش� 1 ��ʼ
 * @return
 */
//int main(){
//    LinkList L;
//    CreateLinkListWithHeadFromHead(L,10,10);
//    LinkListInsertFromLocIntoPriorNode(L,3,100);
//    PrintELemWithHead(L);
//}

/**
 *ָ���ڵ�ĺ����� , ����ͷָ�룬 λ�ô�1��ʼ,Ԫ�ش� 1 ��ʼ
 * @return
 */
//int main(){
//    LinkList L;
//    CreateLinkListNotHeadFromHead(L,10,10);
//    LinkListInsertFromLocIntoPriorNode(L,3,100);
//    PrintELemNotHead(L);
//}

/**
 * ��λ��ɾ��Ԫ�� - ��ͷ���
 * @return
 */
//int main(){
//    LinkList L;
//    int e;
//    CreateLinkListWithHeadFromHead(L,5,10);
//    printf("Ԫ��ɾ��ǰ -- ================================\n");
//    PrintELemWithHead(L);
//    LinkListDeleteNode(L,6,e);
//    printf("Ԫ��ɾ���� -- ================================\n");
//    PrintELemWithHead(L);
//    printf("delete elem is ��%d\n",e);
//}

/**
 * ��λ��ɾ��Ԫ�� - ����ͷ���
 * @return
 */
//int main(){
//    LinkList L;
//    int e;
//    CreateLinkListNotHeadFromTail(L,5,10);
//    printf("Ԫ��ɾ��ǰ -- ================================\n");
//    PrintELemNotHead(L);
//    LinkListDeleteNode(L,6,e);
//    printf("Ԫ��ɾ���� -- ================================\n");
//    PrintELemNotHead(L);
//    printf("delete elem is ��%d\n",e);
//}

//int main(){
//    LinkList L,r;
//    int e;
//    CreateLinkListNotHeadFromTail(L,5,10);
//    printf("Ԫ��ɾ��ǰ -- ================================\n");
//    PrintELemNotHead(L);
//    LinkListDeleteNode(L,3,e);
//    printf("Ԫ��ɾ���� -- ================================\n");
//    PrintELemNotHead(L);
//    printf("delete elem is ��%d\n",e);
//}

/**
 * ����Ԫ��
 * 1����λ�����
 * 2����ֵ����
 * @return
 */
// ��λ Ĭ�ϴ�ͷָ��
//int main(){
//    LinkList L;
//    int e;
//    CreateLinkListWithHeadFromTail(L,5,10);
//    PrintELemWithHead(L);
//    GetElemFromLoc(L,1,e);
//    printf("value of e �� %d\n",e);
//    return 0;
//}

// ��λ - ����ͷָ��
//int main(){
//    LinkList L;
//    int e;
//    CreateLinkListNotHeadFromTail(L,5,10);
//    PrintELemNotHead(L);
//    GetElemFromLoc(L,1,e,1);
//    printf("value of e �� %d\n",e);
//    return 0;
//}

/**
 * ��ֵ����
 * @return
 */
//int main(){
//    LinkList L;
//    int e = 14;
////    CreateLinkListWithHeadFromTail(L,5,10);
////    PrintELemWithHead(L);
//    CreateLinkListNotHeadFromTail(L,5,10);
//    PrintELemNotHead(L);
//    LinkList p = GetElemForValue(L,e);
//    if(p == NULL){
//        printf("û���ҵ���Ӧ��ֵ\n");
//    } else{
//        printf("p->data : %d\n",p->data);
//    }
//}

/**
 * ���
 * @return
 */
//int main(){
//    LinkList L;
////    CreateLinkListWithHeadFromTail(L,10,10);
////    PrintELemWithHead(L);
////    printf("length of L : %d\n",GetLinkListLength(L));
//    CreateLinkListNotHeadFromHead(L,10,10);
//    PrintELemNotHead(L);
//    printf("length of L : %d\n",GetLinkListLength(L,1));
//}