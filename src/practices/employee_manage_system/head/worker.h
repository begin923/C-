//
// Created by JM on 2022-03-13.
//


#pragma once  // ��ֹͷ�ļ��ظ�����
#include <iostream>
#include <string>
using  namespace std;

class Worker {
public:
    int m_id;  // ְ�����
    string m_name;  // ְ������
    int m_dId; // ְ�����ڲ��ű��

    // Ա����Ϊ
    // ��ʾ������Ϣ
    virtual void showInfo() = 0;
};

