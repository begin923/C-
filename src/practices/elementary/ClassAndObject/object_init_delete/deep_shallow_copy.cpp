////
//// Created by JM on 2022-02-16.
//// �����ǳ������ʾ
////
//
//#include <iostream>
//using  namespace std;
//
//class Person {
//public:
//    //�޲Σ�Ĭ�ϣ����캯��
//    Person() {
//        cout << "�޲ι��캯��!" << endl;
//    }
//    //�вι��캯��
//    Person(int age ,int height) {
//
//        cout << "�вι��캯��!" << endl;
//
//        m_age = age;
//        m_height = new int(height);
//
//    }
//    //�������캯��
////    Person(const Person& p) {
////        cout << "�������캯��!" << endl;
////        //�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
////        m_age = p.m_age;
////        m_height = p.m_height;
////        cout << m_height << "\t" << p.m_height << endl;
//////        m_height = new int(*p.m_height);
////
////    }
//
//    //��������
//    ~Person() {
//        cout << "��������!" << endl;
//        cout << "m_height :" << m_height << "\t" << *m_height << endl;
//        if (m_height != 0)
//        {
//            delete m_height;
//            m_height = NULL;  // ��ֹҰָ��
//            cout << "�ͷź�" << m_height << endl;
//            cout << "�ͷ� - m_height" << endl;
//        }
//    }
//public:
//    int m_age;
//    int* m_height;
//};
//
//void test01()
//{
//    Person p1(18, 180);
//
//    Person p2(p1);
//
//    cout << "p1�����䣺 " << p1.m_age << " ��ߣ� " << *p1.m_height << endl;
//
//    cout << "p2�����䣺 " << p2.m_age << " ��ߣ� " << *p2.m_height << endl;
//}
//
//int main() {
//
//    test01();
//
//    return 0;
//}