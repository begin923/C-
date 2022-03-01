////
//// Created by chenjiahong on 2022/2/25.
//// 赋值运算符重载
////
//
///**
// * 注意项
// * 1、编译器默认的 int 赋值运算符是浅拷贝，若重载了析构函数，也要重载赋值函数且使用深拷贝，因为浅拷贝是两个对象使用同一个内存，程序结束或程序员是否对象时辉释放两次，会报错
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
//    // 重载赋值运算符 (深拷贝赋值操作)
//    Person& operator=(Person &p){
//        // 判断this 指针指向的变量是否为空，是否需要是否堆区内存
//        if (this->m_age != NULL){
//            delete this->m_age;
//            this->m_age = NULL;  // 防止野指针
//        }
//        // 编译器提供：m_age = p.m_age;
//        this->m_age = new int(*p.m_age);
//        this->m_name = p.m_name;
//        return *this;  // 返回当前对象
//    }
//
//    // 析构函数
//    ~Person(){
//        if(this->m_age != NULL){
//            delete this->m_age;
//            this->m_age = NULL;
//            cout << "调用析构函数" << endl;
//        }
//    }
//};
//
//// 重载<<运算符
////ostream & operator<<(ostream &cout , Person person){
////    cout << *person.m_age;
////    return cout;
////}
//
//void test01(){
//    Person p1(10,"abc");
//    Person p2(12,"qwe");
//    p2 = p1;
//    cout << *p1.m_age << "\t" << p1.m_name << endl;  // 重载 << 输出对象，会异常
//    cout << *p2.m_age << "\t" << p2.m_name << endl;
//}
//
//int main(){
//    test01();
//    return 0;
//}