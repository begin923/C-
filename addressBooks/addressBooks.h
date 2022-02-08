//
// Created by JM on 2022-01-29.
//
#include <iostream>
#include <malloc.h>

using namespace std;
#ifndef DATA_STRUCTURE_ADDRESS_LIST_H
#define DATA_STRUCTURE_ADDRESS_LIST_H
#define MAX 1000


// 联系人信息结构体定义
struct Person{
    string name; // 姓名
    int sex; // 1 - 男 ， 0 - 女
    int age; // 年龄
    string phone_number; // 电话号码
    string home_address; // 家庭地址
} ps;

// 通讯录结构体定义
struct AddressBooks {
    Person personArray[MAX];  // 通讯录最大长度
    int m_size; // 通讯录人员数量
};

// 初始化通讯录结构体
AddressBooks InitAddressBooks(){
    AddressBooks abs;
    abs.m_size = 0;
    abs.personArray;
    return abs;
}


void funcSelect(AddressBooks *abs,int option = -1);

//void modifyPersonInfo(AddressBooks *abs);

//void truncatePerson(AddressBooks *abs);

// 判断通讯录人员是否存在，存在返回位置信息，反之返回 -1
int isExist(AddressBooks abs,string name){
    for (int i = 0; i < abs.m_size; ++i) {
        if(name == abs.personArray[i].name){
            return i;
        }
    }
    return -1;
}

void showMenu(){
    cout << "********************************\n"
            "********  1 - 添加联系人 *******\n"
            "********  2 - 显示联系人 *******\n"
            "********  3 - 删除联系人 *******\n"
            "********  4 - 修改联系人 *******\n"
            "********  5 - 清空联系人 *******\n"
            "********  6 - 查找联系人 *******\n"
            "********  0 - 退出系统   *******\n" << endl;
}

// 加载人员通讯里信息
void loadPerson(Person *per,int m_size){
    cout << "请输入姓名：" << endl;
    string name;
    cin >> name;
    per[m_size].name = name;
//    cout << "per->name :" << per[m_size].name << endl;
    cout << "请输入性别(1-男，0-女)：" << endl;
    int sex = 0;
    while(true){
        cin >> sex;
        if(sex == 0 || sex == 1){
            per[m_size].sex = sex;
            break;
        }
        cout << "输入有误（sex = " << sex << "），请继续输入！" << endl;
    }
    cout << "请输入您的年龄（0-150）：" << endl;
    int age = 0;
    while (true){
        cin >> age;
        if(age >= 0 && age <= 150){
            per[m_size].age = age;
            break;
        }
        cout << "输入有误（age = " << age << "），请继续输入！" << endl;
    }
    cout << "请输入您的电话号码(11位)：" << endl;
    string phone_number = "12345678909";
    while (true){
        cin >> phone_number;
        if(phone_number.length() == 11){  // 还可以增加第一位为非 0 开始
            per[m_size].phone_number = phone_number;
            break;
        }else if(phone_number.length() < 11){
            cout << "输入有误（phone_number = " << phone_number << "），电话号码长度小于11位，请继续输入！" << endl;
        }else if(phone_number.length() > 11){
            cout << "输入有误（phone_number = " << phone_number << "），电话号码长度大于11位，请继续输入！" << endl;
        }
    }

    cout << "请添加您的家庭地址 ：" << endl;
    cin >> per[m_size].home_address;
}

// 添加联系人
void addPerson(AddressBooks *abs){
    if(abs->m_size < MAX){
        loadPerson(abs->personArray,abs->m_size);
        abs->m_size++;
        cout << "联系人添加成功！\n" << endl;
    }
    else{
        cout << "通讯录已满，无法添加！" << endl;
    }
}

// 显示联系人
void showPerson(AddressBooks abs){
    if(abs.m_size == 0){
        cout << "未添加联系人，请先添加联系人后再查看！" << endl;
    }
    else{
        for (int i = 0; i < abs.m_size; ++i) {
            cout << "第" << i + 1 << "个通讯录成员信息" << endl;
            cout << "姓名：" << abs.personArray[i].name << endl;
            cout << "性别：" << abs.personArray[i].sex << endl;
            cout << "年龄：" << abs.personArray[i].age << endl;
            cout << "电话号码：" << abs.personArray[i].phone_number << endl;
            cout << "家庭地址：" << abs.personArray[i].home_address << endl;
            cout << "\n" << endl;
        }
    }
}


// 删除联系人
void deletePerson(AddressBooks *abs){
    string name;
    cout << "请输入您要删除的联系人：" << endl;
    cin >> name;
    int loc = isExist(*abs,name);
    if(loc == -1){
        cout <<  name << " - 查无此人" << endl;
    }else{
        for (int i = loc; i < abs->m_size - 1; ++i) {
            abs->personArray[i] = abs->personArray[i+1];
        }
        abs->m_size--;
        cout << "删除成功！" << endl;
    }
//    system("pause");
//    system("cls");
}

// 查找联系人
void findPerson(AddressBooks abs){
    cout << "请输入要查找的姓名：" << endl;
    string name;
    cin >> name;
    int loc = isExist(abs,name);
    if(loc == -1){
        cout << "查无此人" << endl;
    }
    else{
        cout << "第" << loc + 1 << "个通讯录成员信息" << endl;
        cout << "姓名：" << abs.personArray[loc].name << endl;
        cout << "性别：" << abs.personArray[loc].sex << endl;
        cout << "年龄：" << abs.personArray[loc].age << endl;
        cout << "电话号码：" << abs.personArray[loc].phone_number << endl;
        cout << "家庭地址：" << abs.personArray[loc].home_address << endl;
        cout << "\n" << endl;
    }
}

// 修改联系人信息
void updatePersonInfo(Person *person){
    cout << "请输入您要修改的姓名(-1:不修改)：" << endl;
    string name;
    cin >> name;
    person->name = name.compare("--") ? name:person->name;
    
    cout << "请您输入新的性别(-1:不修改)：" << endl;
    int sex;
    cin >> sex;
    person->sex = sex != -1 ? sex:person->sex;

    cout << "请您输入新的年龄(-1:不修改)：" << endl;
    int age;
    cin >> age;
    person->age = age != -1 ? age:person->age;

    cout << "请您输入新的电话号码(-1:不修改)：" << endl;
    string phone_number;
    cin >> phone_number;
    person->phone_number = (phone_number.compare("-1")) ? phone_number:person->phone_number;

    cout << "请您输入新的家庭地址(-1:不修改)：" << endl;
    string home_address;
    cin >> home_address;
    person->home_address = (home_address.compare("-1")) ? home_address:person->home_address;

}

// 修改联系人
void modifyPersonInfo(AddressBooks *abs) {
    cout << "请输入要修改的联系人信息：" << endl;
    string name;
    cin >> name;
    int loc = isExist(*abs,name);
    if(loc == -1){
        cout << "查无此人" << endl;
    }
    else{
//        cout << "请问要修改哪个信息（1-姓名，2-性别，3-年龄，4-电话号码，5-家庭地址,6-所有）：" << endl;
//        int mod_num;
//        cin >> mod_num;
        updatePersonInfo(&(abs->personArray[loc]));
    }

}

// 清空通讯录联系人
void truncatePerson(AddressBooks *abs) {
    abs->m_size = 0;
    cout << "通讯录已经清空！" << endl;
}



// 退出通讯录
bool exitSystem(int option){
    return option == 0 ? true : false ;
}


// 系统功能选择
void funcSelect(AddressBooks *abs,int option){
    switch (option) {
        case 1:
            addPerson(abs);
            break;
        case 2:
            showPerson(*abs);
            break;
        case 3:
            deletePerson(abs);
            break;
        case 4:
            modifyPersonInfo(abs);
            break;
        case 5:
            truncatePerson(abs);
            break;
        case 6:
            findPerson(*abs);
            break;
        case 0 :
            exitSystem(option);
            break;
        default:
            showMenu();
            break;
    }

}



#endif //DATA_STRUCTURE_ADDRESS_LIST_H
