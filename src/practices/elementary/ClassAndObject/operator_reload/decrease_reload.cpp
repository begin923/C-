////
//// Created by chenjiahong on 2022/2/24.
//// -- �ݼ����������
////
//
//#include <iostream>
//using namespace std;
//
//class MyInteger{
//    friend ostream& operator<<(ostream &cout , MyInteger myInteger);
//private:
//    int m_num;
//public:
//    MyInteger(){};
//    MyInteger(int num){
//        this->m_num = num;
//    }
//
//    // ǰ�õݼ�����
//    MyInteger& operator--(){
//        --this->m_num;
//        return *this;
//    }
//
//    // ���õݼ�����
//    MyInteger operator--(int){
//        MyInteger myInteger = *this;
//        this->m_num--;
//        return myInteger;
//    };
//
//
//
//};
//
//// �������������
//ostream& operator<<(ostream &cout , MyInteger myInteger){
//    cout << myInteger.m_num ;
//    return cout;
//}
//
//void test01(){
//    MyInteger myInteger(10);
//    // ǰ�õݼ�
//    cout << myInteger << endl;
//    cout << --myInteger << endl;
//
//    // ���õݼ�
//    cout << myInteger << endl;
//    cout << myInteger-- << endl;  // ע������ص� << ���ţ������������Ͳ���ʹ������
//    cout << myInteger << endl;
//}
//
//int main(){
//    test01();
//    return 0;
//}
//
