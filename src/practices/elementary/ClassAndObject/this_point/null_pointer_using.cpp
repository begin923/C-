////
//// Created by JM on 2022-02-19.
//// ��ָ����ó�Ա������ʾ
////
//
//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    int m_age;
//
//    void showClassName(){
//        cout << " ����Person��" << endl;
//    }
//
//    void showPerson(){
//        if (this == NULL){  // ����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
//            return;
//        }
//        // C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
//        cout << "m_age :" << m_age << endl;  // �൱�� this->m_age , this = NULL ʱ����ó���
//    }
//};
//
//void test01(){
//    Person *p = NULL;
//    p->showClassName();
//    p->showPerson();
//
//}
//
//int main(){
//    test01();
//
//    return 0;
//}
//
