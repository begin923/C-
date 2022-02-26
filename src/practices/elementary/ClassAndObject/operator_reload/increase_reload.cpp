////
//// Created by chenjiahong on 2022/2/24.
//// ++ 递增运算符重载
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
//    // 前置++ ：++a
//    MyInteger& operator++(){
//        ++this->m_num;
//        return *this;
//    }
//    // 后置++ ：a++
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
//    // 前置递增
////    cout << ++(++myint) << endl;
////    cout << myint << endl;
//
//    // 后置递增
//    cout << (myint++)++ << endl;  // 注意项：重载的 << 符号，对象数据类型不能使用引用
//    cout << myint << endl;
//}
//
//int main(){
//    test01();
//}
//
