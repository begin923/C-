////
//// Created by JM on 2022-02-17.
//// ����������Ա����
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Phone{
//public:
//    string m_PhoneName;
//
//    Phone(const string &m_Phonename) : m_PhoneName(m_Phonename) {
//        cout << "Phone����" << endl;
//    }
//
//    ~Phone(){
//        cout << "Phone����" << endl;
//    }
//};
//
//class Person{
//public:
//    string m_Name;
//    Phone m_Phone;
//
//    /**
//     * �����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
//     * �����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
//     * ����˳���빹���෴
//     */
//    Person(string m_name, string m_PhoneName) : m_Name(m_name), m_Phone(m_PhoneName) {
//        cout << "Person����" << endl;
//    }
//
//    ~Person(){
//        cout << "Person����" << endl;
//    }
//
//    void playGame()
//    {
//        cout << m_Name << " ʹ��" << m_Phone.m_PhoneName << " ���ֻ�! " << endl;
//    }
//};
//
//void test01(){
//    Person p("����" , "ƻ��X");
//    p.playGame();
//}
//
//int main(){
//    test01();
//
//    return 0;
//}
//
