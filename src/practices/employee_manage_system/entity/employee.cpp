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
    cout << "职工编号： " << this->m_dId
         << " \t职工姓名： " << this->m_name
         << " \t职工部门id： " << this->m_dId
         << " \t岗位职责：完成老板交给的任务,并下发任务给员工"
         << endl;
}

// 获取岗位名称
string Employee::getDeptName(){
    return "员工";
}
