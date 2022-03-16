//
// Created by JM on 2022-03-13.
//

/**
 * Ա������
 */
#pragma once  // ��ֹͷ�ļ��ظ�����
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
    // ��¼�ļ��е���������
    int m_EmpNum ;
    // Ա�������ָ��
    Worker ** m_EmpArray;
    // ��־�ļ��Ƿ�Ϊ��
    bool m_FileIsEmpty;

    // ���캯��
    WorkerManager();

    // ��ȡԱ������
    int getEmpNum();

    // ��ʼ��Ա��
    void initEmp(Worker ** sArray);

    // �˵�չʾ
    void ShowMenu();
    // �˵�����ѡ��
    void SelectMenu(int choice);
    // �˳�ϵͳ
    void exitSystem();

    // ���Ա��
    void AddEmp();
    //�����ļ�
    void save();


    // ��ʾԱ����Ϣ
    void showEmp();
    // ��ʾԱ��
    void showEmp(int index);

    //����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
    int isExistFromId(int id);

    //ɾ��ְ��
    void delEmp();

    //�޸�ְ��
    void modEmp();

    // ����ְ�������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
    int isExistFromName(string name);

    //����ְ��
    void findEmp();

    //����ְ��
    void sortEmp();

    //����ļ�
    void cleanFile();


};

#endif //DATA_STRUCTURE_ADDEMPLOYEE_H
