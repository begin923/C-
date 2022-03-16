//
// Created by JM on 2022-03-13.
//

#pragma once  // 防止头文件重复包含
#include <iostream>
#include "worker.h"
using namespace std;

class Employee:public Worker{
public:
    Employee(int id, string name, int dId) ;

    virtual void showInfo();
    virtual string getDeptName();

};
