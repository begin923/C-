//
// Created by JM on 2022-03-13.
//

/**
 * 暂时不考虑异常情况
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "../head/WorkerManager.h"
using namespace std;

// 构造函数
WorkerManager::WorkerManager(){
    ifstream ifs;
    ifs.open(FILENAME , ios::in);

    // 文件不存在
    if(! ifs.is_open()){
        cout << "文件不存在" << endl;
        // 初始化属性
        this->m_EmpNum = 0;
        this->m_EmpArray = NULL;
        this->m_FileIsEmpty = true;
        ifs.close();
        return ;
    }

    // 文件存在，但没有记录
    char ch;
    ifs.seekg(ios::beg); // 光标移动到文件首
    ifs >> ch;
    if(ifs.eof()){
        cout << "" << endl;
        // 初始化属性
        this->m_EmpNum = 0;
        this->m_EmpArray = NULL;
        this->m_FileIsEmpty = true;
        ifs.close();
        return ;
    }

    this->m_FileIsEmpty = false;
    this->m_EmpNum = getEmpNum();
    this->m_EmpArray = new Worker * [this->m_EmpNum];
    initEmp(this->m_EmpArray);

}

// 获取当前文件中人员个数
int WorkerManager::getEmpNum(){
    ifstream ifs;
    ifs.open(FILENAME , ios::in);
    int num = 0;
    int id;
    string name;
    int dId;


    ifs.seekg(ios::beg); // 光标移动到文件首
    while (ifs>> id && ifs>>name && ifs>>dId){
        num++;
    }
//    cout << "职工个数：" << num << endl;
    ifs.close();
    return num;
}

// 初始化员工
void WorkerManager::initEmp(Worker ** sArray){
    ifstream ifs;
    ifs.open(FILENAME , ios::in);
    int id;
    string name;
    int dId;

    int index = 0;  // 要初始化，不然 sArray[index] 会报：Signal: SIGSEGV (Segmentation fault) ； 即访问了系统给这个程序所分配以外的内存空间
    ifs.seekg(ios::beg); // 光标移动到文件首
    while (ifs >> id && ifs >> name && ifs >> dId){
        if(dId == 1){
            sArray[index] = new Employee(id , name , dId);
        }else if(dId == 2) {
            sArray[index] = new Employee(id , name , dId);
        }else if(dId == 3){
            sArray[index] = new Employee(id , name , dId);
        }
        index++;
    }
}

// 菜单展示
void WorkerManager::ShowMenu(){
    cout << "********************************************" << endl;
    cout << "*********  欢迎使用职工管理系统！ **********" << endl;
    cout << "*************  0.退出管理程序  *************" << endl;
    cout << "*************  1.增加职工信息  *************" << endl;
    cout << "*************  2.显示职工信息  *************" << endl;
    cout << "*************  3.删除离职职工  *************" << endl;
    cout << "*************  4.修改职工信息  *************" << endl;
    cout << "*************  5.查找职工信息  *************" << endl;
    cout << "*************  6.按照编号排序  *************" << endl;
    cout << "*************  7.清空所有文档  *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

// 菜单功能选择
void WorkerManager::SelectMenu(int choice){
    switch (choice){
        case 0:
            exitSystem(); // 退出系统
            break;
        case 1:
            // 增加员工股信息
            AddEmp();
            break;
        case 2 :
            // 显示员工信息
            showEmp();
            break;
        case 3:
            // 删除离职人员信息
            delEmp();
            break;
        case 4:
            // 修改员工信息
            modEmp();
            break;
        case 5:
            // 查找职工信息
            findEmp();
            break;
        case 6:
            // 按照编号排序
            sortEmp();
            break;
        case 7:
            // 删除所有文档信息
            cleanFile();
            break;
    }

}

// 退出系统
void WorkerManager::exitSystem(){
    cout << "欢迎下次使用" << endl;
    exit(0);
}

// 添加员工
void WorkerManager::AddEmp() {
    cout << "输入增加职工数量" << endl;
    int addNum;
    cin >> addNum;
    Worker ** newspace = NULL;
    int newsize;

    if(addNum == 0){
        return;
    }
    // 判断输入值是否合法
    if(addNum > 0) {
        // 计算新空间内存大小
        newsize = this->m_EmpNum + addNum;
        // 开辟新内存空间
        newspace = new Worker *[newsize];  // 为什么可以这么操作呢？？

        //将原空间下内容存放到新空间下
        if (this->m_EmpArray != NULL) {
            for (int i = 0; i < this->m_EmpNum; ++i) {
                newspace[i] = this->m_EmpArray[i];
            }
        }
    }

    // 添加员工
    for (int j = 0; j < addNum; ++j) {
        int id;
        string name;
        int dId;
        int dSelect;

        for (int i = 0; i < 3; ++i) {  // 允许误输入3次  ; 这个位置带调试确认：输入字符串，会连续输入三次后直接结束 ， 原因未知
            cout << "请输入第"<< j+1 <<"个员工的编号" << endl;
            cin >> id;

            cout << "请输入第"<< j+1 <<"个员工的姓名" << endl;
            cin >> name;

            cout << "请输入第"<< j+1 <<"个员工的所在部门编号" << endl;
            cin >> dId;

            cout << "请选择职工的岗位" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;

            cin >> dSelect;
            if(dSelect == 1 || dSelect == 2 || dSelect == 3){
                switch (dSelect){
                    case 1:
                        newspace[this->m_EmpNum + j] = new Employee(id, name, dId);
                        break;
                    case 2:
                        newspace[this->m_EmpNum + j] = new Manager(id, name, dId);
                        break;
                    case 3:
                        newspace[this->m_EmpNum + j] = new Boss(id, name, dId);
                        break;
                }
                break;
            }
            cout << "输入有误，请重新选择" << endl;
        }

    }

    // 释放原有空间
    delete[] this->m_EmpArray;
    cout << newspace[0]->m_dId << endl;
    // 更改新空间的指向
    this->m_EmpArray = newspace;
    // 更新新的个数
    this->m_EmpNum = newsize;
    // 保存数据到文件中
    this->save();
    //提示信息
    cout << "成功添加" << addNum << "名新职工！" << endl;
}

//保存文件
void WorkerManager::save(){
    ofstream ofs;
    ofs.open(FILENAME , ios::out); // 打开文件
    for (int i = 0; i < this->m_EmpNum; ++i) {
        ofs << this->m_EmpArray[i]->m_id << " "
            << this->m_EmpArray[i]->m_name << " "
            << this->m_EmpArray[i]->m_dId << endl;
    }
    ofs.close();
}

// 显示员工信息
void WorkerManager::showEmp(){
    ifstream ifs;
    ifs.open(FILENAME , ios::in);

    // 判断文件是否为空
    char ch;
    ifs>>ch;
    if(ifs.eof()){
        cout << "文件为空！" << endl;
        return;
    }

    int id;
    string name;
    int dId;
    ifs.seekg(ios::beg); // 光标移动到文件首
    while (ifs>>id && ifs>>name && ifs>>dId){
        cout << id << " - " << name << " - " << dId << endl;
    }
    ifs.close();
}

//按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
int WorkerManager::isExistFromId(int id){
    int index = -1;
    for (int i = 0; i < this->m_EmpNum; ++i) {
        if(this->m_EmpArray[i]->m_id == id){
            index = i;
            break;
        }
    }
    return index;
}

//删除职工
void WorkerManager::delEmp(){
    if(this->m_FileIsEmpty){
        cout << "文件不存在或记录为空！" << endl;
    }else{
        int id;
        cout << "请输入你要删除职工的id:" << endl;
        cin >> id;
        int index = isExistFromId(id);
        if (index != -1){
            for (int i = id; i < this->m_EmpNum; ++i) {
                this->m_EmpArray[i] = this->m_EmpArray[i+1];
            }
            this->m_EmpNum--;
            this->save();
            cout << "已删除 " << id << " 职工" << endl;
        }else{
            cout << "该职工不存在！" << endl;
        }
    }
}

//修改职工
void WorkerManager::modEmp(){
    if (this->m_FileIsEmpty){
        cout << "文件不存在或文件记录为空！" << endl;
    }else{
        cout << "请输入修改的职工id" << endl;
        int id ;
        cin >>id;
        int index = isExistFromId(id);
        if(index!= -1){
            int new_id = 0;
            string new_name = "";
            int new_dId = 0;
            cout << "查到： " << id << "号职工，请输入新职工号： " << endl;
            cin >> new_id;
            cout << "请输入新姓名：" << endl;
            cin >> new_name;
            cout << "请输入新的岗位：" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> new_dId;
            Worker *worker = NULL;
            if(new_dId == 1){
                worker = new Employee(new_id, new_name , new_dId);
            }else if(new_dId == 2){
                worker = new Manager(new_id, new_name , new_dId);
            }else if(new_dId == 3){
                worker = new Boss(new_id, new_name , new_dId);
            }
            if(worker != NULL){
                this->m_EmpArray[index] = worker;
                this->save();
                cout << "修改成功！" << endl;
            }
        }else{
            cout << "修改失败，查无此人" << endl;
        }
    }
}

//按照职工名称判断职工是否存在,若存在返回职工在数组中位置，不存在返回 -1
int WorkerManager::isExistFromName(string name){
    int index = -1;
    for (int i = 0; i < this->m_EmpNum; ++i) {
        if(this->m_EmpArray[i]->m_name == name){
            index = i;
            break;
        }
    }
    return index;
}

// 显示职工
void WorkerManager::showEmp(int index){
    if(index != -1){
        cout << "职工id:" << this->m_EmpArray[index]->m_id << " 职工姓名:" << this->m_EmpArray[index]->m_name << " 职工岗位id：" << this->m_EmpArray[index]->m_dId << endl;
    }else{
        cout << "查找失败,查无此人！" << endl;
    }
}

//查找职工
void WorkerManager::findEmp(){
    if (this->m_FileIsEmpty){
        cout << "文件不存在或文件记录为空！" << endl;
    }else{
        cout << "请输入查询方式：" << endl;
        cout << "1、按职工编号查找" << endl;
        cout << "2、按姓名查找" << endl;
        int dSelect;
        cin >> dSelect;

        // 按职工id查找
        if(dSelect == 1){
            cout << "请输入要查找的职工id：" << endl;
            int id;
            cin >>id;
            int index = isExistFromId(id);
            showEmp(index);
        }else if(dSelect == 2){
            cout << "请输入要查找的职工名称：" << endl;
            string name;
            cin >>name;
            int index = isExistFromName(name);
            showEmp(index);
        }

    }
}

// 排序职工
void WorkerManager::sortEmp(){
    if(this->m_FileIsEmpty){
        cout << "文件不存在或文件记录为空！" << endl;
    }else {
        cout << "请选择排序方式： " << endl;
        cout << "1、按职工id号进行升序" << endl;
        cout << "2、按职工id号进行降序" << endl;
        int sort = 0;
        cin >> sort;
//        if(sort == 1){// 冒泡排序
//            for (int i = 0; i < this->m_EmpNum - 1; ++i) {
//                for (int j = i + 1; j < this->m_EmpNum; ++j) {
//                    if(this->m_EmpArray[i]->m_id > this->m_EmpArray[j]->m_id){
//                        Worker *worker = this->m_EmpArray[i];
//                        this->m_EmpArray[j] = this->m_EmpArray[i];
//                        this->m_EmpArray[i] = worker;
//                        delete worker;
//                    }
//                }
//            }
//        }else if(sort == 2){
//        }

        for (int i = 0; i < this->m_EmpNum; ++i) {
            int minOrMax = i;
            for (int j =  i + 1; j < this->m_EmpNum; ++j) {
                if(sort == 1){ // 升序
                    cout << m_EmpArray[j]->m_id << " " << m_EmpArray[j]->m_name << endl;
                    if(m_EmpArray[i]->m_id > m_EmpArray[j]->m_id){
                        minOrMax = j;
                    }
                }else{
                    if (m_EmpArray[i]->m_id < m_EmpArray[j]->m_id){
                        minOrMax = j;
                    }
                }
                if(i != minOrMax){
                    Worker *worker = m_EmpArray[i];
                    m_EmpArray[i] = m_EmpArray[minOrMax];
                    m_EmpArray[minOrMax] = worker;
                }
            }
        }
        cout << "排序成功,排序后结果为：" << endl;
        save();
        showEmp();

    }
}

//清空文件
void WorkerManager::cleanFile(){
    cout << "确认清空？" << endl;
    cout << "1、确认" << endl;
    cout << "2、返回" << endl;
    if(this->m_FileIsEmpty || this->m_EmpArray == NULL){
        cout << "文件为空或不存在！" << endl;
    }else{
        int isClean;
        cin >> isClean;
        for (int i = 0; i < this->m_EmpNum; ++i) {
            if(this->m_EmpArray[i] !=NULL){
                delete this->m_EmpArray[i];
            }
        }
        this->m_EmpNum = 0;
        delete[] this->m_EmpArray;
        this->m_FileIsEmpty = true;
        this->m_EmpArray = NULL;
        save();
        cout << "清空成功！" << endl;
    }
}