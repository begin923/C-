//
// Created by chenjiahong on 2022/2/25.
// ��ֵ���������
//

/**
 * ע����
 * 1��������Ĭ�ϵ� int ��ֵ�������ǳ������������������������ҲҪ���ظ�ֵ������ʹ���������Ϊǳ��������������ʹ��ͬһ���ڴ棬������������Ա�Ƿ����ʱ���ͷ����Σ��ᱨ��
 */
#include <iostream>
using namespace std;

class Person{
    friend ostream & operator<<(ostream &cout , Person person);
private:
//    string m_name;
    int *m_age;
public:
    Person(int age){
        m_age = new int(age);
    }

    // ���ظ�ֵ����� (�����ֵ����)
    Person& operator=(Person &p){
        // �ж�this ָ��ָ��ı����Ƿ�Ϊ�գ��Ƿ���Ҫ�Ƿ�����ڴ�
        if (m_age != NULL){
            delete m_age;
            m_age = NULL;  // ��ֹҰָ��
        }
//        this->m_name = p.m_name;
        // �������ṩ��m_age = p.m_age;
        m_age = new int(*p.m_age);
        return *this;  // ���ص�ǰ����
    }

    // ��������
    ~Person(){
        if(m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
    }
};

// ����<<�����
ostream & operator<<(ostream &cout , Person person){
    cout << *person.m_age;
    return cout;
}

void test01(){
    Person p1(10);
    Person p2(12);

    /**
     * ǳ�����������
     * �����	500
     * ţħ��	1000
     * �����	45378848  -- ��Ϊǰһ��������ڴ��Ѿ��ͷţ��ʻ�����������ұ������Կ��Կ�����
     */
    cout << p1 << endl;
    cout << p2 << endl;
    p2 = p1;
    cout << p1 << endl;
    cout << p2 << endl;
}

int main(){
    test01();
    return 0;
}



