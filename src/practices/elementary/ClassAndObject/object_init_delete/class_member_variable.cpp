////
//// Created by JM on 2022-02-17.
//// 类对象做类成员变量
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
//        cout << "Phone构造" << endl;
//    }
//
//    ~Phone(){
//        cout << "Phone析构" << endl;
//    }
//};
//
//class Person{
//public:
//    string m_Name;
//    Phone m_Phone;
//
//    /**
//     * 当类中成员是其他类对象时，我们称该成员为 对象成员
//     * 构造的顺序是 ：先调用对象成员的构造，再调用本类构造
//     * 析构顺序与构造相反
//     */
//    Person(string m_name, string m_PhoneName) : m_Name(m_name), m_Phone(m_PhoneName) {
//        cout << "Person构造" << endl;
//    }
//
//    ~Person(){
//        cout << "Person析构" << endl;
//    }
//
//    void playGame()
//    {
//        cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机! " << endl;
//    }
//};
//
//void test01(){
//    Person p("张三" , "苹果X");
//    p.playGame();
//}
//
//int main(){
//    test01();
//
//    return 0;
//}
//
