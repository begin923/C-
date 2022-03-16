//
// Created by JM on 2022-03-13.
//

/**
 * ��ʱ�������쳣���
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "../head/WorkerManager.h"
using namespace std;

// ���캯��
WorkerManager::WorkerManager(){
    ifstream ifs;
    ifs.open(FILENAME , ios::in);

    // �ļ�������
    if(! ifs.is_open()){
        cout << "�ļ�������" << endl;
        // ��ʼ������
        this->m_EmpNum = 0;
        this->m_EmpArray = NULL;
        this->m_FileIsEmpty = true;
        ifs.close();
        return ;
    }

    // �ļ����ڣ���û�м�¼
    char ch;
    ifs.seekg(ios::beg); // ����ƶ����ļ���
    ifs >> ch;
    if(ifs.eof()){
        cout << "" << endl;
        // ��ʼ������
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

// ��ȡ��ǰ�ļ�����Ա����
int WorkerManager::getEmpNum(){
    ifstream ifs;
    ifs.open(FILENAME , ios::in);
    int num = 0;
    int id;
    string name;
    int dId;


    ifs.seekg(ios::beg); // ����ƶ����ļ���
    while (ifs>> id && ifs>>name && ifs>>dId){
        num++;
    }
//    cout << "ְ��������" << num << endl;
    ifs.close();
    return num;
}

// ��ʼ��Ա��
void WorkerManager::initEmp(Worker ** sArray){
    ifstream ifs;
    ifs.open(FILENAME , ios::in);
    int id;
    string name;
    int dId;

    int index = 0;  // Ҫ��ʼ������Ȼ sArray[index] �ᱨ��Signal: SIGSEGV (Segmentation fault) �� ��������ϵͳ���������������������ڴ�ռ�
    ifs.seekg(ios::beg); // ����ƶ����ļ���
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

// �˵�չʾ
void WorkerManager::ShowMenu(){
    cout << "********************************************" << endl;
    cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
    cout << "*************  0.�˳��������  *************" << endl;
    cout << "*************  1.����ְ����Ϣ  *************" << endl;
    cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
    cout << "*************  3.ɾ����ְְ��  *************" << endl;
    cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
    cout << "*************  5.����ְ����Ϣ  *************" << endl;
    cout << "*************  6.���ձ������  *************" << endl;
    cout << "*************  7.��������ĵ�  *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

// �˵�����ѡ��
void WorkerManager::SelectMenu(int choice){
    switch (choice){
        case 0:
            exitSystem(); // �˳�ϵͳ
            break;
        case 1:
            // ����Ա������Ϣ
            AddEmp();
            break;
        case 2 :
            // ��ʾԱ����Ϣ
            showEmp();
            break;
        case 3:
            // ɾ����ְ��Ա��Ϣ
            delEmp();
            break;
        case 4:
            // �޸�Ա����Ϣ
            modEmp();
            break;
        case 5:
            // ����ְ����Ϣ
            findEmp();
            break;
        case 6:
            // ���ձ������
            sortEmp();
            break;
        case 7:
            // ɾ�������ĵ���Ϣ
            cleanFile();
            break;
    }

}

// �˳�ϵͳ
void WorkerManager::exitSystem(){
    cout << "��ӭ�´�ʹ��" << endl;
    exit(0);
}

// ���Ա��
void WorkerManager::AddEmp() {
    cout << "��������ְ������" << endl;
    int addNum;
    cin >> addNum;
    Worker ** newspace = NULL;
    int newsize;

    if(addNum == 0){
        return;
    }
    // �ж�����ֵ�Ƿ�Ϸ�
    if(addNum > 0) {
        // �����¿ռ��ڴ��С
        newsize = this->m_EmpNum + addNum;
        // �������ڴ�ռ�
        newspace = new Worker *[newsize];  // Ϊʲô������ô�����أ���

        //��ԭ�ռ������ݴ�ŵ��¿ռ���
        if (this->m_EmpArray != NULL) {
            for (int i = 0; i < this->m_EmpNum; ++i) {
                newspace[i] = this->m_EmpArray[i];
            }
        }
    }

    // ���Ա��
    for (int j = 0; j < addNum; ++j) {
        int id;
        string name;
        int dId;
        int dSelect;

        for (int i = 0; i < 3; ++i) {  // ����������3��  ; ���λ�ô�����ȷ�ϣ������ַ������������������κ�ֱ�ӽ��� �� ԭ��δ֪
            cout << "�������"<< j+1 <<"��Ա���ı��" << endl;
            cin >> id;

            cout << "�������"<< j+1 <<"��Ա��������" << endl;
            cin >> name;

            cout << "�������"<< j+1 <<"��Ա�������ڲ��ű��" << endl;
            cin >> dId;

            cout << "��ѡ��ְ���ĸ�λ" << endl;
            cout << "1����ְͨ��" << endl;
            cout << "2������" << endl;
            cout << "3���ϰ�" << endl;

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
            cout << "��������������ѡ��" << endl;
        }

    }

    // �ͷ�ԭ�пռ�
    delete[] this->m_EmpArray;
    cout << newspace[0]->m_dId << endl;
    // �����¿ռ��ָ��
    this->m_EmpArray = newspace;
    // �����µĸ���
    this->m_EmpNum = newsize;
    // �������ݵ��ļ���
    this->save();
    //��ʾ��Ϣ
    cout << "�ɹ����" << addNum << "����ְ����" << endl;
}

//�����ļ�
void WorkerManager::save(){
    ofstream ofs;
    ofs.open(FILENAME , ios::out); // ���ļ�
    for (int i = 0; i < this->m_EmpNum; ++i) {
        ofs << this->m_EmpArray[i]->m_id << " "
            << this->m_EmpArray[i]->m_name << " "
            << this->m_EmpArray[i]->m_dId << endl;
    }
    ofs.close();
}

// ��ʾԱ����Ϣ
void WorkerManager::showEmp(){
    ifstream ifs;
    ifs.open(FILENAME , ios::in);

    // �ж��ļ��Ƿ�Ϊ��
    char ch;
    ifs>>ch;
    if(ifs.eof()){
        cout << "�ļ�Ϊ�գ�" << endl;
        return;
    }

    int id;
    string name;
    int dId;
    ifs.seekg(ios::beg); // ����ƶ����ļ���
    while (ifs>>id && ifs>>name && ifs>>dId){
        cout << id << " - " << name << " - " << dId << endl;
    }
    ifs.close();
}

//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
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

//ɾ��ְ��
void WorkerManager::delEmp(){
    if(this->m_FileIsEmpty){
        cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
    }else{
        int id;
        cout << "��������Ҫɾ��ְ����id:" << endl;
        cin >> id;
        int index = isExistFromId(id);
        if (index != -1){
            for (int i = id; i < this->m_EmpNum; ++i) {
                this->m_EmpArray[i] = this->m_EmpArray[i+1];
            }
            this->m_EmpNum--;
            this->save();
            cout << "��ɾ�� " << id << " ְ��" << endl;
        }else{
            cout << "��ְ�������ڣ�" << endl;
        }
    }
}

//�޸�ְ��
void WorkerManager::modEmp(){
    if (this->m_FileIsEmpty){
        cout << "�ļ������ڻ��ļ���¼Ϊ�գ�" << endl;
    }else{
        cout << "�������޸ĵ�ְ��id" << endl;
        int id ;
        cin >>id;
        int index = isExistFromId(id);
        if(index!= -1){
            int new_id = 0;
            string new_name = "";
            int new_dId = 0;
            cout << "�鵽�� " << id << "��ְ������������ְ���ţ� " << endl;
            cin >> new_id;
            cout << "��������������" << endl;
            cin >> new_name;
            cout << "�������µĸ�λ��" << endl;
            cout << "1����ְͨ��" << endl;
            cout << "2������" << endl;
            cout << "3���ϰ�" << endl;
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
                cout << "�޸ĳɹ���" << endl;
            }
        }else{
            cout << "�޸�ʧ�ܣ����޴���" << endl;
        }
    }
}

//����ְ�������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ��� -1
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

// ��ʾְ��
void WorkerManager::showEmp(int index){
    if(index != -1){
        cout << "ְ��id:" << this->m_EmpArray[index]->m_id << " ְ������:" << this->m_EmpArray[index]->m_name << " ְ����λid��" << this->m_EmpArray[index]->m_dId << endl;
    }else{
        cout << "����ʧ��,���޴��ˣ�" << endl;
    }
}

//����ְ��
void WorkerManager::findEmp(){
    if (this->m_FileIsEmpty){
        cout << "�ļ������ڻ��ļ���¼Ϊ�գ�" << endl;
    }else{
        cout << "�������ѯ��ʽ��" << endl;
        cout << "1����ְ����Ų���" << endl;
        cout << "2������������" << endl;
        int dSelect;
        cin >> dSelect;

        // ��ְ��id����
        if(dSelect == 1){
            cout << "������Ҫ���ҵ�ְ��id��" << endl;
            int id;
            cin >>id;
            int index = isExistFromId(id);
            showEmp(index);
        }else if(dSelect == 2){
            cout << "������Ҫ���ҵ�ְ�����ƣ�" << endl;
            string name;
            cin >>name;
            int index = isExistFromName(name);
            showEmp(index);
        }

    }
}

// ����ְ��
void WorkerManager::sortEmp(){
    if(this->m_FileIsEmpty){
        cout << "�ļ������ڻ��ļ���¼Ϊ�գ�" << endl;
    }else {
        cout << "��ѡ������ʽ�� " << endl;
        cout << "1����ְ��id�Ž�������" << endl;
        cout << "2����ְ��id�Ž��н���" << endl;
        int sort = 0;
        cin >> sort;
//        if(sort == 1){// ð������
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
                if(sort == 1){ // ����
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
        cout << "����ɹ�,�������Ϊ��" << endl;
        save();
        showEmp();

    }
}

//����ļ�
void WorkerManager::cleanFile(){
    cout << "ȷ����գ�" << endl;
    cout << "1��ȷ��" << endl;
    cout << "2������" << endl;
    if(this->m_FileIsEmpty || this->m_EmpArray == NULL){
        cout << "�ļ�Ϊ�ջ򲻴��ڣ�" << endl;
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
        cout << "��ճɹ���" << endl;
    }
}