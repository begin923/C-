////
//// Created by chenjiahong on 2022/2/25.
//// ��ֵ���������
////
//
///**
// * ע����
// * 1��������Ĭ�ϵ� int ��ֵ�������ǳ������������������������ҲҪ���ظ�ֵ������ʹ���������Ϊǳ��������������ʹ��ͬһ���ڴ棬������������Ա�Ƿ����ʱ���ͷ����Σ��ᱨ��
// */
//#include <iostream>
//using namespace std;
//
//class Person{
//    friend ostream & operator<<(ostream &cout , Person person);
//    friend void test01();
//private:
//    string m_name;
//    int *m_age;
//public:
//    Person(int age , string name){
//        this->m_age = new int(age);
//        this->m_name = name;
//    }
//
//    // ���ظ�ֵ����� (�����ֵ����)
//    Person& operator=(Person &p){
//        // �ж�this ָ��ָ��ı����Ƿ�Ϊ�գ��Ƿ���Ҫ�Ƿ�����ڴ�
//        if (this->m_age != NULL){
//            delete this->m_age;
//            this->m_age = NULL;  // ��ֹҰָ��
//        }
//        // �������ṩ��m_age = p.m_age;
//        this->m_age = new int(*p.m_age);
//        this->m_name = p.m_name;
//        return *this;  // ���ص�ǰ����
//    }
//
//    // ��������
//    ~Person(){
//        if(this->m_age != NULL){
//            delete this->m_age;
//            this->m_age = NULL;
//            cout << "������������" << endl;
//        }
//    }
//};
//
//// ����<<�����
////ostream & operator<<(ostream &cout , Person person){
////    cout << *person.m_age;
////    return cout;
////}
//
//void test01(){
//    Person p1(10,"abc");
//    Person p2(12,"qwe");
//    p2 = p1;
//    cout << *p1.m_age << "\t" << p1.m_name << endl;  // ���� << ������󣬻��쳣
//    cout << *p2.m_age << "\t" << p2.m_name << endl;
//}
//
//int main(){
//    test01();
//    return 0;
//}