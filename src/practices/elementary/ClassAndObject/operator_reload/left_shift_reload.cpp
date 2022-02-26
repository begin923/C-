////
//// Created by chenjiahong on 2022/2/24.
//// << 左移运算符重载
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
//    // 成员函数 实现不了  p << cout 不是我们想要的效果
////    ostream & operator<<(ostream &out,Person &p){  // 不支持
////        cout << p.m_a << "\t\t" << p.m_b << endl;
////        return out;
////    }
//};
//
//// 全局函数实现左移重载
//// 注意：ostream对象只能有一个，要使用引用
//ostream & operator<<(ostream &out,Person &p){   // 简写: cout << p
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
