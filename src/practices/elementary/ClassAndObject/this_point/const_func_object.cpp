////
//// Created by JM on 2022-02-19.
//// const ���εĳ�Ա���������
////
//
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Person{
//public:
//    string m_name = "����";
//    mutable int m_age;  // ��Ҫ��const ���εĳ�Ա��������������γ�Ա������ֵ��Ҫ�� mutable(�ɱ��)
//
//    /**
//     * const ���γ�Ա����
//     * 1��this �ı����ǣ�ָ�볣����Person * const this�� ,this ָ��ָ��this->m_name�������޸ģ� ָ���ֵ�����޸�
//     * 2���ڳ�Ա����������� const , �൱�����޸�this �� �� const Person * this; this ָ��ָ���thisֵ�������޸�
//     */
//    void func1() const {
////        this->m_name = "����";
//        cout << this->m_name << endl;
//        this->m_age = 21; // Ҫ��const ���εĳ�Ա��������������γ�Ա������ֵ��Ҫ�� mutable(�ɱ��)
//    }
//
//    void func2(){
//        this->m_age = 20;
//    }
//};
//
//void test01(){
//    // const ���ζ���
//    const Person p = Person(); // ������
//    cout << p.m_name << endl;// ���������޸ĳ�Ա������ֵ�����ǿ��Է���
//    p.func1();
////    p.func2(); // ������ֻ�ܵ��ó�����,���ܵ��÷ǳ�����
//    Person p2;
//    p2.func1();  // ��ͨ������Ե���const ���εĺ���
//    p2.m_name = "����";
//    cout << p2.m_name << "\t\t"<< p2.m_age << endl;
//}
//
//int main(){
//    test01();
//}
//
