////
//// Created by chenjiahong on 2022/2/24.
//// ++ �������������
////
//
//#include <iostream>
//using namespace std;
//
//class MyInteger{
//    friend ostream & operator<<(ostream &cout , MyInteger myint);
//private:
//    int m_num;
//public:
//    MyInteger(){
//        this->m_num = 0;
//    }
//    MyInteger(int num){
//        this->m_num = num;
//    }
//
//    // ǰ��++ ��++a
//    MyInteger& operator++(){
//        ++this->m_num;
//        return *this;
//    }
//    // ����++ ��a++
//    MyInteger operator++(int){
//        MyInteger tmp = *this;
//        ++this->m_num;
//        return tmp;
//    }
//};
//
//ostream & operator<<(ostream &cout , MyInteger myint){
//    cout << myint.m_num << endl;
//    return cout;
//}
//
//void test01(){
//    MyInteger myint(10);
//    // ǰ�õ���
////    cout << ++(++myint) << endl;
////    cout << myint << endl;
//
//    // ���õ���
//    cout << (myint++)++ << endl;  // ע������ص� << ���ţ������������Ͳ���ʹ������
//    cout << myint << endl;
//}
//
//int main(){
//    test01();
//}
//
