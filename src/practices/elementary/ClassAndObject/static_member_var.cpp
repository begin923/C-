////
//// Created by chenjiahong on 2022/2/17.
//// ��̬��Ա������ʾ
////
//
///**
// * ��̬��Ա�����ص�
// * 1���ڱ���׶η����ڴ�
// * 2�����������������ʼ��
// * 3�����ж�����һ������
// * 4����̬��Ա����Ҳ�з���Ȩ��
// */
//
//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    static int m_a;
//private:
//    static int m_b;
//};
//
//int Person::m_a = 10;
//int Person::m_b = 10;
//
//void test01(){
//    /**
//     * ��̬��Ա�������ʷ�ʽ��
//     * 1��ͨ���������
//     * 2��ͨ�������
//     */
//
//    Person p1;
//    p1.m_a = 100;
//    cout << "p1.m_a :" << p1.m_a << endl;
//    Person p2;
//    p2.m_a = 200;
//    cout << "p1.m_a :" << p1.m_a << endl; // ���ж�����һ������
//    cout << "p2.m_a :" << p2.m_a << endl;
//
//    cout << "m_a :" << Person::m_a << endl;
//
//}
//
//int main(){
//    test01();
//
//    return 0;
//}