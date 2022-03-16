//
// Created by JM on 2022-03-13.
//


#pragma once  // 防止头文件重复包含
#include <iostream>
#include <string>
using  namespace std;

class Worker {
public:
    int m_id;  // 职工编号
    string m_name;  // 职工姓名
    int m_dId; // 职工所在部门编号

    // 员工行为
    // 显示个人信息
    virtual void showInfo() = 0;
};

