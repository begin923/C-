////
//// Created by chenjiahong on 2022/2/17.
//// ��̬��Ա����
////
//
///**
// * ��̬��Ա�����ض�˵��
// * 1��������һ������
// * 2����̬��Ա����ֻ�ܷ��ʾ�̬��Ա���� , �Ǿ�̬��Ա�������Ե��þ�̬��Ա����
// * 3����̬��Ա����Ҳ���з���Ȩ�޵�
// */
//
//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    static int m_a;
//    int m_b;
//
//    static void func1(){
//        cout << "���� func1 " << endl;
//        cout << m_a << endl;
////        cout << m_b << endl; // ���뱨����̬��Ա�������ܷ��ʷǾ�̬��Ա����
//    }
//
//    void func3(){
//        cout << "����func3" << endl;
//        cout << m_a << endl;
//    };
//
//    void func4(){
//        func3();
//    }
//
//private:
//    static void func2(){
//        cout << "���� func2" << endl;
//    }
//};
//
//int Person::m_a = 100;
//
//void check(){
//    Person p1;
//    p1.func1();
//
//    Person::func1();
////    Person::func2(); // ����ʧ�ܣ����ⲻ�ܵ���˽��Ȩ�޵ľ�̬��Ա����
//
//    p1.func3();
//}
//
//int main(){
//    check();
//
//    return 0;
//}