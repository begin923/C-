//
// Created by JM on 2022-03-13.
//


#include <iostream>
#include "../head/employee.h"
#include <string>
using namespace std;

Employee::Employee(int id, string name, int dId) {
    this->m_id = id;
    this->m_name = name;
    this->m_dId = dId;
}

void Employee::showInfo() {
    cout << "ְ����ţ� " << this->m_dId
         << " \tְ�������� " << this->m_name
         << " \tְ������id�� " << this->m_dId
         << " \t��λְ������ϰ彻��������,���·������Ա��"
         << endl;
}

// ��ȡ��λ����
string Employee::getDeptName(){
    return "Ա��";
}
