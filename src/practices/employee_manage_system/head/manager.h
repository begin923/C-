//
// Created by JM on 2022-03-13.
//

#pragma once  // ��ֹͷ�ļ��ظ�����
#include <iostream>
#include "worker.h"
using namespace std;

class Manager:public Worker{
public:
    Manager(int id , string name, int dId);
    virtual void showInfo();
// ��ȡ��λ����
    virtual string getDepartName();


};
