////
//// Created by chenjiahong on 2022/2/24.
//// << �������������
////
//
//#include <iostream>
//using namespace std;
//
//class Person{
//    friend ostream & operator<<(ostream &out,Person &p);
//private:
//    int m_a;
//    int m_b;
//public:
//    Person(int a,int b){
//        this->m_a = a;
//        this->m_b = b;
//    }
//
//    // ��Ա���� ʵ�ֲ���  p << cout ����������Ҫ��Ч��
////    ostream & operator<<(ostream &out,Person &p){  // ��֧��
////        cout << p.m_a << "\t\t" << p.m_b << endl;
////        return out;
////    }
//};
//
//// ȫ�ֺ���ʵ����������
//// ע�⣺ostream����ֻ����һ����Ҫʹ������
//ostream & operator<<(ostream &out,Person &p){   // ��д: cout << p
//    cout << p.m_a << "\t" << p.m_b << endl;
//    return out;
//}
//
//void test01(){
//    Person p(10,10);
//    cout << p << endl;
//}
//
//int main(){
//    test01();
//    return 0;
//}
//
