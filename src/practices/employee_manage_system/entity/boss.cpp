//
// Created by JM on 2022-03-13.
//


#include <iostream>
#include "../head/boss.h"
using namespace std;

Boss::Boss(int id , string name, int dId){
    this->m_id = id;
    this->m_name = name;
    this->m_dId = dId;
}

void Boss::showInfo() {
    cout << "ְ����ţ� " << this->m_dId
         << " \tְ�������� " << this->m_name
         << " \tְ������id�� " << this->m_dId
         << " \t��λְ������ϰ彻��������,���·������Ա��"
         << endl;
}

// ��ȡ��λ����
string Boss::getDepartName(){
    return "�ϰ�";
}