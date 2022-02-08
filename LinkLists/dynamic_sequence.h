//
// Created by JM on 2021/7/28.
//

#ifndef DATA_STRUCTURE_DYNAMIC_SEQUENCE_H
#define DATA_STRUCTURE_DYNAMIC_SEQUENCE_H

// ˳���-��̬����ʵ��
#include <cstdlib>
#include "stdio.h"

#define InitSize 10  // Ĭ�ϵ������
typedef struct {
    int *data;
    int MaxSize;  // ˳�����������
    int length;   // ˳���ĵ�ǰ����
} SqlList;

void IncreaseSize(SqlList &L, int i);

// ��ʼ��˳���
void InitList(SqlList &L){
    L.data = (int *)malloc(InitSize * sizeof(int));  // c ����
    L.data = new int[InitSize];  // c++
    L.length = 0 ;
    L.MaxSize = InitSize;
}

// ���б����׷��Ԫ��
void AddElem(SqlList &L , int elem){

//    printf("L.length : %d , L.MaxSize : %d \n "  , L.length , L.MaxSize);

    // ��ǰԪ�ظ���δ�ﵽ����
    if (L.length < L.MaxSize){
        L.data[L.length] = elem;
        L.length += 1;
        printf("0011  -- insert data = %d success \n" , elem);
        return;
    }
    else {
        // Ԫ����󳤶ȴﵽ���ޣ����ӱ�������ޣ�ÿ�����ӳ�ʼ��������
        IncreaseSize(L,InitSize);
        // ������Ԫ���ڱ����
        AddElem(L , elem);  // �ݹ�
        printf("000 -- insert data = %d success \n" , elem);
        return;
    }
}

// ������ĺ����������غ�����������һ�������β�һ��
void AddElem(SqlList &L ,int loc , int elem){

    int i = 1;

//    printf("L.length : %d , L.MaxSize : %d \n "  , L.length , L.MaxSize);

    // ���ֻ�ܲ����ڱ����
    if(L.length < L.MaxSize && loc < (L.length + 1)){
        // Ԫ�������ƶ�
        for(int j = 0 ; (L.length - i) < (loc - 1); i++,j++){
            L.data[L.length - j] = L.data[L.length - i] ;
        }
        L.data[L.length - i] = elem;
        L.length += 1;
        printf("111 - insert %d loction insert data = %d success L.length : %d \n " , loc, L.length);
    }
    else if(L.length == L.MaxSize && loc < (L.length + 1)){
        // Ԫ����󳤶ȴﵽ���ޣ����ӱ�������ޣ�ÿ�����ӳ�ʼ��������
        IncreaseSize(L,InitSize);
        // Ԫ�������ƶ� length - loc + 1 ��Ԫ��
        for(int j = 0 ; (L.length - i) >= (loc - 1); i++,j++){
            L.data[L.length - j] = L.data[L.length - i] ;
            printf("L.data[%d] : %d \n " ,L.length - i, L.data[L.length - i]);
        }
        // ����ֵ�� loc - 1 ��λ��
        L.data[loc - 1] = elem;
        L.length += 1;
        printf("222 - insert %d loction insert data success , L.length : %d \n " , loc, L.length);
    }
    else {
        printf("error - insert %d loction insert data faild \n" , loc);
    }
}

// ���Ӷ�̬����ĳ���
void IncreaseSize(SqlList &L , int len){

//    printf("L.length : %d \n",L.length );
    // ˳���ָ���ַ��ֵ��ָ�� p
    int *p = L.data;
    // ����˳���ָ���ַ
    L.data = new int(L.MaxSize + len);
    // ����ԭʼ���ݵ�������
    for(int i = 0 ; i < L.length ; i++){
        L.data[i] = p[i];
    }
    L.MaxSize = L.MaxSize + len;
//    printf("L.length : %d \n",L.length );
    printf("increase -- length = %d , current datas = %d , MaxSize = %d \n " , len , L.length, L.MaxSize);
    // �ͷ�ԭʼ�ռ�
    free(p);
}

#endif //DATA_STRUCTURE_DYNAMIC_SEQUENCE_H
