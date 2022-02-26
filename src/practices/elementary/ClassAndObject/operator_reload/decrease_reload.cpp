////
//// Created by chenjiahong on 2022/2/24.
//// -- 递减运算符重载
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
//    // 前置递减重载
//    MyInteger& operator--(){
//        --this->m_num;
//        return *this;
//    }
//
//    // 后置递减重载
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
//// 重载左移运算符
//ostream& operator<<(ostream &cout , MyInteger myInteger){
//    cout << myInteger.m_num ;
//    return cout;
//}
//
//void test01(){
//    MyInteger myInteger(10);
//    // 前置递减
//    cout << myInteger << endl;
//    cout << --myInteger << endl;
//
//    // 后置递减
//    cout << myInteger << endl;
//    cout << myInteger-- << endl;  // 注意项：重载的 << 符号，对象数据类型不能使用引用
//    cout << myInteger << endl;
//}
//
//int main(){
//    test01();
//    return 0;
//}
//
