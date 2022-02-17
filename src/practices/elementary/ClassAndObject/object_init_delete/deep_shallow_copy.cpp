////
//// Created by JM on 2022-02-16.
//// 深拷贝与浅拷贝演示
////
//
//#include <iostream>
//using  namespace std;
//
//class Person {
//public:
//    //无参（默认）构造函数
//    Person() {
//        cout << "无参构造函数!" << endl;
//    }
//    //有参构造函数
//    Person(int age ,int height) {
//
//        cout << "有参构造函数!" << endl;
//
//        m_age = age;
//        m_height = new int(height);
//
//    }
//    //拷贝构造函数
////    Person(const Person& p) {
////        cout << "拷贝构造函数!" << endl;
////        //如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
////        m_age = p.m_age;
////        m_height = p.m_height;
////        cout << m_height << "\t" << p.m_height << endl;
//////        m_height = new int(*p.m_height);
////
////    }
//
//    //析构函数
//    ~Person() {
//        cout << "析构函数!" << endl;
//        cout << "m_height :" << m_height << "\t" << *m_height << endl;
//        if (m_height != 0)
//        {
//            delete m_height;
//            m_height = NULL;  // 防止野指针
//            cout << "释放后：" << m_height << endl;
//            cout << "释放 - m_height" << endl;
//        }
//    }
//public:
//    int m_age;
//    int* m_height;
//};
//
//void test01()
//{
//    Person p1(18, 180);
//
//    Person p2(p1);
//
//    cout << "p1的年龄： " << p1.m_age << " 身高： " << *p1.m_height << endl;
//
//    cout << "p2的年龄： " << p2.m_age << " 身高： " << *p2.m_height << endl;
//}
//
//int main() {
//
//    test01();
//
//    return 0;
//}