//
// Created by JM on 2022-03-13.
//

/**
 * 员工管理
 */
#pragma once  // 防止头文件重复包含
#include <iostream>
#include <fstream>
using namespace std;

#include "worker.h"
#include "../head/employee.h"
#include "../head/boss.h"
#include "../head/manager.h"



#ifndef DATA_STRUCTURE_ADDEMPLOYEE_H
#define DATA_STRUCTURE_ADDEMPLOYEE_H

#define FILENAME "empFile.txt"

class WorkerManager{
public:
    // 记录文件中的人数个数
    int m_EmpNum ;
    // 员工数组的指针
    Worker ** m_EmpArray;
    // 标志文件是否为空
    bool m_FileIsEmpty;

    // 构造函数
    WorkerManager();

    // 获取员工数量
    int getEmpNum();

    // 初始化员工
    void initEmp(Worker ** sArray);

    // 菜单展示
    void ShowMenu();
    // 菜单功能选择
    void SelectMenu(int choice);
    // 退出系统
    void exitSystem();

    // 添加员工
    void AddEmp();
    //保存文件
    void save();


    // 显示员工信息
    void showEmp();
    // 显示员工
    void showEmp(int index);

    //按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
    int isExistFromId(int id);

    //删除职工
    void delEmp();

    //修改职工
    void modEmp();

    // 按照职工名称判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
    int isExistFromName(string name);

    //查找职工
    void findEmp();

    //排序职工
    void sortEmp();

    //清空文件
    void cleanFile();


};

#endif //DATA_STRUCTURE_ADDEMPLOYEE_H
